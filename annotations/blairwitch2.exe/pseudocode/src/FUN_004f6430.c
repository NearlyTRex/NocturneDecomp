// Name: FUN_004f6430
// Address: 004f6430
// Address Range: [[004f6430, 004f6547]]
// Convention: unknown
// Signature: void FUN_004f6430(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6430(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  int local_18;
  
  bVar9 = 0;
  local_18 = 0;
  if (0 < (int)_DAT_01d09b88) {
    pfVar4 = (float *)&DAT_01d09b98;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d09b88) {
        uVar2 = uVar2 ^ _DAT_01d09b88;
      }
      pfVar5 = (float *)(&DAT_01d09b98 + uVar2 * 0x40);
      bVar1 = *pfVar4 <= -pfVar4[2];
      if (*pfVar5 <= -*(float *)(&DAT_01d09ba0 + uVar2 * 0x40)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar6 = _DAT_01d09b8c * 0x40;
        _DAT_01d09b8c = _DAT_01d09b8c + 1;
        pfVar5 = pfVar4;
        pfVar7 = (float *)(&DAT_01d0ab98 + iVar6);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
        }
        break;
      case 1:
        FUN_004f6090(pfVar5,pfVar4,&DAT_01d0ab98 + _DAT_01d09b8c * 0x40);
        _DAT_01d09b8c = _DAT_01d09b8c + 1;
        break;
      case 2:
        iVar6 = _DAT_01d09b8c * 0x40;
        _DAT_01d09b8c = _DAT_01d09b8c + 1;
        pfVar7 = pfVar4;
        pfVar8 = (float *)(&DAT_01d0ab98 + iVar6);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
        }
        FUN_004f6090(pfVar4,pfVar5,&DAT_01d0ab98 + _DAT_01d09b8c * 0x40);
        _DAT_01d09b8c = _DAT_01d09b8c + 1;
      }
      local_18 = local_18 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (local_18 < (int)_DAT_01d09b88);
  }
  return;
}
