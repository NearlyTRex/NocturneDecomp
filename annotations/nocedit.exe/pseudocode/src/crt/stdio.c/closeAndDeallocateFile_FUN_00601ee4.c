// Name: crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
// Address: 00601ee4
// Address Range: [[00601ee4, 00601f09]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4(FILE * file_handle, int close_flags)

#include "nocturne.h"

int __watcallStack
crt_stdio_c_closeAndDeallocateFile_FUN_00601ee4(FILE *file_handle,int close_flags)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_fclose_FUN_00601fd0(file_handle,close_flags);
  crt_stdio_c_DeallocateFileStruct_FUN_006093b0((FILE *)close_flags);
  return iVar1;
}
