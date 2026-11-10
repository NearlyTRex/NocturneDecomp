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
  CVector3i *input;
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1140 [6];
  int aiStackY_1128 [6];
  float afStackY_1110 [39];
  int aiStackY_1074 [9];
  float afStackY_1050 [931];
  CDemonRenderer *pCVar7;
  CVector3f *pCVar8;
  float fVar9;
  CVector3f *translation;
  float max_value;
  double dVar10;
  float local_194;
  float local_188;
  SMRGLHeaderPrimitive local_180;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  CVector3f local_158;
  CVector3i local_14c;
  CVector3f local_140;
  CVector3i local_134;
  float local_128;
  float local_124 [2];
  CVector3i local_11c;
  float local_110;
  float local_10c [4];
  float local_fc;
  CVector3i local_f8;
  CVector3i local_ec;
  float local_e0;
  float local_dc [4];
  float local_cc;
  CVector3i local_c8;
  float local_bc;
  float afStack_b8 [4];
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  int aiStack_88 [2];
  CVector3i local_80;
  CVector3i local_74;
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
  
  bVar1 = 0;
  if (param_1[1].x <= 0.0) {
    return;
  }
  fVar9 = param_1[3].x;
  if (fVar9 == 2.8026e-45) {
    fVar2 = (float10)param_1[2].y;
    round();
    local_18 = (float)(int)ROUND(fVar2);
    texture = (SMRGLTextureBasic *)(&DAT_005fd7ec + (int)local_18 * 0x18);
LAB_0049e569:
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    param_1[1].x = 0.0;
  }
  else {
    if (fVar9 == 9.80909e-45) {
      fVar2 = (float10)param_1[2].y;
      round();
      local_18 = (float)(int)ROUND(fVar2);
      texture = (SMRGLTextureBasic *)(&DAT_005fd804 + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar9 == 5.60519e-45) {
      fVar2 = (float10)param_1[2].y;
      round();
      local_18 = (float)(int)ROUND(fVar2);
      texture = (SMRGLTextureBasic *)(&DAT_005fd81c + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar9 == 4.2039e-45) {
      fVar2 = (float10)param_1[2].y;
      round();
      local_18 = (float)(int)ROUND(fVar2);
      texture = (SMRGLTextureBasic *)(&DAT_005fd834 + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar9 == 7.00649e-45) {
      fVar2 = (float10)param_1[2].y;
      round();
      local_18 = (float)(int)ROUND(fVar2);
      texture = (SMRGLTextureBasic *)(&DAT_005fd84c + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (fVar9 == 8.40779e-45) {
      fVar2 = (float10)param_1[2].y;
      round();
      local_18 = (float)(int)ROUND(fVar2);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd8dc + (int)local_18 * 0x18));
    }
    else {
      fVar2 = (float10)param_1[2].y;
      round();
      local_18 = (float)(int)ROUND(fVar2);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd60c + (int)local_18 * 0x18));
    }
  }
  fVar9 = param_1[3].x;
  if ((((fVar9 == 2.8026e-45) || (fVar9 == 5.60519e-45)) || (fVar9 == 4.2039e-45)) ||
     ((fVar9 == 8.40779e-45 || (pCVar8 = param_1, fVar9 == 9.80909e-45)))) {
    engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
    local_dc[2] = local_bc;
    local_dc[(uint)bVar1 * -2 + 3] = afStack_b8[(uint)bVar1 * -2];
    local_dc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
         afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
    local_110 = local_dc[2] - param_1->x;
    local_10c[0] = local_dc[3] - param_1->y;
    local_10c[1] = local_cc - param_1->z;
    local_158.x = local_110;
    *(float *)((int)&local_158 + (uint)bVar1 * -8 + 4) = local_10c[(uint)bVar1 * -2];
    *(float *)((int)&local_158 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         local_10c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
    if (&local_a4 != &local_158) {
      local_a4.x = local_158.x;
      local_a4.y = local_158.y;
      local_a4.z = local_158.z;
    }
    local_34 = SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y);
    if (local_34 <= 0.0) {
      local_a4.y = 0.0;
      local_a4.x = 0.0;
      local_a4.z = 0.0;
    }
    else {
      fVar9 = 1.0 / local_34;
      local_a4.x = local_a4.x * fVar9;
      local_a4.y = local_a4.y * fVar9;
      local_a4.z = local_a4.z * fVar9;
    }
    if (param_1[3].x == 9.80909e-45) {
      local_a4.x = local_a4.x * _DAT_005c0880;
      local_a4.y = local_a4.y * _DAT_005c0880;
      local_a4.z = local_a4.z * _DAT_005c0880;
    }
    local_a4.x = local_a4.x + param_1->x;
    local_a4.y = local_a4.y + param_1->y;
    local_a4.z = local_a4.z + param_1->z;
    pCVar8 = &local_a4;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,pCVar8);
  engine_matrix_c_FUN_0046d250(DAT_005f2afc);
  translation = (CVector3f *)0x0;
  pCVar8 = &local_140;
  local_140.x = local_8c;
  *(int *)((int)&local_140 + (uint)bVar1 * -8 + 4) = aiStack_88[(uint)bVar1 * -2];
  pCVar7 = DAT_005f2afc;
  *(int *)((int)&local_140 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       aiStack_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar7,pCVar8,translation);
  local_188 = 0x40400000;
  if ((param_1[3].x == 8.40779e-45) || (local_188 = _DAT_005df900, param_1[3].x == 0.0)) {
    local_188 = (local_188 - param_1[1].x) / local_188;
  }
  else {
    local_188 = 0.5;
  }
  fVar9 = param_1[3].x;
  if (((fVar9 == 2.8026e-45) || (fVar9 == 4.2039e-45)) || (fVar9 == 5.60519e-45)) {
    local_20 = 4.4;
  }
  else if (fVar9 == 7.00649e-45) {
    local_20 = 1.9;
  }
  else if (fVar9 == 8.40779e-45) {
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
  fVar9 = local_20;
  local_194 = local_20;
  if ((param_1[3].x == 0.0) && (dVar10 = (double)local_188, local_188 < (float)_DAT_005c0890)) {
    engine_matrix_c_FUN_0046d1c0(DAT_005f2afc,dVar10);
    local_e0 = local_68;
    local_dc[(uint)bVar1 * -2] = afStack_64[(uint)bVar1 * -2];
    local_dc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         afStack_64[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
    local_128 = local_e0 - param_1->x;
    local_124[0] = local_dc[0] - param_1->y;
    local_124[1] = local_dc[1] - param_1->z;
    afStack_b8[2] = local_128;
    afStack_b8[(uint)bVar1 * -2 + 3] = local_124[(uint)bVar1 * -2];
    afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
         local_124[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
    local_194 = (float)(((float10)1 +
                        ((float10)1 - (float10)dVar10 * (float10)_DAT_005c08a8) *
                        ((float10)1 -
                        (float10)ABS(local_a8 * param_1[2].x +
                                     afStack_b8[2] * param_1[1].y + afStack_b8[3] * param_1[1].z) /
                        (SQRT((float10)param_1[2].x * (float10)param_1[2].x +
                              (float10)param_1[1].y * (float10)param_1[1].y +
                              (float10)param_1[1].z * (float10)param_1[1].z) *
                        SQRT((float10)local_a8 * (float10)local_a8 +
                             (float10)afStack_b8[2] * (float10)afStack_b8[2] +
                             (float10)afStack_b8[3] * (float10)afStack_b8[3]))) *
                        (float10)_DAT_005c08a0) * (float10)fVar9);
  }
  if ((param_1[3].x == 9.80909e-45) || (param_1[3].x == 2.8026e-45)) {
    afStack_64[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    local_18 = afStack_64[2];
    afStack_64[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    local_38 = SQRT(local_54 * local_54 +
                    afStack_64[2] * afStack_64[2] + afStack_64[3] * afStack_64[3]);
    max_value = 6.2831855;
    fVar9 = 0.0;
    local_10c[2] = (float)_DAT_02cfd900;
    local_18 = afStack_64[3];
    local_10c[(uint)bVar1 * -2 + 3] = *(float *)(&DAT_02cfd904 + (uint)bVar1 * -8);
    local_10c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
         *(float *)(&DAT_02cfd908 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar9,max_value);
    fVar2 = (float10)fsin((float10)fVar9);
    fVar3 = (float10)fcos((float10)fVar9);
    local_10c[2] = (float)(fVar2 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_80.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_80.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_80.z = (int)ROUND(local_fc * _DAT_005df8e4);
    local_18 = fVar9;
    engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_80);
    fVar2 = (float10)fVar9 + (float10)_DAT_005c08d0;
    fVar3 = (float10)fsin(fVar2);
    fVar4 = (float10)fcos(fVar2);
    local_10c[2] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_f8.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_f8.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_f8.z = (int)ROUND(local_fc * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_f8);
    fVar2 = (float10)(float)fVar2 + (float10)_DAT_005c08d0;
    fVar3 = (float10)fsin(fVar2);
    fVar4 = (float10)fcos(fVar2);
    local_10c[2] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_134.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_134.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_134.z = (int)ROUND(local_fc * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_134);
    fVar3 = (float10)fsin((float10)(float)fVar2 + (float10)_DAT_005c08d0);
    fVar2 = (float10)fcos((float10)(float)fVar2 + (float10)_DAT_005c08d0);
    local_10c[2] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar2 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_ec.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_ec.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_ec.z = (int)ROUND(local_fc * _DAT_005df8e4);
    input = &local_ec;
  }
  else {
    local_94 = local_20 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_98 = -local_194 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_90 = 0.0;
    local_c8.x = (int)ROUND(local_98 * _DAT_005df8e4);
    local_c8.y = (int)ROUND(local_94 * _DAT_005df8e4);
    local_c8.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = local_98;
    engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_c8);
    local_98 = local_194 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_74.x = (int)ROUND(local_98 * _DAT_005df8e4);
    local_74.y = (int)ROUND(local_94 * _DAT_005df8e4);
    local_74.z = (int)ROUND(local_90 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_74);
    local_94 = -local_20 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_11c.x = (int)ROUND(local_98 * _DAT_005df8e4);
    local_11c.y = (int)ROUND(local_94 * _DAT_005df8e4);
    local_11c.z = (int)ROUND(local_90 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_11c);
    local_98 = local_18;
    local_14c.x = (int)ROUND(local_18 * _DAT_005df8e4);
    local_14c.y = (int)ROUND(local_94 * _DAT_005df8e4);
    local_14c.z = (int)ROUND(local_90 * _DAT_005df8e4);
    input = &local_14c;
  }
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),input);
  pCVar7 = DAT_005f2afc;
  *(uint *)(DAT_005f2afc->vertex_buffer_ptr + 0x18) = 0x20000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0x1c) = 0x20000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0x48) = 0xfe0000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0x4c) = 0x20000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0x78) = 0xfe0000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0x7c) = 0xfe0000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0xa8) = 0x20000;
  *(uint *)(pCVar7->vertex_buffer_ptr + 0xac) = 0xfe0000;
  fVar9 = param_1[3].x;
  if (fVar9 == 0.0) {
    fVar2 = (float10)1 - (float10)local_188;
LAB_0049ec85:
    fVar2 = fVar2 * (float10)_DAT_005c08d8;
  }
  else {
    if (fVar9 == 8.40779e-45) {
      local_30 = local_188 * _DAT_005c08d4;
      if ((float)_DAT_005c0898 <= local_188) {
        fVar2 = (float10)_DAT_005c08d4 - (float10)local_30;
      }
      else {
        fVar2 = (float10)local_30;
      }
      goto LAB_0049ec85;
    }
    if ((fVar9 == 5.60519e-45) || (fVar9 == 4.2039e-45)) {
      local_1c = 0xffff;
      goto LAB_0049ec97;
    }
    if (fVar9 == 9.80909e-45) {
      local_1c = 48000;
      goto LAB_0049ec97;
    }
    if (fVar9 != 2.8026e-45) {
      local_1c = 0x8000;
      goto LAB_0049ec97;
    }
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(12000.0,20000.0);
    fVar2 = (float10)local_18;
  }
  round();
  local_1c = (int)ROUND(fVar2);
LAB_0049ec97:
  if (param_1[3].x == 0.0) {
    fVar6 = ((float10)_DAT_005c08d4 - (float10)local_188) * (float10)local_188;
    fVar2 = ((float10)1 - fVar6) * (float10)_DAT_005c08dc;
    fVar5 = (float10)_DAT_005c08e4;
    fVar3 = (fVar6 * (float10)_DAT_005c08e0 + fVar2) * fVar5;
    fVar4 = (fVar6 * (float10)_DAT_005c08e8 + fVar2) * fVar5;
    fVar5 = (fVar6 * (float10)_DAT_005c08ec + fVar2) * fVar5;
    round();
    round();
    round();
    local_2c = (int)ROUND(fVar3);
    local_24 = (int)ROUND(fVar4);
    local_28 = (int)ROUND(fVar5);
  }
  else {
    local_24 = 0xff00;
    local_28 = 0xff00;
    local_2c = 0xff00;
  }
  pCVar7 = DAT_005f2afc;
  *(int *)(DAT_005f2afc->vertex_buffer_ptr + 0x20) = local_2c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x24) = local_24;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x28) = local_28;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x2c) = local_1c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x50) = local_2c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x54) = local_24;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x58) = local_28;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x5c) = local_1c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x80) = local_2c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x84) = local_24;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x88) = local_28;
  *(int *)(pCVar7->vertex_buffer_ptr + 0x8c) = local_1c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0xb0) = local_2c;
  *(int *)(pCVar7->vertex_buffer_ptr + 0xb4) = local_24;
  *(int *)(pCVar7->vertex_buffer_ptr + 0xb8) = local_28;
  *(int *)(pCVar7->vertex_buffer_ptr + 0xbc) = local_1c;
  local_180.surface_normal.D.i = 0;
  local_180.surface_normal.C.i = 0;
  local_180.surface_normal.B.i = 0;
  local_180.surface_normal.A.i = 0;
  local_168 = 0;
  local_15c = 3;
  local_180.base.count = 4;
  local_160 = 2;
  local_164 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar7,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&local_180);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
