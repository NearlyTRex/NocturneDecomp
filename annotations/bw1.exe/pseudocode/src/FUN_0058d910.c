// Name: FUN_0058d910
// Address: 0058d910
// Address Range: [[0058d910, 0058e234]]
// Convention: unknown
// Signature: undefined4 FUN_0058d910(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058d910(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1160 [1002];
  uint uVar8;
  uint uVar9;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  float local_148;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a0;
  float local_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_4c;
  float local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  uint *local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x1ff78) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2628) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x2c98) != 0xe) &&
     (local_14 = (float)FUN_00434590(param_1,0), local_14 < (float)_DAT_005f6df9)) {
    return 0;
  }
  local_14 = (float)FUN_00524a40(param_1 + 0x158,0);
  if (local_14 < 1.0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x2628);
  if ((iVar4 == 0) ||
     (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 != 4)) {
    local_18 = 0;
    for (local_1c = 0; local_1c < *(int *)(0x01E82168 + 0x14d164); local_1c = local_1c + 1) {
      local_44 = FUN_0040c600(*(uint *)(0x01E82168 + local_18 + 0x14d168),_DAT_0152c398);
      local_24 = local_44;
      if ((local_44 != 0) &&
         (iVar4 = FUN_0045d550(local_44,*(uint *)(param_1 + 0x2628)), iVar4 != 0)) {
        FUN_00408bb0(param_1,*(int *)(param_1 + 0x2628) + 0x20);
        puVar5 = (uint *)(local_24 + 0x20);
        local_c4 = local_130;
        *(uint *)((int)&stack0xffffff40 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffed4 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xffffff44 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffed8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        local_38 = puVar5;
        FUN_00408bb0(param_1,puVar5);
        local_dc = local_58;
        *(uint *)((int)&stack0xffffff28 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xffffff2c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        local_70 = local_dc - local_c4;
        local_6c = local_d8 - local_c0;
        local_68 = local_d4 - local_bc;
        local_10c = local_dc - local_c4;
        *(uint *)((int)&stack0xfffffef8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff94 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xfffffefc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        dVar1 = (double)local_104;
        dVar2 = (double)local_108;
        dVar3 = (double)local_10c;
        FUN_00445430(PTR_DAT_00611100,"Delta to dest : %3.2f,%3.2f,%3.2f\n",dVar3,dVar2,dVar1);
        if ((((0.0 < local_104) && ((dVar1 < _DAT_005f6e01 && (ABS(dVar3) < _DAT_005f6e09)))) &&
            (0.0 < dVar2)) && (dVar2 < _DAT_005f6e11)) {
          *(uint *)(param_1 + 0x1ff5c) = 2;
          if ((uint *)(param_1 + 0x1ff90) != local_38) {
            *(uint *)(param_1 + 0x1ff90) = *local_38;
            *(uint *)(param_1 + 0x1ff94) = local_38[1];
            *(uint *)(param_1 + 0x1ff98) = local_38[2];
          }
          if ((uint *)(param_1 + 0x1ff9c) != (uint *)(local_44 + 0x30)) {
            *(uint *)(param_1 + 0x1ff9c) = *(uint *)(local_44 + 0x30);
            *(uint *)(param_1 + 0x1ffa0) = *(uint *)(local_44 + 0x34);
            *(uint *)(param_1 + 0x1ffa4) = *(uint *)(local_44 + 0x38);
          }
          FUN_005247c0(param_1 + 0x158,0x21,1);
          return 1;
        }
      }
      local_18 = local_18 + 4;
    }
  }
  else {
    iStack_34 = 0;
    for (iStack_30 = 0; iStack_30 < *(int *)(0x01E82168 + 0x14d164); iStack_30 = iStack_30 + 1) {
      iStack_40 = FUN_0040c600(*(uint *)(0x01E82168 + iStack_34 + 0x14d168),_DAT_0152c398);
      iStack_28 = iStack_40;
      if ((iStack_40 != 0) &&
         (iVar4 = FUN_0045d550(iStack_40,*(uint *)(param_1 + 0x2628)), iVar4 != 0)) {
        FUN_00408bb0(param_1,*(int *)(param_1 + 0x2628) + 0x20);
        iVar4 = iStack_28 + 0x20;
        fStack_88 = fStack_100;
        *(uint *)((int)&stack0xffffff7c + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff04 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff08 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        iStack_3c = iVar4;
        FUN_00408bb0(param_1,iVar4);
        fStack_118 = fStack_94;
        *(uint *)((int)&stack0xfffffeec + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff70 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xfffffef0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        fStack_174 = fStack_114 - fStack_84;
        fStack_170 = fStack_110 - fStack_80;
        fStack_16c = fStack_118 - fStack_88;
        *(uint *)((int)&stack0xfffffe98 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xfffffe8c + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xfffffe9c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xfffffe90 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        if ((0.0 < fStack_164) &&
           ((((fStack_164 < (float)_DAT_005f6e01 && (ABS(fStack_16c) < (float)_DAT_005f6e09)) &&
             (0.0 < (double)fStack_168)) && ((double)fStack_168 < _DAT_005f6e11)))) {
          FUN_005247c0(param_1 + 0x158,0x25,1);
          FUN_00408bb0(param_1,iStack_3c);
          uStack_160 = uStack_154;
          *(uint *)((int)&stack0xfffffea4 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffeb0 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xfffffea8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffeb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if ((uint *)(param_1 + 0x2006c) != &stack0xfffffea0) {
            *(uint *)(param_1 + 0x2006c) = uStack_160;
            *(uint *)(param_1 + 0x20070) = uStack_15c;
            *(uint *)(param_1 + 0x20074) = uStack_158;
          }
          fStack_4c = *(float *)(param_1 + 0x20088) - *(float *)(param_1 + 0x2007c);
          local_14 = (float)FUN_00585170(*(uint *)(param_1 + 0x2628));
          *(float *)(param_1 + 0x20070) = (fStack_4c - local_14) + *(float *)(param_1 + 0x20070);
          if (*(int *)(param_1 + 0x1ff5c) != 0) {
            FUN_00494340(0x01C3EB54,"?actionPending = %d\nstranger.cpp line %d" + 1,
                         *(int *)(param_1 + 0x1ff5c),0xee0);
          }
          *(uint *)(param_1 + 0x1ff5c) = 2;
          if ((uint *)(param_1 + 0x1ff90) != (uint *)(iStack_40 + 0x20)) {
            *(uint *)(param_1 + 0x1ff90) = *(uint *)(iStack_40 + 0x20);
            *(uint *)(param_1 + 0x1ff94) = *(uint *)(iStack_40 + 0x24);
            *(uint *)(param_1 + 0x1ff98) = *(uint *)(iStack_40 + 0x28);
          }
          if ((uint *)(param_1 + 0x1ff9c) != (uint *)(iStack_40 + 0x30)) {
            *(uint *)(param_1 + 0x1ff9c) = *(uint *)(iStack_40 + 0x30);
            *(uint *)(param_1 + 0x1ffa0) = *(uint *)(iStack_40 + 0x34);
            *(uint *)(param_1 + 0x1ffa4) = *(uint *)(iStack_40 + 0x38);
          }
          return 1;
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  FUN_00559250(0x01E82168,param_1);
  FUN_00559250(0x01E82168,*(uint *)(param_1 + 0x2628));
  puVar5 = &stack0xffffff0c;
  puVar6 = (uint *)(*(int *)(param_1 + 0x2628) + 0x24 + (uint)bVar7 * -8);
  local_13c = *(float *)(*(int *)(param_1 + 0x2628) + 0x20);
  *(uint *)((int)&stack0xfffffec8 + (uint)bVar7 * -8) = *puVar6;
  *(uint *)((int)&stack0xfffffecc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       puVar6[(uint)bVar7 * -2 + 1];
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0x3f800000;
  FUN_00408ac0(param_1,puVar5);
  local_a0 = local_148;
  *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xfffffebc + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xfffffec0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  local_138 = *(float *)(param_1 + 0x24);
  local_13c = local_13c + local_a0;
  local_b8 = 0;
  local_b4 = 0;
  local_134 = local_134 + local_98;
  local_b0 = 0x3fc00000;
  FUN_00408ac0(param_1,&stack0xffffff48);
  uVar9 = 0x40400000;
  uVar8 = 0x3dcccccd;
  local_64 = local_7c;
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  local_14 = (float)FUN_00558450(0x01E82168,local_13c,local_134,local_64,local_5c,0x3f800000,uVar8
                                 ,uVar9);
  if (local_14 < 1.0) {
    FUN_00559220(0x01E82168);
    return 0;
  }
  uVar8 = 0x3f000000;
  local_e8 = local_13c + local_64;
  local_e4 = local_138 + local_60;
  local_e0 = local_134 + local_5c;
  local_ac = local_13c + local_64;
  *(float *)((int)&stack0xffffff58 + (uint)bVar7 * 0xfffffffe * 4) =
       (&stack0xffffff1c)[(uint)bVar7 * 0xfffffffe];
  *(uint *)(&stack0xffffff5c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffff20 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  local_48 = (float)FUN_005562c0(0x01E82168,&stack0xffffff54,uVar8);
  local_14 = local_48;
  FUN_00559220(0x01E82168);
  if (ABS(local_48 - *(float *)(param_1 + 0x24)) <= 1.0) {
    local_2c = 0;
    local_20 = 0;
    do {
      if (*(int *)(0x01E82168 + 0x14d164) <= local_2c) {
        iVar4 = *(int *)(param_1 + 0x2628);
        *(uint *)(param_1 + 0x1ff5c) = 6;
        if ((iVar4 == 0) ||
           (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 != 4)) {
          uVar8 = 0x1f;
        }
        else {
          uVar8 = 0x24;
        }
        FUN_005247c0(param_1 + 0x158,uVar8,1);
        *(uint *)(param_1 + 0x20014) = 0x40800000;
        return 1;
      }
      iVar4 = FUN_0040c600(*(uint *)(0x01E82168 + local_20 + 0x14d168),DAT_007dc6d8);
      if (iVar4 != 0) {
        local_d0 = *(float *)(iVar4 + 0x20) - local_13c;
        local_cc = *(float *)(iVar4 + 0x24) - local_138;
        local_c8 = *(float *)(iVar4 + 0x28) - local_134;
        local_124 = local_d0;
        *(uint *)((int)&stack0xfffffee0 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff34 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xfffffee4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        if (SQRT(local_11c * local_11c + local_124 * local_124 + local_120 * local_120) <
            (float)_DAT_005f6e09) {
          return 0;
        }
      }
      local_2c = local_2c + 1;
      local_20 = local_20 + 4;
    } while( true );
  }
  return 0;
}
