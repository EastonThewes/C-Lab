#include <stdio.h>
#include <string.h>

#define MAX_FILE_NAME ( 65 );
#define INVALID_NAME ( 1 )

typedef struct {
    struct FileNode* head;
    struct FileNode* tail;
    int file_count;
} FileList;

typedef struct {
    struct File* fp;
    struct FileNode* next;
} FileNode;

typedef struct {
    FILE* fp;
    char filename[MAX_FILE_NAME];
    unsigned short permissions;
    // Group
    // Owner
    
} File;

typedef enum {
    FILE_SUCCESS = 0,
    FILE_FAIL = 1
} file_result_t

file_result_t init_file_list() {

}

file_result_t init_files() {

    // Create and overwrite files
    FILE *accountsFile = fopen("files/accounts.txt","w+");
    FILE *auditFile = fopen("files/audit.txt","w+");
    FILE *groupsFile = fopen("files/groups.txt","w+");
    FILE *filesFile = fopen("files/files.txt","w+");

    // Check to make sure no errors occured
    if (
        accountsFile == NULL    || 
        auditFile == NULL       ||   
        groupsFile == NULL      ||
        filesFile == NULL
    ) {
        return 0;
    }

    // Close file streams
    fclose(accountsFile);
    fclose(auditFile);
    fclose(groupsFile);
    fclose(filesFile);
}

file_result_t create_file(char* filename) {
    
    // Make sure filename is valid
    if (check_filename_length == INVALID_NAME) {
        return FILE_FAIL;
    }

    // Replace with file_exists
    if (fopen(filename,"r") != NULL) {
        return FILE_FAIL;
    }

    File file;

    // Set filename to null terminators
    memset(file.filename, "\0", MAX_FILE_NAME);

    // Copy filename into file data struct, minus one to leave
    // one null terminator at the end
    strncpy(file.filename, filename, MAX_FILE_NAME - 1);


}

void change_file_owner() {

}

void change_file_group() {

}

void change_file_permissions() {

}

void add_file_to_list() {

}

void check_filename_length(char* filename) {
    return strlen(filename) > MAX_FILE_NAME - 1;
}

void find_file() {

}

void file_exists() {

}