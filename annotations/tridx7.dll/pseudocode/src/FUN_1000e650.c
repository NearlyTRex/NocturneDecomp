// Name: FUN_1000e650
// Address: 1000e650
// Address Range: [[1000e650, 1000e6a4]]
// Convention: unknown
// Signature: uint FUN_1000e650(undefined4 param_1)

#include "nocturne.h"

uint FUN_1000e650(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 99;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = FUN_1000ff20(param_1,*(uint *)(iVar1 * 8 + 0x10017968));
    if (iVar2 == 0) {
      return (uint)*(ushort *)(iVar1 * 8 + 0x1001796c);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0xffff0000;
}
