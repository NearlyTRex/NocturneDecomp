// Name: core_fire.cpp_FUN_0049e500
// Address: 0049e500
// Address Range: [[0049e500, 0049f370]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049e500(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049e500(CVector3f *param_1)

{
  SMRGLTextureBasic *texture;
  float fVar1;
  CVector3i *input;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1140 [991];
  CDemonRenderer *pCVar8;
  CVector3f *pCVar9;
  uint uVar10;
  CVector3f *translation;
  uint uVar11;
  double dVar12;
  float local_194;
  float local_188;
  SMRGLHeaderPrimitive local_180 [4];
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  float local_158;
  float local_154 [2];
  int local_14c;
  int local_148;
  int local_144;
  CVector3f local_140;
  int local_134;
  int local_130;
  int local_12c;
  float local_128;
  float local_124 [2];
  int local_11c;
  int local_118;
  int local_114;
  float local_110;
  float local_10c [4];
  float local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  float local_e0;
  float local_dc [4];
  float local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  float local_bc;
  float afStack_b8 [4];
  float local_a8;
  byte local_a4 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float afStack_64 [4];
  float local_54;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar2 = 0;
  if (*(float *)(param_1 + 1) <= 0.0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 3);
  if (fVar1 == 2.8026e-45) {
    fVar3 = (float10)*(float *)&param_1[2].field_0x4;
    round();
    local_18 = (float)(int)ROUND(fVar3);
    texture = (SMRGLTextureBasic *)(&DAT_005fd7ec + (int)local_18 * 0x18);
LAB_0049e569:
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    *(float *)(param_1 + 1) = 0.0;
  }
  else {
    if (fVar1 == 9.80909e-45) {
      fVar3 = (float10)*(float *)&param_1[2].field_0x4;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd804 + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar1 == 5.60519e-45) {
      fVar3 = (float10)*(float *)&param_1[2].field_0x4;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd81c + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar1 == 4.2039e-45) {
      fVar3 = (float10)*(float *)&param_1[2].field_0x4;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd834 + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar1 == 7.00649e-45) {
      fVar3 = (float10)*(float *)&param_1[2].field_0x4;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd84c + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar1 == 8.40779e-45) {
      fVar3 = (float10)*(float *)&param_1[2].field_0x4;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd8dc + (int)local_18 * 0x18));
    }
    else {
      fVar3 = (float10)*(float *)&param_1[2].field_0x4;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd60c + (int)local_18 * 0x18));
    }
  }
  fVar1 = *(float *)(param_1 + 3);
  if ((((fVar1 == 2.8026e-45) || (fVar1 == 5.60519e-45)) || (fVar1 == 4.2039e-45)) ||
     ((fVar1 == 8.40779e-45 || (pCVar9 = param_1, fVar1 == 9.80909e-45)))) {
    engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
    local_dc[2] = local_bc;
    local_dc[(uint)bVar2 * -2 + 3] = afStack_b8[(uint)bVar2 * -2];
    local_dc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         afStack_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_110 = local_dc[2] - *(float *)param_1;
    local_10c[0] = local_dc[3] - *(float *)&param_1->field_0x4;
    local_10c[1] = local_cc - *(float *)&param_1->field_0x8;
    local_158 = local_dc[2] - *(float *)param_1;
    local_154[(uint)bVar2 * -2] = local_10c[(uint)bVar2 * -2];
    local_154[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         local_10c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if ((float *)local_a4 != &local_158) {
      local_a4 = (byte  [4])local_158;
      local_a0 = local_154[0];
      local_9c = local_154[1];
    }
    local_34 = SQRT(local_9c * local_9c + (float)local_a4 * (float)local_a4 + local_a0 * local_a0);
    if (local_34 <= 0.0) {
      local_a0 = 0.0;
      local_a4 = (byte  [4])0x0;
      local_9c = 0.0;
    }
    else {
      fVar1 = 1.0 / local_34;
      local_a4 = (byte  [4])((float)local_a4 * fVar1);
      local_a0 = local_a0 * fVar1;
      local_9c = local_9c * fVar1;
    }
    if (*(float *)(param_1 + 3) == 9.80909e-45) {
      local_a4 = (byte  [4])((float)local_a4 * _DAT_005c0880);
      local_a0 = local_a0 * _DAT_005c0880;
      local_9c = local_9c * _DAT_005c0880;
    }
    local_a4 = (byte  [4])((float)local_a4 + *(float *)param_1);
    local_a0 = local_a0 + *(float *)&param_1->field_0x4;
    local_9c = local_9c + *(float *)&param_1->field_0x8;
    pCVar9 = (CVector3f *)local_a4;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,pCVar9);
  engine_matrix_c_FUN_0046d250(DAT_005f2afc);
  translation = (CVector3f *)0x0;
  pCVar9 = &local_140;
  local_140._0_4_ = local_8c._0_4_;
  *(uint *)((int)&local_140 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_8c + (uint)bVar2 * -8 + 4);
  pCVar8 = DAT_005f2afc;
  *(uint *)((int)&local_140 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_8c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar8,pCVar9,translation);
  local_188 = 0x40400000;
  if ((*(float *)(param_1 + 3) == 8.40779e-45) ||
     (local_188 = _DAT_005df900, *(float *)(param_1 + 3) == 0.0)) {
    local_188 = (local_188 - *(float *)(param_1 + 1)) / local_188;
  }
  else {
    local_188 = 0.5;
  }
  fVar1 = *(float *)(param_1 + 3);
  if (((fVar1 == 2.8026e-45) || (fVar1 == 4.2039e-45)) || (fVar1 == 5.60519e-45)) {
    local_20 = 4.4;
  }
  else if (fVar1 == 7.00649e-45) {
    local_20 = 1.9;
  }
  else if (fVar1 == 8.40779e-45) {
    if ((float)_DAT_005c0898 <= local_188) {
      local_20 = 4.4;
    }
    else {
      local_20 = local_188 * (float)_DAT_005c0888 * (float)_DAT_005c08a0 + (float)_DAT_005c0890;
    }
  }
  else {
    local_20 = local_188 * (float)_DAT_005c0888 + (float)_DAT_005c0890;
  }
  fVar1 = local_20;
  local_194 = local_20;
  if ((*(float *)(param_1 + 3) == 0.0) &&
     (dVar12 = (double)local_188, local_188 < (float)_DAT_005c0890)) {
    engine_matrix_c_FUN_0046d1c0(DAT_005f2afc,dVar12);
    local_e0 = local_68;
    local_dc[(uint)bVar2 * -2] = afStack_64[(uint)bVar2 * -2];
    local_dc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_64[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_128 = local_e0 - *(float *)param_1;
    local_124[0] = local_dc[0] - *(float *)&param_1->field_0x4;
    local_124[1] = local_dc[1] - *(float *)&param_1->field_0x8;
    afStack_b8[2] = local_e0 - *(float *)param_1;
    afStack_b8[(uint)bVar2 * -2 + 3] = local_124[(uint)bVar2 * -2];
    afStack_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         local_124[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_194 = (float)(((float10)1 +
                        ((float10)1 - (float10)dVar12 * (float10)_DAT_005c08a8) *
                        ((float10)1 -
                        (float10)ABS(local_a8 * *(float *)(param_1 + 2) +
                                     afStack_b8[2] * *(float *)&param_1[1].field_0x4 +
                                     afStack_b8[3] * *(float *)&param_1[1].field_0x8) /
                        (SQRT((float10)*(float *)(param_1 + 2) * (float10)*(float *)(param_1 + 2) +
                              (float10)*(float *)&param_1[1].field_0x4 *
                              (float10)*(float *)&param_1[1].field_0x4 +
                              (float10)*(float *)&param_1[1].field_0x8 *
                              (float10)*(float *)&param_1[1].field_0x8) *
                        SQRT((float10)local_a8 * (float10)local_a8 +
                             (float10)afStack_b8[2] * (float10)afStack_b8[2] +
                             (float10)afStack_b8[3] * (float10)afStack_b8[3]))) *
                        (float10)_DAT_005c08a0) * (float10)fVar1);
  }
  if ((*(float *)(param_1 + 3) == 9.80909e-45) || (*(float *)(param_1 + 3) == 2.8026e-45)) {
    afStack_64[2] = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
    local_18 = afStack_64[2];
    afStack_64[3] = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
    local_38 = SQRT(local_54 * local_54 +
                    afStack_64[2] * afStack_64[2] + afStack_64[3] * afStack_64[3]);
    uVar11 = 0x40c90fdb;
    uVar10 = 0;
    local_10c[2] = (float)_DAT_02cfd900;
    local_18 = afStack_64[3];
    local_10c[(uint)bVar2 * -2 + 3] = *(float *)(&DAT_02cfd904 + (uint)bVar2 * -8);
    local_10c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         *(float *)(&DAT_02cfd908 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fVar1 = (float)core_actor_cpp_FUN_0040ce40(uVar10,uVar11);
    fVar3 = (float10)fsin((float10)fVar1);
    fVar4 = (float10)fcos((float10)fVar1);
    local_10c[2] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_80 = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_7c = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_78 = (int)ROUND(local_fc * _DAT_005df8e4);
    local_18 = fVar1;
    engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_80);
    fVar3 = (float10)fVar1 + (float10)_DAT_005c08d0;
    fVar4 = (float10)fsin(fVar3);
    fVar5 = (float10)fcos(fVar3);
    local_10c[2] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_f8 = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_f4 = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_f0 = (int)ROUND(local_fc * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_f8);
    fVar3 = (float10)(float)fVar3 + (float10)_DAT_005c08d0;
    fVar4 = (float10)fsin(fVar3);
    fVar5 = (float10)fcos(fVar3);
    local_10c[2] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_134 = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_130 = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_12c = (int)ROUND(local_fc * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_134);
    fVar4 = (float10)fsin((float10)(float)fVar3 + (float10)_DAT_005c08d0);
    fVar3 = (float10)fcos((float10)(float)fVar3 + (float10)_DAT_005c08d0);
    local_10c[2] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_ec = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_e8 = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_e4 = (int)ROUND(local_fc * _DAT_005df8e4);
    input = (CVector3i *)&local_ec;
  }
  else {
    local_94 = local_20 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_98 = -local_194 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_90 = 0.0;
    local_c8 = (int)ROUND(local_98 * _DAT_005df8e4);
    local_c4 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_c0 = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = local_98;
    engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_c8);
    local_98 = local_194 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_74 = (int)ROUND(local_98 * _DAT_005df8e4);
    local_70 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_6c = (int)ROUND(local_90 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_74);
    local_94 = -local_20 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_11c = (int)ROUND(local_98 * _DAT_005df8e4);
    local_118 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_114 = (int)ROUND(local_90 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_11c);
    local_98 = local_18;
    local_14c = (int)ROUND(local_18 * _DAT_005df8e4);
    local_148 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_144 = (int)ROUND(local_90 * _DAT_005df8e4);
    input = (CVector3i *)&local_14c;
  }
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),input);
  pCVar8 = DAT_005f2afc;
  *(uint *)(*(int *)DAT_005f2afc + 0x18) = 0x20000;
  *(uint *)(*(int *)pCVar8 + 0x1c) = 0x20000;
  *(uint *)(*(int *)pCVar8 + 0x48) = 0xfe0000;
  *(uint *)(*(int *)pCVar8 + 0x4c) = 0x20000;
  *(uint *)(*(int *)pCVar8 + 0x78) = 0xfe0000;
  *(uint *)(*(int *)pCVar8 + 0x7c) = 0xfe0000;
  *(uint *)(*(int *)pCVar8 + 0xa8) = 0x20000;
  *(uint *)(*(int *)pCVar8 + 0xac) = 0xfe0000;
  fVar1 = *(float *)(param_1 + 3);
  if (fVar1 == 0.0) {
    fVar3 = (float10)1 - (float10)local_188;
LAB_0049ec85:
    fVar3 = fVar3 * (float10)_DAT_005c08d8;
  }
  else {
    if (fVar1 == 8.40779e-45) {
      local_30 = local_188 * _DAT_005c08d4;
      if ((float)_DAT_005c0898 <= local_188) {
        fVar3 = (float10)_DAT_005c08d4 - (float10)local_30;
      }
      else {
        fVar3 = (float10)local_30;
      }
      goto LAB_0049ec85;
    }
    if ((fVar1 == 5.60519e-45) || (fVar1 == 4.2039e-45)) {
      local_1c = 0xffff;
      goto LAB_0049ec97;
    }
    if (fVar1 == 9.80909e-45) {
      local_1c = 48000;
      goto LAB_0049ec97;
    }
    if (fVar1 != 2.8026e-45) {
      local_1c = 0x8000;
      goto LAB_0049ec97;
    }
    local_18 = (float)core_actor_cpp_FUN_0040ce40(0x463b8000,0x469c4000);
    fVar3 = (float10)local_18;
  }
  round();
  local_1c = (int)ROUND(fVar3);
LAB_0049ec97:
  if (*(float *)(param_1 + 3) == 0.0) {
    fVar7 = ((float10)_DAT_005c08d4 - (float10)local_188) * (float10)local_188;
    fVar3 = ((float10)1 - fVar7) * (float10)_DAT_005c08dc;
    fVar6 = (float10)_DAT_005c08e4;
    fVar4 = (fVar7 * (float10)_DAT_005c08e0 + fVar3) * fVar6;
    fVar5 = (fVar7 * (float10)_DAT_005c08e8 + fVar3) * fVar6;
    fVar6 = (fVar7 * (float10)_DAT_005c08ec + fVar3) * fVar6;
    round();
    round();
    round();
    local_2c = (int)ROUND(fVar4);
    local_24 = (int)ROUND(fVar5);
    local_28 = (int)ROUND(fVar6);
  }
  else {
    local_24 = 0xff00;
    local_28 = 0xff00;
    local_2c = 0xff00;
  }
  pCVar8 = DAT_005f2afc;
  *(int *)(*(int *)DAT_005f2afc + 0x20) = local_2c;
  *(int *)(*(int *)pCVar8 + 0x24) = local_24;
  *(int *)(*(int *)pCVar8 + 0x28) = local_28;
  *(int *)(*(int *)pCVar8 + 0x2c) = local_1c;
  *(int *)(*(int *)pCVar8 + 0x50) = local_2c;
  *(int *)(*(int *)pCVar8 + 0x54) = local_24;
  *(int *)(*(int *)pCVar8 + 0x58) = local_28;
  *(int *)(*(int *)pCVar8 + 0x5c) = local_1c;
  *(int *)(*(int *)pCVar8 + 0x80) = local_2c;
  *(int *)(*(int *)pCVar8 + 0x84) = local_24;
  *(int *)(*(int *)pCVar8 + 0x88) = local_28;
  *(int *)(*(int *)pCVar8 + 0x8c) = local_1c;
  *(int *)(*(int *)pCVar8 + 0xb0) = local_2c;
  *(int *)(*(int *)pCVar8 + 0xb4) = local_24;
  *(int *)(*(int *)pCVar8 + 0xb8) = local_28;
  *(int *)(*(int *)pCVar8 + 0xbc) = local_1c;
  local_16c = 0;
  local_170 = 0;
  local_174 = 0;
  local_178 = 0;
  local_168 = 0;
  local_15c = 3;
  local_17c = 4;
  local_160 = 2;
  local_164 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar8,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,local_180);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
