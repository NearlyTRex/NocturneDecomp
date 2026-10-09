// Name: crt_io.c__chmod_FUN_00565dd0
// Address: 00565dd0
// Address Range: [[00565dd0, 00565e12]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__chmod_FUN_00565dd0(char *path,int mode)

#include "nocturne.h"

int __cdecl _chmod(char *path,int mode)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = __getfileattr(path);
  if (DVar1 == 0xffffffff) {
    DVar1 = __set_errno();
    return DVar1;
  }
  DVar1 = DVar1 & 0xfffffffe;
  if ((mode & 0x80U) == 0) {
    DVar1 = DVar1 | 1;
  }
  BVar2 = SetFileAttributesA(path,DVar1);
  if (BVar2 == 0) {
    DVar1 = __set_errno();
    return DVar1;
  }
  return 0;
}
