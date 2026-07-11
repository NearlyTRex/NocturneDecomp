// Name: FUN_004beca0
// Address: 004beca0
// Address Range: [[004beca0, 004bed0b]]
// Convention: unknown
// Signature: int FUN_004beca0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004beca0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x1cb03d8;
  iVar4 = 0;
  iVar1 = FUN_004beb40(param_1);
  if (0 < _DAT_01cb03d0) {
    do {
      iVar2 = FUN_00564520(iVar1 + 0x78,iVar3);
      if (iVar2 == 0) {
        return iVar3 + 0x100;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x300;
    } while (iVar4 < _DAT_01cb03d0);
  }
  FUN_00563c90(0x1cae380,"Add to dict: %s",iVar1 + 0x78);
  return 0x1cae380;
}
