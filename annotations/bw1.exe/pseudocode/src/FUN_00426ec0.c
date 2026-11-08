// Name: FUN_00426ec0
// Address: 00426ec0
// Address Range: [[00426ec0, 00427827]]
// Convention: unknown
// Signature: void FUN_00426ec0(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426ec0(int param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  byte bVar9;
  float afStackY_1154 [1001];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  uint local_124;
  float local_120 [4];
  float local_110;
  uint local_10c;
  float local_108 [4];
  float local_f8;
  uint local_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8 [4];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [8];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  local_1a0 = param_3;
  if (*(int *)(param_2 + 0x2c) < 0) {
    piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324) + *(int *)(param_2 + 0x30) * 0xc
                    );
    local_160 = (float)*piVar4 * _DAT_005fd218;
    local_15c = (float)piVar4[1] * _DAT_005fd218;
    local_158 = (float)piVar4[2] * _DAT_005fd218;
    FUN_005b5100(&stack0xfffffea0,param_1 + 0x12eac);
    iVar8 = FUN_00426870(param_1,param_2,local_1a0,&stack0xfffffea0);
    if (iVar8 != 0) {
      FUN_00427830(param_1,param_2);
      *(uint *)(param_2 + 0x34) = 0;
      return;
    }
  }
  else {
    if (*(float *)(param_2 + 0x38) <= 0.0) {
      FUN_00427830(param_1,param_2);
      *(uint *)(param_2 + 0x34) = 0;
    }
    else {
      iVar8 = 0;
      local_198 = _DAT_005fd22c / *(float *)(param_2 + 0x38);
      while( true ) {
        local_19c = *(float *)(param_2 + 0x34);
        fVar2 = local_1a0 * local_198 + *(float *)(param_2 + 0x34);
        *(float *)(param_2 + 0x34) = fVar2;
        if (fVar2 < 1.0) break;
        FUN_00427830(param_1,param_2);
        local_1a0 = local_1a0 - (1.0 - local_19c) / local_198;
        *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + _DAT_005d5158;
        if ((local_1a0 < (float)_DAT_005d5160) || (iVar8 = iVar8 + 1, 2 < iVar8)) break;
      }
      if (*(float *)(param_2 + 0x34) < 0.0) {
        *(uint *)(param_2 + 0x34) = 0;
      }
      if (1.0 < *(float *)(param_2 + 0x34)) {
        *(uint *)(param_2 + 0x34) = 0x3f800000;
      }
    }
    piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324) + *(int *)(param_2 + 0x2c) * 0xc
                    );
    local_13c = (float)*piVar4 * _DAT_005fd218;
    local_138 = (float)piVar4[1] * _DAT_005fd218;
    local_134 = (float)piVar4[2] * _DAT_005fd218;
    piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324) + *(int *)(param_2 + 0x30) * 0xc
                    );
    local_e8 = (float)*piVar4 * _DAT_005fd218;
    local_e4 = (float)piVar4[1] * _DAT_005fd218;
    local_e0 = (float)piVar4[2] * _DAT_005fd218;
    local_154 = (float)*piVar4 * _DAT_005fd218 * *(float *)(param_2 + 0x34);
    local_150 = (float)piVar4[1] * _DAT_005fd218 * *(float *)(param_2 + 0x34);
    local_14c = (float)piVar4[2] * _DAT_005fd218 * *(float *)(param_2 + 0x34);
    local_dc = local_154;
    local_d8[(uint)bVar9 * 0xfffffffe] = (&stack0xfffffeb0)[(uint)bVar9 * 0xfffffffe];
    local_d8[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 1] =
         (float)*(uint *)((int)&stack0xfffffeb4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_18 = 1.0 - *(float *)(param_2 + 0x34);
    iVar8 = param_1 + 0x12eac;
    local_108[2] = local_13c * local_18;
    local_108[3] = local_138 * local_18;
    local_f8 = local_134 * local_18;
    local_88 = local_13c * local_18;
    local_b4[(uint)bVar9 * 0xfffffffe + 0xc] = local_108[(uint)bVar9 * 0xfffffffe + 3];
    local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0xd] =
         local_108[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4];
    local_4c = local_88 + local_dc;
    local_48 = local_84 + local_d8[0];
    local_44 = local_80 + local_d8[1];
    local_b4[5] = local_88 + local_dc;
    local_b4[(uint)bVar9 * 0xfffffffe + 6] = local_b4[(uint)bVar9 * 0xfffffffe + 0x1b];
    local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 7] =
         local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0x1c];
    FUN_005b5080(local_b4 + 5,iVar8);
    local_10c = local_40;
    *(float *)((int)local_108 + (uint)bVar9 * -8) = local_b4[(uint)bVar9 * 0xfffffffe + 0x1e];
    local_108[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 1] =
         local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0x1f];
    if ((uint *)(param_2 + 8) != &local_10c) {
      *(uint *)(param_2 + 8) = local_10c;
      *(float *)(param_2 + 0xc) = local_108[0];
      *(float *)(param_2 + 0x10) = local_108[1];
    }
    local_58 = local_e8 - local_13c;
    local_54 = local_e4 - local_138;
    local_50 = local_e0 - local_134;
    local_16c = local_e8 - local_13c;
    (&stack0xfffffe98)[(uint)bVar9 * 0xfffffffe] = local_b4[(uint)bVar9 * 0xfffffffe + 0x18];
    *(float *)((int)&stack0xfffffe9c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0x19];
    iVar8 = *(int *)(param_1 + 0x12ee8 + *(int *)(param_2 + 0x2c) * 0x28);
    iVar1 = *(int *)(param_1 + 0x12edc);
    iVar5 = FUN_00569eb0(*(uint *)(param_1 + 0x12ea8));
    puVar7 = (ushort *)(*(int *)(iVar5 + 0x7c + iVar1 * 4) + iVar8 * 0x12);
    piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324) + (uint)*puVar7 * 0xc);
    local_13c = (float)*piVar4 * _DAT_005fd218;
    local_138 = (float)piVar4[1] * _DAT_005fd218;
    local_134 = (float)piVar4[2] * _DAT_005fd218;
    piVar6 = (int *)((uint)puVar7[1] * 0xc + *(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324));
    local_e8 = (float)*piVar6 * _DAT_005fd218;
    fVar2 = (float)piVar6[1] * _DAT_005fd218;
    local_e4 = fVar2;
    fVar3 = (float)piVar6[2] * _DAT_005fd218;
    local_e0 = fVar3;
    piVar6 = (int *)((uint)puVar7[2] * 0xc + *(int *)(*(int *)(param_1 + 0x12ea8) + 0x2324));
    local_c4 = (float)*piVar6 * _DAT_005fd218;
    iVar8 = piVar6[1];
    local_c0 = (float)iVar8 * _DAT_005fd218;
    iVar1 = piVar6[2];
    local_bc = (float)iVar1 * _DAT_005fd218;
    local_64 = local_e8 - (float)*piVar4 * _DAT_005fd218;
    local_60 = fVar2 - (float)piVar4[1] * _DAT_005fd218;
    local_5c = fVar3 - (float)piVar4[2] * _DAT_005fd218;
    local_148 = (float)*piVar6 * _DAT_005fd218 - local_e8;
    local_7c = local_64;
    local_b4[(uint)bVar9 * 0xfffffffe + 0xf] = local_b4[(uint)bVar9 * 0xfffffffe + 0x15];
    local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0x10] =
         local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0x16];
    local_144 = (float)iVar8 * _DAT_005fd218 - fVar2;
    local_140 = (float)iVar1 * _DAT_005fd218 - fVar3;
    local_b8 = local_148;
    local_b4[(uint)bVar9 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffebc + (uint)bVar9 * -8);
    local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 1] =
         (float)*(uint *)((int)&stack0xfffffec0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_d8[2] = local_78 * local_b4[1] - local_74 * local_b4[0];
    local_d8[3] = local_74 * local_b8 - local_7c * local_b4[1];
    local_c8 = local_7c * local_b4[0] - local_78 * local_b8;
    local_b4[2] = local_d8[2];
    local_b4[(uint)bVar9 * 0xfffffffe + 3] = local_d8[(uint)bVar9 * 0xfffffffe + 3];
    local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4] =
         local_d8[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4];
    local_94 = local_b4[3] * local_164 - local_b4[4] * local_168;
    local_90 = local_b4[4] * local_16c - local_b4[2] * local_164;
    local_8c = local_b4[2] * local_168 - local_b4[3] * local_16c;
    local_130 = local_94;
    (&stack0xfffffed4)[(uint)bVar9 * 0xfffffffe] = local_b4[(uint)bVar9 * 0xfffffffe + 9];
    *(float *)((int)&stack0xfffffed8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 10];
    local_120[2] = local_168 * local_128 - local_164 * local_12c;
    local_120[3] = local_164 * local_130 - local_16c * local_128;
    local_110 = local_16c * local_12c - local_168 * local_130;
    local_70 = local_120[2];
    local_b4[(uint)bVar9 * 0xfffffffe + 0x12] = local_120[(uint)bVar9 * 0xfffffffe + 3];
    local_b4[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 0x13] =
         local_120[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4];
    if (local_b4 + 2 != local_b4 + 0x11) {
      local_b4[2] = local_70;
      local_b4[3] = local_6c;
      local_b4[4] = local_68;
    }
    local_1c = SQRT(local_b4[4] * local_b4[4] +
                    local_b4[2] * local_b4[2] + local_b4[3] * local_b4[3]);
    if (local_1c <= 0.0) {
      local_b4[3] = 0.0;
      local_b4[2] = 0.0;
      local_b4[4] = 0.0;
    }
    else {
      fVar2 = 1.0 / local_1c;
      local_b4[2] = local_b4[2] * fVar2;
      local_b4[3] = local_b4[3] * fVar2;
      local_b4[4] = local_b4[4] * fVar2;
    }
    local_24 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
    if (local_24 <= 0.0) {
      local_12c = 0.0;
      local_130 = 0.0;
      local_128 = 0.0;
    }
    else {
      fVar2 = 1.0 / local_24;
      local_130 = local_130 * fVar2;
      local_12c = local_12c * fVar2;
      local_128 = local_128 * fVar2;
    }
    local_20 = SQRT(local_164 * local_164 + local_16c * local_16c + local_168 * local_168);
    if (local_20 <= 0.0) {
      local_168 = 0.0;
      local_16c = 0.0;
      local_164 = 0.0;
    }
    else {
      fVar2 = 1.0 / local_20;
      local_16c = local_16c * fVar2;
      local_168 = local_168 * fVar2;
      local_164 = local_164 * fVar2;
    }
    local_194 = local_130;
    local_190 = local_b4[2];
    local_18c = local_16c;
    local_188 = local_12c;
    local_184 = local_b4[3];
    local_180 = local_168;
    local_17c = local_128;
    local_178 = local_b4[4];
    local_174 = local_164;
    FUN_0045f840(&stack0xfffffe6c);
    local_124 = local_f4;
    *(float *)((int)local_120 + (uint)bVar9 * -8) = local_108[(uint)bVar9 * 0xfffffffe + 6];
    local_120[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 1] =
         local_108[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 7];
    if ((uint *)(param_2 + 0x14) != &local_124) {
      *(uint *)(param_2 + 0x14) = local_124;
      *(float *)(param_2 + 0x18) = local_120[0];
      *(float *)(param_2 + 0x1c) = local_120[1];
      return;
    }
  }
  return;
}
