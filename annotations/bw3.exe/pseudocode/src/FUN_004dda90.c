// Name: FUN_004dda90
// Address: 004dda90
// Address Range: [[004dda90, 004de609]]
// Convention: unknown
// Signature: void FUN_004dda90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dda90(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  char *pcVar9;
  ulonglong uVar10;
  float local_570;
  float local_56c;
  float local_568;
  byte local_564 [256];
  byte local_464 [256];
  byte local_364 [256];
  byte local_264 [256];
  byte local_164 [256];
  int local_64;
  float local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(0x01D2130C + 0x24c) != 0) {
    return;
  }
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    return;
  }
  if (*(int *)(0x01D1A05C + 0x40) != 0) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  if (DAT_005fba1c != _DAT_01d70a34) {
    FUN_004da570();
  }
  local_58 = _DAT_01c6cee8;
  local_44 = _DAT_01549ab4;
  _DAT_01c6cee8 = 0;
  if ((DAT_005fba1c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    local_44 = _DAT_01549abc;
  }
  if ((*(int *)(param_1 + 0x338) == 0) || (*(float *)(param_1 + 0x340) <= 0.0)) goto LAB_004ddcd0;
  iVar7 = 0x10;
  local_50 = 0x70;
  iVar5 = 0x00000060;
  iVar6 = 0x000000D0;
  if ((DAT_005fba1c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    iVar6 = 0x000000D0 / 2;
    iVar5 = 0x00000060 / 2;
    iVar7 = 8;
    local_50 = 0x28;
  }
  iVar2 = FUN_0040c790(*(uint *)(param_1 + 0x338),"GCHolycross" + 1);
  if (iVar2 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x338) + 0x570) == 0) {
      iVar2 = FUN_0040c840(*(uint *)(*(int *)(param_1 + 0x338) + 0x304),_DAT_01d5ba70);
      if (iVar2 == 0) {
        pcVar9 = &DAT_005c661d;
        goto LAB_004de3dc;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10) {
        FUN_005a28c0(local_164,&DAT_005c6617,*(uint *)(iVar2 + 0x20b80));
      }
      else {
        FUN_005a28c0(local_164,&DAT_005c661a,*(uint *)(iVar2 + 0x20b84));
      }
    }
    else {
      pcVar9 = "infinite";
LAB_004de3dc:
      FUN_005a28c0(local_164,pcVar9);
    }
    local_14 = FUN_004b30f0(local_44,0x58);
    iVar2 = FUN_004b2a80(local_44,local_164);
    FUN_004b0a20(local_44,local_164,(DAT_005fba18 - iVar7) - iVar2,(DAT_005fba1c - iVar7) - local_14
                 ,0xf8,0);
  }
  if (*(int *)(param_1 + 0x454) != 0) {
    iVar2 = FUN_004dd310(param_1,*(uint *)(param_1 + 0x338),1);
    if (iVar2 == 0) {
      uVar3 = FUN_004d9eb0();
      uVar4 = FUN_004d9e40(*(uint *)(param_1 + 0x338),uVar3);
      uVar10 = CONCAT44(uVar3,uVar4);
      pcVar9 = "%s\n\n%s";
    }
    else {
      uVar3 = FUN_004d9eb0();
      uVar4 = FUN_004d9e40(*(uint *)(param_1 + 0x338),uVar3);
      uVar10 = CONCAT44(uVar3,uVar4);
      pcVar9 = "%s\n\n%s";
    }
    FUN_005a28c0(local_564,pcVar9,uVar10);
    local_24 = local_44;
    local_60 = (float)FUN_004b2e40(local_44,local_564,0x1d5be88,10,0x100,iVar6 - local_50);
    local_38 = local_60;
    local_34 = FUN_004b30f0(local_44,0x58);
    iVar5 = (DAT_005fba1c - iVar5) + iVar7;
    local_20 = (DAT_005fba18 - iVar6) + iVar7;
    iVar6 = 0;
    if (0 < (int)local_60) {
      iVar7 = 0x1d5be88;
      do {
        iVar6 = iVar6 + 1;
        FUN_004b0a20(local_24,iVar7,local_20,iVar5,0xf8,0);
        iVar7 = iVar7 + 0x100;
        iVar5 = iVar5 + local_34;
      } while (iVar6 < (int)local_38);
    }
  }
LAB_004ddcd0:
  if ((*(int *)(param_1 + 0x33c) != 0) && (0.0 < *(float *)(param_1 + 0x344))) {
    iVar7 = 0x10;
    local_48 = 0x70;
    iVar5 = 0x00000060;
    iVar6 = 0x000000D0;
    if ((DAT_005fba1c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
      iVar6 = 0x000000D0 / 2;
      iVar5 = 0x00000060 / 2;
      iVar7 = 8;
      local_48 = 0x28;
    }
    iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x33c),_DAT_01d5b9b4);
    if (iVar2 != 0) {
      FUN_005a28c0(local_364,"%d x%3.0f%%",*(uint *)(iVar2 + 0x2d4),
                   (double)*(float *)(iVar2 + 0x2d8));
      local_60 = (float)FUN_004b30f0(local_44,0x58);
      iVar2 = FUN_004b2a80(local_44,local_364);
      FUN_004b0a20(local_44,local_364,(DAT_005fba18 - iVar7) - iVar2,
                   (DAT_005fba1c - iVar7) - (int)local_60,0xf8,0);
    }
    if (*(int *)(param_1 + 0x454) != 0) {
      uVar3 = FUN_004d9eb0();
      uVar3 = FUN_004d9e40(*(uint *)(param_1 + 0x33c),uVar3);
      FUN_005a28c0(local_264,"%s\n\n%s",uVar3);
      local_28 = local_44;
      local_60 = (float)FUN_004b2e40(local_44,local_264,0x1d5c888,10,0x100,iVar6 - local_48);
      local_3c = local_60;
      local_40 = FUN_004b30f0(local_44,0x58);
      iVar5 = (DAT_005fba1c - iVar5) + iVar7;
      local_30 = (DAT_005fba18 - iVar6) + iVar7;
      iVar6 = 0;
      if (0 < (int)local_60) {
        iVar7 = 0x1d5c888;
        do {
          iVar6 = iVar6 + 1;
          FUN_004b0a20(local_28,iVar7,local_30,iVar5,0xf8,0);
          iVar7 = iVar7 + 0x100;
          iVar5 = iVar5 + local_40;
        } while (iVar6 < (int)local_3c);
      }
    }
  }
  if ((0.0 < *(float *)(param_1 + 0x344)) || (0.0 < *(float *)(param_1 + 0x348))) {
    local_56c = *(float *)(param_1 + 0x348);
    if (local_56c < *(float *)(param_1 + 0x344)) {
      local_56c = *(float *)(param_1 + 0x344);
    }
    local_4c = 0xffff;
    if (local_56c < 1.0) {
      fVar8 = (float10)local_56c * (float10)_DAT_005c664b;
      FUN_005a3120();
      local_4c = (int)ROUND(fVar8);
    }
    local_568 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) * (float)_DAT_005c664f;
    if (local_568 < 0.0) {
      local_568 = 0.0;
    }
    if (1.0 < local_568) {
      local_568 = 1.0;
    }
    iVar5 = 0x3f;
    local_5c = 0x30;
    if (DAT_005fba1c < 0x180) {
      iVar5 = 0x1f;
      local_5c = 0x18;
    }
    local_570 = (float)*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b80) *
                (float)_DAT_005c664f;
    iVar6 = (DAT_005fba18 + -4) - local_5c;
    if (local_570 < 0.0) {
      local_570 = 0.0;
    }
    if (1.0 < local_570) {
      local_570 = 1.0;
    }
    local_5c = local_5c + -1;
    local_60 = (float)iVar5;
    fVar8 = (float10)iVar5 - (float10)iVar5 * (float10)local_570;
    local_14 = iVar5;
    local_14 = FUN_005a3120(iVar5,local_4c / 2);
    local_64 = (int)ROUND(fVar8);
    FUN_0040d8a0(0x1d708b8,iVar6,local_64 + 4,0,local_64,extraout_ECX);
    fVar8 = (float10)local_60 - (float10)local_60 * (float10)local_568;
    FUN_005a3120(iVar5,local_14);
    local_64 = (int)ROUND(fVar8);
    FUN_0040d8a0(0x1d70890,iVar6,local_64 + 4,0,local_64,extraout_EDX);
    FUN_0040d6f0(0x1d708a4,iVar6,4,local_14);
    if (*(int *)(0x01D2130C + 0xe0) != 0) {
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if ((0x3f800000 < *(int *)(iVar7 + 0x2538)) || (*(float *)(iVar7 + 0x2538) <= 0.0)) {
        fVar8 = (float10)*(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538);
        FUN_005a3120();
        local_14 = (int)ROUND(fVar8);
        FUN_005a28c0(local_464,&DAT_005c6640,local_14);
      }
      else {
        FUN_005a28c0(local_464,&DAT_005c6643);
      }
      FUN_004b0a20(local_44,local_464,iVar6,iVar5 + -6,0xf9,0);
      FUN_005a28c0(local_464,&DAT_005c6645,
                   *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b80));
      FUN_004b0a20(local_44,local_464,iVar6 + 0x1c,iVar5 + -6,0xfc,0);
    }
  }
  fVar1 = *(float *)(param_1 + 0x34c);
  if (0.0 < fVar1) {
    local_54 = 0xffff;
    if (fVar1 < 1.0) {
      fVar8 = (float10)fVar1 * (float10)_DAT_005c6657;
      FUN_005a3120();
      local_54 = (int)ROUND(fVar8);
    }
    FUN_00406bf0();
    local_18 = _DAT_01549ab4;
    iVar5 = 0x00000060;
    if (DAT_005fba1c < 0x180) {
      iVar5 = 0x00000060 / 2;
      local_18 = _DAT_01549abc;
    }
    iVar5 = FUN_004b2e40(local_18,param_1 + 0x354,0x1d5d288,10,0x100,(DAT_005fba18 - iVar5) + -4);
    local_1c = iVar5;
    local_2c = FUN_004b30f0(local_18,0x58);
    iVar5 = (DAT_005fba1c + -4) - local_2c * iVar5;
    if (((_DAT_01549abc != local_18) || (_DAT_01dd4890 == 0)) && (iVar6 = 0, 0 < local_1c)) {
      iVar7 = 0x1d5d288;
      do {
        iVar6 = iVar6 + 1;
        FUN_004b0a20(local_18,iVar7,4,iVar5,0xf8,0);
        iVar7 = iVar7 + 0x100;
        iVar5 = iVar5 + local_2c;
      } while (iVar6 < local_1c);
    }
  }
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(0x01D1A05C + 0x40) == 0)) &&
     (*(int *)(0x01D2130C + 0x24c) == 0)) {
    FUN_0040d6f0(0x1d708cc,2,2,0xffff);
    if (_DAT_01d70a20 == -1) {
      uVar10 = 0xffff00000002;
      uVar3 = 2;
      iVar5 = 0x1d708e0;
    }
    else {
      uVar10 = 0xffff00000002;
      uVar3 = 2;
      iVar6 = _DAT_01d70a20 * 0x50;
      iVar5 = FUN_0040cea0(0,3,2,2,0xffff);
      iVar5 = iVar6 + 0x1d708e0 + iVar5 * 0x14;
    }
    FUN_0040d6f0(iVar5,uVar3,uVar10);
  }
  _DAT_01c6cee8 = local_58;
  return;
}
