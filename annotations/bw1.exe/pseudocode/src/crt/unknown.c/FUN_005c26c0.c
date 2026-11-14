// Name: crt_unknown.c_FUN_005c26c0
// Address: 005c26c0
// Address Range: [[005c26c0, 005c26d6]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_FUN_005c26c0(char *path)

#include "nocturne.h"

int __cdecl FUN_005c26c0(char *path)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  
  BVar1 = SetCurrentDirectoryA(path);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  iVar3 = FUN_005c85c0(DVar2);
  return iVar3;
}
