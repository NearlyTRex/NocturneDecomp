// Name: FUN_004aeb00
// Address: 004aeb00
// Address Range: [[004aeb00, 004af3ae]]
// Convention: unknown
// Signature: void FUN_004aeb00(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aeb00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_1168 [986];
  float local_1e8;
  float local_1e4;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  uint local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  byte local_114 [4];
  float local_110;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  uint local_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar8 = 0;
  local_20 = 0.25;
  FUN_005b77c0(param_1 + 0x10a68,0,0x34);
  if (*(int *)(param_1 + 0x25638) != 0) {
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_168 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
    local_164 = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
    local_160 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
    local_cc = local_168;
    afStack_104[(uint)bVar8 * -2 + 0xf] = *(float *)((int)&stack0xfffffe9c + (uint)bVar8 * -8);
    afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         *(float *)((int)&stack0xfffffea0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_1e8 = SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
    if (*(int *)(param_1 + 0x25638) == 3) {
      local_1e8 = 0.0;
    }
    if ((float)_DAT_005d6fc3 <= local_1e8) {
      iVar5 = FUN_00513650(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x10a9c,param_1 + 0x20,
                           local_114,*(uint *)(param_1 + 0x6c));
      if (iVar5 != 0) {
        local_18 = (float)FUN_0040d0c0(local_110 - *(float *)(param_1 + 0x34));
        fVar2 = local_18 * _DAT_005d6fcb * (float)_DAT_005d6fc3;
        local_2c = -local_20;
        *(float *)(param_1 + 0x10a90) = fVar2;
        if (fVar2 < local_2c) {
          *(float *)(param_1 + 0x10a90) = local_2c;
        }
        if (local_20 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_20;
        }
        *(uint *)(param_1 + 0x10a68) = 1;
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        local_90 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
        local_8c = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
        local_88 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
        local_78 = local_90;
        afStack_b0[(uint)bVar8 * -2 + 0xf] = afStack_b0[(uint)bVar8 * -2 + 9];
        afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
             afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        if (afStack_104 + 0x11 != afStack_b0 + 0xe) {
          local_c0 = local_78;
          local_bc = local_74;
          local_b8 = local_70;
        }
        if ((float)_DAT_005d6fd3 <
            SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc)) {
          *(uint *)(param_1 + 0x10a70) = 1;
          return;
        }
      }
    }
    else {
      local_1e4 = 9999.9;
      local_1c = 0;
      if ((*(int *)(param_1 + 0x25638) == 2) || (*(int *)(param_1 + 0x25638) == 3)) {
        local_1c = FUN_004d00c0(param_1,&stack0xfffffe1c);
      }
      if ((local_1c == 0) || ((float)_DAT_005d6fdb <= local_1e4)) {
        if (*(int *)(param_1 + 0x25640) != 0) {
          iVar5 = FUN_005035c0(param_1 + 0x2b4);
          if (*(int *)(iVar5 + 0x24) == 0) {
            *(uint *)(param_1 + 0x10a80) = 1;
            return;
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x25640) == 0) {
          iVar5 = FUN_005035c0(param_1 + 0x2b4);
          if (*(int *)(iVar5 + 0x24) == 0) {
            *(uint *)(param_1 + 0x10a80) = 1;
          }
        }
        local_138 = *(float *)(local_1c + 0x20) - *(float *)(param_1 + 0x20);
        local_134 = *(float *)(local_1c + 0x24) - *(float *)(param_1 + 0x24);
        local_130 = *(float *)(local_1c + 0x28) - *(float *)(param_1 + 0x28);
        local_12c = local_138;
        *(uint *)((int)&stack0xfffffed8 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(local_114 + (uint)bVar8 * -8 + -0x20);
        afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8] =
             *(float *)((int)&stack0xfffffed0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        FUN_005838f0(&stack0xfffffed4);
        local_174 = local_6c;
        *(float *)((int)&stack0xfffffe90 + (uint)bVar8 * -8) = afStack_b0[(uint)bVar8 * -2 + 0x12];
        *(float *)(&stack0xfffffe94 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
        local_18 = (float)FUN_0040d0c0(local_170 - *(float *)(param_1 + 0x34));
        fVar2 = local_18 * _DAT_005d6fcb * (float)_DAT_005d6fc3;
        local_28 = -local_20;
        *(float *)(param_1 + 0x10a90) = fVar2;
        if (fVar2 < local_28) {
          *(float *)(param_1 + 0x10a90) = local_28;
        }
        if (local_20 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_20;
        }
        if (((float)_DAT_005d6fe3 < *(float *)(param_1 + 0x10a90)) &&
           ((double)*(float *)(param_1 + 0x10a90) < _DAT_005d6feb)) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
          pfVar6 = (float *)&stack0xfffffe68;
          pfVar7 = &stack0xfffffe50;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar7 = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          fStack_3c = local_1b0 + fStack_1a4;
          fStack_38 = fStack_1ac + fStack_1a0;
          fStack_34 = fStack_1a8 + fStack_19c;
          fStack_15c = local_1b0 + fStack_1a4;
          *(float *)((int)&stack0xfffffea8 + (uint)bVar8 * -8) = afStack_b0[(uint)bVar8 * -2 + 0x1e]
          ;
          *(float *)((int)&stack0xfffffeac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
          afStack_104[2] = fStack_15c * _DAT_005d6ff3;
          afStack_104[3] = fStack_158 * _DAT_005d6ff3;
          fStack_f4 = fStack_154 * _DAT_005d6ff3;
          fStack_e4 = fStack_15c * _DAT_005d6ff3;
          afStack_104[(uint)bVar8 * -2 + 9] = afStack_104[(uint)bVar8 * -2 + 3];
          afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          afStack_b0[2] = *(float *)(param_1 + 0x20) + fStack_e4;
          afStack_b0[3] = *(float *)(param_1 + 0x24) + fStack_e0;
          fStack_a0 = *(float *)(param_1 + 0x28) + fStack_dc;
          fStack_150 = afStack_b0[2];
          (&stack0xfffffeb4)[(uint)bVar8 * 0xfffffffe] = afStack_b0[(uint)bVar8 * -2 + 3];
          *(float *)((int)&stack0xfffffeb8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          (**(code **)(*(int *)(local_1c + 0x2b0) + 0x24))(local_1c);
          pfVar6 = (float *)&stack0xfffffe20;
          pfVar7 = &stack0xfffffe38;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar7 = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          fStack_f0 = fStack_1c8 + fStack_1bc;
          fStack_ec = fStack_1c4 + fStack_1b8;
          fStack_e8 = fStack_1c0 + fStack_1b4;
          fStack_108 = fStack_1c8 + fStack_1bc;
          afStack_104[(uint)bVar8 * -2] = afStack_104[(uint)bVar8 * -2 + 6];
          iVar5 = local_1c;
          afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          fStack_180 = fStack_108 * _DAT_005d6ff3;
          fStack_17c = afStack_104[0] * _DAT_005d6ff3;
          fStack_178 = afStack_104[1] * _DAT_005d6ff3;
          fStack_60 = fStack_108 * _DAT_005d6ff3;
          afStack_b0[(uint)bVar8 * -2 + 0x15] = (&stack0xfffffe84)[(uint)bVar8 * 0xfffffffe];
          afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
               *(float *)((int)&stack0xfffffe88 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_144 = *(float *)(iVar5 + 0x20) + fStack_60;
          fStack_140 = *(float *)(iVar5 + 0x24) + fStack_5c;
          fStack_13c = *(float *)(iVar5 + 0x28) + fStack_58;
          fStack_54 = fStack_144;
          afStack_b0[(uint)bVar8 * -2 + 0x18] = *(float *)((int)&stack0xfffffec0 + (uint)bVar8 * -8)
          ;
          afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
               *(float *)((int)&stack0xfffffec4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_48 = fStack_54 - fStack_150;
          fStack_44 = fStack_50 - fStack_14c;
          fStack_40 = fStack_4c - fStack_148;
          fStack_9c = fStack_54 - fStack_150;
          afStack_b0[(uint)bVar8 * -2 + 6] = afStack_b0[(uint)bVar8 * -2 + 0x1b];
          fVar4 = fStack_4c;
          fVar3 = fStack_50;
          fVar2 = fStack_54;
          afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
          fStack_24 = SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
          if (fStack_24 <= 0.0) {
            fStack_98 = 0.0;
            fStack_9c = 0.0;
            fStack_94 = 0.0;
          }
          else {
            fVar1 = 1.0 / fStack_24;
            fStack_9c = fStack_9c * fVar1;
            fStack_98 = fStack_98 * fVar1;
            fStack_94 = fStack_94 * fVar1;
          }
          fStack_84 = fStack_9c * _DAT_005d6ff7;
          fStack_80 = fStack_98 * _DAT_005d6ff7;
          fStack_7c = fStack_94 * _DAT_005d6ff7;
          fStack_d8 = fStack_9c * _DAT_005d6ff7;
          afStack_104[(uint)bVar8 * -2 + 0xc] = afStack_b0[(uint)bVar8 * -2 + 0xc];
          afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
               afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
          fStack_120 = fVar2 + fStack_d8;
          fStack_11c = fVar3 + fStack_d4;
          fStack_118 = fVar4 + fStack_d0;
          fStack_b4 = fVar2 + fStack_d8;
          afStack_b0[(uint)bVar8 * -2] = afStack_104[(uint)bVar8 * -2 + -6];
          afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)(local_114 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4);
          if (afStack_b0 + 0x17 != &fStack_b4) {
            fStack_54 = fStack_b4;
            fStack_50 = afStack_b0[0];
            fStack_4c = afStack_b0[1];
          }
          FUN_00537eb0(0x01E661B8,1);
          FUN_00537e30(0x01E661B8,param_1);
          iVar5 = 0x01E661B8;
          *(uint *)(0x01E661B8 + 0x14d144) = 0;
          FUN_00535ee0(iVar5,&stack0xfffffeb0,afStack_b0 + 0x17);
          FUN_00537e00(0x01E661B8);
          if (local_1c == *(int *)(0x01E661B8 + 0x14d144)) {
            *(uint *)(param_1 + 0x10a74) = 1;
            return;
          }
        }
      }
    }
  }
  return;
}
