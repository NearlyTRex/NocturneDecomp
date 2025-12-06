// Name: crt_io.c_check_file_access_FUN_0060c9f0
// Address: 0060c9f0
// Address Range: [[0060c9f0, 0060ca1d]]
// Convention: __watcallStack
// Signature: int crt_io.c_check_file_access_FUN_0060c9f0(char * filename, int access_mode)

#include "nocturne.h"

int __watcallStack crt_io_c_check_file_access_FUN_0060c9f0(char *filename,int access_mode)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = (*PTR_GetFileAttributesA_00611594)(filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = (*GetLastError)();
    iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DVar1);
    return iVar2;
  }
  if (((access_mode & 2U) != 0) && ((DVar1 & 1) != 0)) {
    iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
    return iVar2;
  }
  return 0;
}
