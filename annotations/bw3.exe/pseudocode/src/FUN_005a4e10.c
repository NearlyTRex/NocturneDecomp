// Name: FUN_005a4e10
// Address: 005a4e10
// Address Range: [[005a4e10, 005a4e28]]
// Convention: unknown
// Signature: undefined4 FUN_005a4e10(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005a4e10(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_005ab400(DVar2);
  return uVar3;
}
