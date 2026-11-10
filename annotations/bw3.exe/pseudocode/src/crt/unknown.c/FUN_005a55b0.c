// Name: crt_unknown.c_FUN_005a55b0
// Address: 005a55b0
// Address Range: [[005a55b0, 005a55c6]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_FUN_005a55b0(char *path)

#include "nocturne.h"

int __cdecl FUN_005a55b0(char *path)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  
  BVar1 = SetCurrentDirectoryA(path);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  iVar3 = FUN_005ab400(DVar2);
  return iVar3;
}
