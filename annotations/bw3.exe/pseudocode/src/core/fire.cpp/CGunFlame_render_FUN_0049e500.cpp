// Name: core_fire.cpp_CGunFlame_render_FUN_0049e500
// Address: 0049e500
// Address Range: [[0049e500, 0049f370]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_0049e500(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_0049e500(CGunFlame *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  CVector3i *input;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1140 [991];
  CDemonRenderer *pCVar8;
  CVector3f *euler_angles;
  float fVar9;
  CGunFlame *world_position;
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
  float local_158;
  float local_154 [2];
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
  byte local_a4 [40];
  int local_7c;
  int local_78;
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
  
  bVar2 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  iVar1 = this_ptr->flame_style;
  if (iVar1 == 2) {
    fVar3 = (float10)this_ptr->anim_frame;
    round();
    local_18 = (float)(int)ROUND(fVar3);
    texture = (SMRGLTextureBasic *)(&DAT_005fd7ec + (int)local_18 * 0x18);
LAB_0049e569:
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    this_ptr->lifetime = 0.0;
  }
  else {
    if (iVar1 == 7) {
      fVar3 = (float10)this_ptr->anim_frame;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd804 + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (iVar1 == 4) {
      fVar3 = (float10)this_ptr->anim_frame;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd81c + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (iVar1 == 3) {
      fVar3 = (float10)this_ptr->anim_frame;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd834 + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (iVar1 == 5) {
      fVar3 = (float10)this_ptr->anim_frame;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      texture = (SMRGLTextureBasic *)(&DAT_005fd84c + (int)local_18 * 0x18);
      goto LAB_0049e569;
    }
    if (iVar1 == 6) {
      fVar3 = (float10)this_ptr->anim_frame;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd8dc + (int)local_18 * 0x18));
    }
    else {
      fVar3 = (float10)this_ptr->anim_frame;
      round();
      local_18 = (float)(int)ROUND(fVar3);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd60c + (int)local_18 * 0x18));
    }
  }
  iVar1 = this_ptr->flame_style;
  if ((((iVar1 == 2) || (iVar1 == 4)) || (iVar1 == 3)) ||
     ((iVar1 == 6 || (world_position = this_ptr, iVar1 == 7)))) {
    engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
    local_dc[2] = local_bc;
    local_dc[(uint)bVar2 * -2 + 3] = afStack_b8[(uint)bVar2 * -2];
    local_dc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         afStack_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_110 = local_dc[2] - (this_ptr->position).x;
    local_10c[0] = local_dc[3] - (this_ptr->position).y;
    local_10c[1] = local_cc - (this_ptr->position).z;
    local_158 = local_110;
    local_154[(uint)bVar2 * -2] = local_10c[(uint)bVar2 * -2];
    local_154[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         local_10c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if ((float *)local_a4 != &local_158) {
      local_a4._0_4_ = local_158;
      local_a4._4_4_ = local_154[0];
      local_a4._8_4_ = local_154[1];
    }
    local_34 = SQRT((float)local_a4._8_4_ * (float)local_a4._8_4_ +
                    (float)local_a4._0_4_ * (float)local_a4._0_4_ +
                    (float)local_a4._4_4_ * (float)local_a4._4_4_);
    if (local_34 <= 0.0) {
      local_a4._4_4_ = 0.0;
      local_a4._0_4_ = 0.0;
      local_a4._8_4_ = 0.0;
    }
    else {
      fVar9 = 1.0 / local_34;
      local_a4._0_4_ = (float)local_a4._0_4_ * fVar9;
      local_a4._4_4_ = (float)local_a4._4_4_ * fVar9;
      local_a4._8_4_ = (float)local_a4._8_4_ * fVar9;
    }
    if (this_ptr->flame_style == 7) {
      local_a4._0_4_ = (float)local_a4._0_4_ * _DAT_005c0880;
      local_a4._4_4_ = (float)local_a4._4_4_ * _DAT_005c0880;
      local_a4._8_4_ = (float)local_a4._8_4_ * _DAT_005c0880;
    }
    local_a4._0_4_ = (float)local_a4._0_4_ + (this_ptr->position).x;
    local_a4._4_4_ = (float)local_a4._4_4_ + (this_ptr->position).y;
    local_a4._8_4_ = (float)local_a4._8_4_ + (this_ptr->position).z;
    world_position = (CGunFlame *)local_a4;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&world_position->position);
  engine_matrix_c_FUN_0046d250(DAT_005f2afc);
  translation = (CVector3f *)0x0;
  euler_angles = &local_140;
  local_140.x = (float)local_a4._24_4_;
  *(uint *)((int)&local_140 + (uint)bVar2 * -8 + 4) =
       *(uint *)(local_a4 + (uint)bVar2 * -8 + 0x1c);
  pCVar8 = DAT_005f2afc;
  *(uint *)((int)&local_140 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)(local_a4 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (pCVar8,euler_angles,translation);
  local_188 = 0x40400000;
  if ((this_ptr->flame_style == 6) || (local_188 = _DAT_005df900, this_ptr->flame_style == 0)) {
    local_188 = (local_188 - this_ptr->lifetime) / local_188;
  }
  else {
    local_188 = 0.5;
  }
  iVar1 = this_ptr->flame_style;
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
    local_20 = 4.4;
  }
  else if (iVar1 == 5) {
    local_20 = 1.9;
  }
  else if (iVar1 == 6) {
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
  if ((this_ptr->flame_style == 0) && (dVar10 = (double)local_188, local_188 < (float)_DAT_005c0890)
     ) {
    engine_matrix_c_FUN_0046d1c0(DAT_005f2afc,dVar10);
    local_e0 = local_68;
    local_dc[(uint)bVar2 * -2] = afStack_64[(uint)bVar2 * -2];
    local_dc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_64[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_128 = local_e0 - (this_ptr->position).x;
    local_124[0] = local_dc[0] - (this_ptr->position).y;
    local_124[1] = local_dc[1] - (this_ptr->position).z;
    afStack_b8[2] = local_128;
    afStack_b8[(uint)bVar2 * -2 + 3] = local_124[(uint)bVar2 * -2];
    afStack_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         local_124[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    fVar3 = (float10)(this_ptr->velocity).y;
    fVar4 = (float10)(this_ptr->velocity).x;
    fVar5 = (float10)(this_ptr->velocity).z;
    local_194 = (float)(((float10)1 +
                        ((float10)1 - (float10)dVar10 * (float10)_DAT_005c08a8) *
                        ((float10)1 -
                        (float10)ABS(local_a8 * (this_ptr->velocity).z +
                                     afStack_b8[2] * (this_ptr->velocity).x +
                                     afStack_b8[3] * (this_ptr->velocity).y) /
                        (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) *
                        SQRT((float10)local_a8 * (float10)local_a8 +
                             (float10)afStack_b8[2] * (float10)afStack_b8[2] +
                             (float10)afStack_b8[3] * (float10)afStack_b8[3]))) *
                        (float10)_DAT_005c08a0) * (float10)fVar9);
  }
  if ((this_ptr->flame_style == 7) || (this_ptr->flame_style == 2)) {
    afStack_64[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    local_18 = afStack_64[2];
    afStack_64[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    local_38 = SQRT(local_54 * local_54 +
                    afStack_64[2] * afStack_64[2] + afStack_64[3] * afStack_64[3]);
    max_value = 6.2831855;
    fVar9 = 0.0;
    local_10c[2] = (float)_DAT_02cfd900;
    local_18 = afStack_64[3];
    local_10c[(uint)bVar2 * -2 + 3] = *(float *)(&DAT_02cfd904 + (uint)bVar2 * -8);
    local_10c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         *(float *)(&DAT_02cfd908 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar9,max_value);
    fVar3 = (float10)fsin((float10)fVar9);
    fVar4 = (float10)fcos((float10)fVar9);
    local_10c[2] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_a4._36_4_ = (uint)ROUND(local_10c[2] * _DAT_005df8e4);
    local_7c = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_78 = (int)ROUND(local_fc * _DAT_005df8e4);
    local_18 = fVar9;
    engine_special_cpp_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_a4 + 0x24));
    fVar3 = (float10)fVar9 + (float10)_DAT_005c08d0;
    fVar4 = (float10)fsin(fVar3);
    fVar5 = (float10)fcos(fVar3);
    local_10c[2] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_f8.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_f8.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_f8.z = (int)ROUND(local_fc * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_f8);
    fVar3 = (float10)(float)fVar3 + (float10)_DAT_005c08d0;
    fVar4 = (float10)fsin(fVar3);
    fVar5 = (float10)fcos(fVar3);
    local_10c[2] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_134.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_134.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_134.z = (int)ROUND(local_fc * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_134)
    ;
    fVar4 = (float10)fsin((float10)(float)fVar3 + (float10)_DAT_005c08d0);
    fVar3 = (float10)fcos((float10)(float)fVar3 + (float10)_DAT_005c08d0);
    local_10c[2] = (float)(fVar4 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar3 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_ec.x = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_ec.y = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_ec.z = (int)ROUND(local_fc * _DAT_005df8e4);
    input = &local_ec;
  }
  else {
    local_a4._16_4_ = local_20 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_a4._12_4_ = -local_194 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_a4._20_4_ = 0.0;
    local_c8.x = (int)ROUND((float)local_a4._12_4_ * _DAT_005df8e4);
    local_c8.y = (int)ROUND((float)local_a4._16_4_ * _DAT_005df8e4);
    local_c8.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = (float)local_a4._12_4_;
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_c8);
    local_a4._12_4_ = local_194 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_74.x = (int)ROUND((float)local_a4._12_4_ * _DAT_005df8e4);
    local_74.y = (int)ROUND((float)local_a4._16_4_ * _DAT_005df8e4);
    local_74.z = (int)ROUND((float)local_a4._20_4_ * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_74);
    local_a4._16_4_ = -local_20 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_11c.x = (int)ROUND((float)local_a4._12_4_ * _DAT_005df8e4);
    local_11c.y = (int)ROUND((float)local_a4._16_4_ * _DAT_005df8e4);
    local_11c.z = (int)ROUND((float)local_a4._20_4_ * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_11c)
    ;
    local_a4._12_4_ = local_18;
    local_14c.x = (int)ROUND(local_18 * _DAT_005df8e4);
    local_14c.y = (int)ROUND((float)local_a4._16_4_ * _DAT_005df8e4);
    local_14c.z = (int)ROUND((float)local_a4._20_4_ * _DAT_005df8e4);
    input = &local_14c;
  }
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,input);
  pCVar8 = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr->u = 0x20000;
  pCVar8->vertex_buffer_ptr->v = 0x20000;
  pCVar8->vertex_buffer_ptr[1].u = 0xfe0000;
  pCVar8->vertex_buffer_ptr[1].v = 0x20000;
  pCVar8->vertex_buffer_ptr[2].u = 0xfe0000;
  pCVar8->vertex_buffer_ptr[2].v = 0xfe0000;
  pCVar8->vertex_buffer_ptr[3].u = 0x20000;
  pCVar8->vertex_buffer_ptr[3].v = 0xfe0000;
  iVar1 = this_ptr->flame_style;
  if (iVar1 == 0) {
    fVar3 = (float10)1 - (float10)local_188;
LAB_0049ec85:
    fVar3 = fVar3 * (float10)_DAT_005c08d8;
  }
  else {
    if (iVar1 == 6) {
      local_30 = local_188 * _DAT_005c08d4;
      if ((float)_DAT_005c0898 <= local_188) {
        fVar3 = (float10)_DAT_005c08d4 - (float10)local_30;
      }
      else {
        fVar3 = (float10)local_30;
      }
      goto LAB_0049ec85;
    }
    if ((iVar1 == 4) || (iVar1 == 3)) {
      local_1c = 0xffff;
      goto LAB_0049ec97;
    }
    if (iVar1 == 7) {
      local_1c = 48000;
      goto LAB_0049ec97;
    }
    if (iVar1 != 2) {
      local_1c = 0x8000;
      goto LAB_0049ec97;
    }
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(12000.0,20000.0);
    fVar3 = (float10)local_18;
  }
  round();
  local_1c = (int)ROUND(fVar3);
LAB_0049ec97:
  if (this_ptr->flame_style == 0) {
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
  DAT_005f2afc->vertex_buffer_ptr->r = local_2c;
  pCVar8->vertex_buffer_ptr->g = local_24;
  pCVar8->vertex_buffer_ptr->b = local_28;
  pCVar8->vertex_buffer_ptr->a = local_1c;
  pCVar8->vertex_buffer_ptr[1].r = local_2c;
  pCVar8->vertex_buffer_ptr[1].g = local_24;
  pCVar8->vertex_buffer_ptr[1].b = local_28;
  pCVar8->vertex_buffer_ptr[1].a = local_1c;
  pCVar8->vertex_buffer_ptr[2].r = local_2c;
  pCVar8->vertex_buffer_ptr[2].g = local_24;
  pCVar8->vertex_buffer_ptr[2].b = local_28;
  pCVar8->vertex_buffer_ptr[2].a = local_1c;
  pCVar8->vertex_buffer_ptr[3].r = local_2c;
  pCVar8->vertex_buffer_ptr[3].g = local_24;
  pCVar8->vertex_buffer_ptr[3].b = local_28;
  pCVar8->vertex_buffer_ptr[3].a = local_1c;
  local_180.surface_normal.D.i = 0;
  local_180.surface_normal.C.i = 0;
  local_180.surface_normal.B.i = 0;
  local_180.surface_normal.A.i = 0;
  local_168 = 0;
  local_15c = 3;
  local_180.base.count = 4;
  local_160 = 2;
  local_164 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar8,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&local_180);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
