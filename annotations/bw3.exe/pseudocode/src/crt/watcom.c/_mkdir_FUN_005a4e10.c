// Name: crt_watcom.c__mkdir_FUN_005a4e10
// Address: 005a4e10
// Address Range: [[005a4e10, 005a4e28]]
// Convention: __cdecl
// Signature: int __cdecl crt_watcom_c__mkdir_FUN_005a4e10(char *path)

#include "nocturne.h"

int __cdecl _mkdir(char *path)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  
  BVar1 = CreateDirectoryA(path,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  iVar3 = FUN_005ab400(DVar2);
  return iVar3;
}
