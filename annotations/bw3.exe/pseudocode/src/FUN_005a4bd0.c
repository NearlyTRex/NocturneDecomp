// Name: FUN_005a4bd0
// Address: 005a4bd0
// Address Range: [[005a4bd0, 005a4c12]]
// Convention: unknown
// Signature: undefined4 FUN_005a4bd0(LPCSTR param_1,byte param_2)

#include "nocturne.h"

uint FUN_005a4bd0(LPCSTR param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  DWORD dwFileAttributes;
  BOOL BVar3;
  
  uVar1 = FUN_005ab350(param_1);
  if (uVar1 == 0xffffffff) {
    uVar2 = FUN_005ab46c();
    return uVar2;
  }
  dwFileAttributes = uVar1 & 0xfffffffe;
  if ((param_2 & 0x80) == 0) {
    dwFileAttributes = dwFileAttributes | 1;
  }
  BVar3 = SetFileAttributesA(param_1,dwFileAttributes);
  if (BVar3 == 0) {
    uVar2 = FUN_005ab46c();
    return uVar2;
  }
  return 0;
}
