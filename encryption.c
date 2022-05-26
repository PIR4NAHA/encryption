#include <stdio.h>
char * encrypt(char * org_msg); // make sure to initialise functions before use further in code!!!
char * decrypt(char * encoded_msg);

int main() {
    char org_msg[499] = ""; // set a given max length for the message
    printf("Input a message to encode(up to 500 characters):\n");
    gets(org_msg); // saves user input into variable org_msg

    printf("\nEncoded:\n");
    char encoded_msg = encrypt(org_msg);
    printf("%d\n", strlen(encoded_msg));

    printf("\nDecrypted:\n");
    char decoded_msg = decrypt(encoded_msg);
    return 0;
}

char * encrypt(char * org_msg)
{
    int current_char = 0;
    int msg_len = strlen(org_msg); // save the length of the original message for use later
    char encoded_msg[499];

    for (current_char=0;current_char<=msg_len-1;current_char++) // performs loop from 0 to 499
    {
        encoded_msg[current_char] = org_msg[current_char] + 3; // adds 50 to each char (remember chars are numbers and can be represented as both integers or Unicode symbols)
    }

    printf("%s\n", encoded_msg); // print encoded_msg as string
    return encoded_msg;
}

char * decrypt(char * encoded_msg)
{
    char decrypted_msg[499];
    int current_char = 0;
    int msg_len = strlen(encoded_msg);

    for (current_char=0;current_char<=msg_len-1;current_char++)
    {
        decrypted_msg[current_char] = encoded_msg[current_char] - 3; // reverse the encryption algorithm
    }

    printf("%s\n", decrypted_msg);
    return decrypted_msg;
}
