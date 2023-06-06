#include <stdio.h>

#define ERROR   ( 0 );
#define SUCCESS ( 1 );

int initFiles() {

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