// Name: crt_unknown.c_FUN_005ba2e0
// Address: 005ba2e0
// Address Range: [[005ba2e0, 005ba2f6]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_FUN_005ba2e0(char *path)

#include "nocturne.h"

int __cdecl FUN_005ba2e0(char *path)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  
  BVar1 = SetCurrentDirectoryA(path);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  iVar3 = FUN_005c0300(DVar2);
  return iVar3;
}
