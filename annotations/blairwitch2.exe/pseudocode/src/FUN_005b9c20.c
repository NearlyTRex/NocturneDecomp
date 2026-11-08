// Name: FUN_005b9c20
// Address: 005b9c20
// Address Range: [[005b9c20, 005b9c38]]
// Convention: unknown
// Signature: undefined4 FUN_005b9c20(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005b9c20(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_005c0300(DVar2);
  return uVar3;
}
