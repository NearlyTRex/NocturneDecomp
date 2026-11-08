// Name: FUN_005b99e0
// Address: 005b99e0
// Address Range: [[005b99e0, 005b9a22]]
// Convention: unknown
// Signature: undefined4 FUN_005b99e0(LPCSTR param_1,byte param_2)

#include "nocturne.h"

uint FUN_005b99e0(LPCSTR param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  DWORD dwFileAttributes;
  BOOL BVar3;
  
  uVar1 = FUN_005c0250(param_1);
  if (uVar1 == 0xffffffff) {
    uVar2 = FUN_005c036c();
    return uVar2;
  }
  dwFileAttributes = uVar1 & 0xfffffffe;
  if ((param_2 & 0x80) == 0) {
    dwFileAttributes = dwFileAttributes | 1;
  }
  BVar3 = SetFileAttributesA(param_1,dwFileAttributes);
  if (BVar3 == 0) {
    uVar2 = FUN_005c036c();
    return uVar2;
  }
  return 0;
}
