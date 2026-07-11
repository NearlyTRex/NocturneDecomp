// Name: FUN_00565dd0
// Address: 00565dd0
// Address Range: [[00565dd0, 00565e12]]
// Convention: unknown
// Signature: undefined4 FUN_00565dd0(LPCSTR param_1,byte param_2)

#include "nocturne.h"

uint FUN_00565dd0(LPCSTR param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  DWORD dwFileAttributes;
  BOOL BVar3;
  
  uVar1 = FUN_0056cce0(param_1);
  if (uVar1 == 0xffffffff) {
    uVar2 = FUN_0056c73c();
    return uVar2;
  }
  dwFileAttributes = uVar1 & 0xfffffffe;
  if ((param_2 & 0x80) == 0) {
    dwFileAttributes = dwFileAttributes | 1;
  }
  BVar3 = SetFileAttributesA(param_1,dwFileAttributes);
  if (BVar3 == 0) {
    uVar2 = FUN_0056c73c();
    return uVar2;
  }
  return 0;
}
