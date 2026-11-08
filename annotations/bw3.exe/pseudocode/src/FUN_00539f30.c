// Name: FUN_00539f30
// Address: 00539f30
// Address Range: [[00539f30, 0053a3e9]]
// Convention: unknown
// Signature: void FUN_00539f30(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00539f30(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_108c [1001];
  float *pfVar10;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint local_28;
  int local_24;
  int local_20;
  float *local_18;
  int local_14;
  
  bVar9 = 0;
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    local_20 = FUN_005806a0();
  }
  _DAT_0211e350 = 0;
  FUN_0046d1a0();
  FUN_0046d1c0();
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  local_28 = 0xc;
  if ((_DAT_0203ad1c != 0) || (*(int *)(0x01D2130C + 0x264) != 0)) {
    local_28 = 0xd;
  }
  if (_DAT_0203a598 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x158cfc)) {
    local_18 = (float *)&stack0xffffff50;
    local_24 = param_1;
    do {
      iVar4 = *(int *)(local_24 + 0x158d00);
      if (iVar4 != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
        if ((*(int *)(0x01D2130C + 0x264) == 0) && (iVar6 = FUN_0053b9a0(), iVar6 != 0)) {
          if (((*(float *)(iVar4 + 0x20) == *(float *)(iVar4 + 300)) &&
              (((*(float *)(iVar4 + 0x24) == *(float *)(iVar4 + 0x130) &&
                (*(float *)(iVar4 + 0x28) == *(float *)(iVar4 + 0x134))) &&
               (*(float *)(iVar4 + 0x30) == *(float *)(iVar4 + 0x138))))) &&
             ((*(float *)(iVar4 + 0x34) == *(float *)(iVar4 + 0x13c) &&
              (*(float *)(iVar4 + 0x38) == *(float *)(iVar4 + 0x140))))) {
            uVar1 = *(uint *)(iVar4 + 0x148);
            goto LAB_0053a13a;
          }
          *(uint *)(iVar4 + 0x148) = 1;
        }
        else {
          if (((*(float *)(iVar4 + 0x20) == *(float *)(iVar4 + 300)) &&
              (*(float *)(iVar4 + 0x24) == *(float *)(iVar4 + 0x130))) &&
             ((*(float *)(iVar4 + 0x28) == *(float *)(iVar4 + 0x134) &&
              (((*(float *)(iVar4 + 0x30) == *(float *)(iVar4 + 0x138) &&
                (*(float *)(iVar4 + 0x34) == *(float *)(iVar4 + 0x13c))) &&
               (*(float *)(iVar4 + 0x38) == *(float *)(iVar4 + 0x140))))))) {
            if ((*(uint *)(iVar4 + 0x144) & local_28) == 0) goto LAB_0053a008;
          }
          else {
            *(uint *)(iVar4 + 0x144) = *(uint *)(iVar4 + 0x144) | param_2;
          }
          uVar1 = *(uint *)(iVar4 + 0x144) & local_28;
LAB_0053a13a:
          if (uVar1 == 0) goto LAB_0053a008;
        }
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))();
        puVar7 = (uint *)&stack0xffffff2c;
        puVar8 = &stack0xffffff44;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_8c = local_bc + *local_18;
        fStack_88 = fStack_b8 + local_18[1];
        fStack_84 = fStack_b4 + local_18[2];
        fStack_44 = local_bc + *local_18;
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff78 + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        pfVar10 = &stack0xffffffb0;
        fStack_5c = fStack_44 * _DAT_005d0837;
        fStack_58 = fStack_40 * _DAT_005d0837;
        fStack_54 = fStack_3c * _DAT_005d0837;
        fStack_50 = fStack_44 * _DAT_005d0837;
        *(uint *)((int)&stack0xffffffb4 + (uint)bVar9 * 0xfffffffe * 4) =
             *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8);
        *(uint *)(&stack0xffffffb8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        FUN_00408b80(iVar4,pfVar10);
        fStack_98 = fStack_80;
        *(uint *)((int)&stack0xffffff6c + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff84 + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffff70 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        *(int *)(&DAT_0211e354 + _DAT_0211e350 * 8) = iVar4;
        iVar4 = _DAT_0211e350 * 8;
        _DAT_0211e350 = _DAT_0211e350 + 1;
        *(float *)(&DAT_0211e358 + iVar4) =
             (fStack_9c - fStack_90) * (fStack_9c - fStack_90) +
             (fStack_a0 - fStack_94) * (fStack_a0 - fStack_94) +
             (local_a4 - fStack_98) * (local_a4 - fStack_98);
      }
LAB_0053a008:
      iVar5 = iVar5 + 1;
      local_24 = local_24 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x158cfc));
  }
  FUN_005a29e8(&DAT_0211e354,_DAT_0211e350,8,&LAB_00539f00);
  iVar4 = _DAT_0211e350;
  iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if (iVar5 == 0) {
    iVar4 = 0;
    iVar5 = _DAT_0211e350;
    if (0 < _DAT_0211e350) {
      iVar3 = 0;
      iVar6 = param_1;
      do {
        iVar2 = _DAT_0211e350;
        puVar7 = (uint *)(&DAT_0211e354 + iVar3);
        iVar3 = iVar3 + 8;
        iVar4 = iVar4 + 1;
        *(uint *)(iVar6 + 0x15f700) = *puVar7;
        iVar5 = _DAT_0211e350;
        iVar6 = iVar6 + 4;
      } while (iVar4 < iVar2);
    }
  }
  else {
    iVar6 = 0;
    *(int *)(param_1 + 0x15f700) = iVar5;
    if (0 < iVar4) {
      iVar4 = 0;
      iVar5 = param_1;
      do {
        iVar3 = _DAT_0211e350;
        puVar7 = (uint *)(&DAT_0211e354 + iVar4);
        iVar4 = iVar4 + 8;
        iVar6 = iVar6 + 1;
        *(uint *)(iVar5 + 0x15f704) = *puVar7;
        iVar5 = iVar5 + 4;
      } while (iVar6 < iVar3);
    }
    iVar5 = _DAT_0211e350 + 1;
  }
  *(int *)(param_1 + 0x15f6fc) = iVar5;
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    local_14 = FUN_005806a0();
    local_14 = local_14 - local_20;
    FUN_00441ff0(PTR_DAT_005f1690,"buildDispList %d items : %3.2f ms\n",_DAT_0211e350,
                 ((double)local_14 * _DAT_005d083f * _DAT_005d0847 * _DAT_005d084f) /
                 (double)*(float *)(0x01D2130C + 0x314));
    return;
  }
  return;
}
