// Name: FUN_004d9eb0
// Address: 004d9eb0
// Address Range: [[004d9eb0, 004d9f1b]]
// Convention: unknown
// Signature: int FUN_004d9eb0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d9eb0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x1d5dc90;
  iVar4 = 0;
  iVar1 = FUN_004d9d20(param_1);
  if (0 < _DAT_01d5dc88) {
    do {
      iVar2 = FUN_005a3260(iVar1 + 0x78,iVar3);
      if (iVar2 == 0) {
        return iVar3 + 0x200;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x300;
    } while (iVar4 < _DAT_01d5dc88);
  }
  FUN_005a28c0(0x1d5bd80,"Add to dict: %s",iVar1 + 0x78);
  return 0x1d5bd80;
}
