// Name: FUN_00515080
// Address: 00515080
// Address Range: [[00515080, 00515193]]
// Convention: unknown
// Signature: void FUN_00515080(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515080(void)

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
  if (0 < (int)_DAT_01d227e8) {
    pfVar4 = (float *)&DAT_01d22ffc;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d227e8) {
        uVar2 = uVar2 ^ _DAT_01d227e8;
      }
      pfVar5 = (float *)(&DAT_01d22ffc + uVar2 * 0x40);
      bVar1 = pfVar4[2] <= *pfVar4;
      if (*(float *)(&DAT_01d23004 + uVar2 * 0x40) <= *pfVar5) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar6 = _DAT_01d227ec * 0x40;
        _DAT_01d227ec = _DAT_01d227ec + 1;
        pfVar5 = pfVar4;
        pfVar7 = (float *)(&DAT_01d227fc + iVar6);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
        }
        break;
      case 1:
        FUN_00514d40(pfVar5,pfVar4,&DAT_01d227fc + _DAT_01d227ec * 0x40);
        _DAT_01d227ec = _DAT_01d227ec + 1;
        break;
      case 2:
        iVar6 = _DAT_01d227ec * 0x40;
        _DAT_01d227ec = _DAT_01d227ec + 1;
        pfVar7 = pfVar4;
        pfVar8 = (float *)(&DAT_01d227fc + iVar6);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
        }
        FUN_00514d40(pfVar4,pfVar5,&DAT_01d227fc + _DAT_01d227ec * 0x40);
        _DAT_01d227ec = _DAT_01d227ec + 1;
      }
      local_18 = local_18 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (local_18 < (int)_DAT_01d227e8);
  }
  return;
}
