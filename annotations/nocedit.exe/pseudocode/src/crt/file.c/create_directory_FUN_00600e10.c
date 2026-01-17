// Name: crt_file.c_create_directory_FUN_00600e10
// Address: 00600e10
// Address Range: [[00600e10, 00600e28]]
// Convention: __cdecl
// Signature: int crt_file.c_create_directory_FUN_00600e10(char * path)

#include "nocturne.h"

int __cdecl crt_file_c_create_directory_FUN_00600e10(char *path)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = (*g_CreateDirectoryAFunc)(path,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = (*g_GetLastErrorFunc)();
  iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(windows_error);
  return iVar2;
}
