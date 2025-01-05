#include <stdio.h>

struct RTrieState {
	unsigned char node[10]; // size
	// char *label;
	// int i;
	// unsigned char *next_child;
};

void print_struct_as_hex(void *struct_ptr, unsigned int size) {
    unsigned char *byte_ptr = (unsigned char *)struct_ptr;
    for (size_t i = 0; i < size; i++) {
        printf("%02x ", byte_ptr[i]);
    }
    printf("\n");
}

int main() {
    struct RTrieState aa;
    unsigned char a = 0x30;
    // aa.i = 100;
    // printf("Hexadecimal: %x\n", aa); // Prints in lowercase

    print_struct_as_hex(&aa, sizeof(RTrieState));

    return 0;
}


