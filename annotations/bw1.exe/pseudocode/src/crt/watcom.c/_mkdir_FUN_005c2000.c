// Name: crt_watcom.c__mkdir_FUN_005c2000
// Address: 005c2000
// Address Range: [[005c2000, 005c2018]]
// Convention: __cdecl
// Signature: int __cdecl crt_watcom_c__mkdir_FUN_005c2000(char *path)

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
  iVar3 = FUN_005c85c0(DVar2);
  return iVar3;
}
