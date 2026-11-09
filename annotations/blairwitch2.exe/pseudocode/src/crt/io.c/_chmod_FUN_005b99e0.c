// Name: crt_io.c__chmod_FUN_005b99e0
// Address: 005b99e0
// Address Range: [[005b99e0, 005b9a22]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__chmod_FUN_005b99e0(char *path,int mode)

#include "nocturne.h"

int __cdecl _chmod(char *path,int mode)

{
  uint uVar1;
  int iVar2;
  DWORD dwFileAttributes;
  BOOL BVar3;
  
  uVar1 = FUN_005c0250(path);
  if (uVar1 == 0xffffffff) {
    iVar2 = FUN_005c036c();
    return iVar2;
  }
  dwFileAttributes = uVar1 & 0xfffffffe;
  if ((mode & 0x80U) == 0) {
    dwFileAttributes = dwFileAttributes | 1;
  }
  BVar3 = SetFileAttributesA(path,dwFileAttributes);
  if (BVar3 == 0) {
    iVar2 = FUN_005c036c();
    return iVar2;
  }
  return 0;
}
