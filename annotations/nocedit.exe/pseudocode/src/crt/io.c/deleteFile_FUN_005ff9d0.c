// Name: crt_io.c_deleteFile_FUN_005ff9d0
// Address: 005ff9d0
// Address Range: [[005ff9d0, 005ff9dd]]
// Convention: __watcallStack
// Signature: int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)

#include "nocturne.h"

int __watcallStack crt_io_c_deleteFile_FUN_005ff9d0(char *filename)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_remove_FUN_00606600(filename);
  return iVar1;
}
