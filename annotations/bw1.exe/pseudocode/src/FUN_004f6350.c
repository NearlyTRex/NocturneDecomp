// Name: FUN_004f6350
// Address: 004f6350
// Address Range: [[004f6350, 004f63bb]]
// Convention: unknown
// Signature: int FUN_004f6350(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f6350(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x1d08dd0;
  iVar4 = 0;
  iVar1 = FUN_004f60c0(param_1);
  if (0 < _DAT_01d08dc8) {
    do {
      iVar2 = FUN_005c04e0(iVar1 + 0x78,iVar3);
      if (iVar2 == 0) {
        return iVar3 + 0x200;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x300;
    } while (iVar4 < _DAT_01d08dc8);
  }
  FUN_005bfb40(0x1d06e70,"Add to dict: %s",iVar1 + 0x78);
  return 0x1d06e70;
}
