// Name: FUN_005c1dc0
// Address: 005c1dc0
// Address Range: [[005c1dc0, 005c1e02]]
// Convention: unknown
// Signature: undefined4 FUN_005c1dc0(LPCSTR param_1,byte param_2)

#include "nocturne.h"

uint FUN_005c1dc0(LPCSTR param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  DWORD dwFileAttributes;
  BOOL BVar3;
  
  uVar1 = FUN_005c8510(param_1);
  if (uVar1 == 0xffffffff) {
    uVar2 = FUN_005c862c();
    return uVar2;
  }
  dwFileAttributes = uVar1 & 0xfffffffe;
  if ((param_2 & 0x80) == 0) {
    dwFileAttributes = dwFileAttributes | 1;
  }
  BVar3 = SetFileAttributesA(param_1,dwFileAttributes);
  if (BVar3 == 0) {
    uVar2 = FUN_005c862c();
    return uVar2;
  }
  return 0;
}
