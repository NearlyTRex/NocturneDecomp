// Name: core_fire.cpp_CGunFlame_render_FUN_0049e500
// Address: 0049e500
// Address Range: [[0049e500, 0049f370]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_0049e500(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_0049e500(CGunFlame *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  SMRGLTextureBasic *texture;
  CVector3i *input;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float afStackY_1144 [991];
  CDemonRenderer *pCVar10;
  CVector3f *euler_angles;
  float fVar11;
  CGunFlame *world_position;
  CVector3f *translation;
  float fVar12;
  float local_198;
  float local_190;
  float local_18c;
  SMRGLHeaderPrimitive local_188;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  float local_15c;
  float local_158 [2];
  CVector3i local_150;
  CVector3f local_144;
  CVector3i CStack_138;
  float local_12c;
  float local_128 [2];
  CVector3i local_120;
  float local_114;
  float local_110 [4];
  float local_100;
  CVector3i local_fc;
  CVector3i local_f0;
  float local_e4;
  float local_e0 [4];
  float local_d0;
  CVector3i local_cc;
  CVector3f local_c0;
  float fStack_b4;
  float local_b0 [2];
  byte local_a8 [40];
  int local_80;
  int local_7c;
  CVector3i local_78;
  CVector3f local_6c;
  float fStack_60;
  float local_5c;
  float local_58;
  int iStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  float local_24;
  uint local_20;
  float local_1c;
  
  bVar4 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  iVar2 = this_ptr->flame_style;
  if (iVar2 == 2) {
    dVar7 = round((double)this_ptr->anim_frame);
    local_1c = (float)(int)ROUND(dVar7);
    texture = (SMRGLTextureBasic *)(&DAT_005fd7ec + (int)local_1c * 0x18);
LAB_0049e569:
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    this_ptr->lifetime = 0.0;
  }
  else {
    if (iVar2 == 7) {
      dVar7 = round((double)this_ptr->anim_frame);
      local_1c = (float)(int)ROUND(dVar7);
      texture = (SMRGLTextureBasic *)(&DAT_005fd804 + (int)local_1c * 0x18);
      goto LAB_0049e569;
    }
    if (iVar2 == 4) {
      dVar7 = round((double)this_ptr->anim_frame);
      local_1c = (float)(int)ROUND(dVar7);
      texture = (SMRGLTextureBasic *)(&DAT_005fd81c + (int)local_1c * 0x18);
      goto LAB_0049e569;
    }
    if (iVar2 == 3) {
      dVar7 = round((double)this_ptr->anim_frame);
      local_1c = (float)(int)ROUND(dVar7);
      texture = (SMRGLTextureBasic *)(&DAT_005fd834 + (int)local_1c * 0x18);
      goto LAB_0049e569;
    }
    if (iVar2 == 5) {
      dVar7 = round((double)this_ptr->anim_frame);
      local_1c = (float)(int)ROUND(dVar7);
      texture = (SMRGLTextureBasic *)(&DAT_005fd84c + (int)local_1c * 0x18);
      goto LAB_0049e569;
    }
    if (iVar2 == 6) {
      dVar7 = round((double)this_ptr->anim_frame);
      local_1c = (float)(int)ROUND(dVar7);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd8dc + (int)local_1c * 0x18));
    }
    else {
      dVar7 = round((double)this_ptr->anim_frame);
      local_1c = (float)(int)ROUND(dVar7);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fd60c + (int)local_1c * 0x18));
    }
  }
  iVar2 = this_ptr->flame_style;
  if ((((iVar2 == 2) || (iVar2 == 4)) || (iVar2 == 3)) ||
     ((iVar2 == 6 || (world_position = this_ptr, iVar2 == 7)))) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046d1c0(DAT_005f2afc,&local_c0);
    local_e0[2] = local_c0.x;
    local_e0[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_c0 + (uint)bVar4 * -8 + 4);
    local_e0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&local_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_114 = local_e0[2] - (this_ptr->position).x;
    local_110[0] = local_e0[3] - (this_ptr->position).y;
    local_110[1] = local_d0 - (this_ptr->position).z;
    local_15c = local_114;
    local_158[(uint)bVar4 * -2] = local_110[(uint)bVar4 * -2];
    local_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if ((float *)local_a8 != &local_15c) {
      local_a8._0_4_ = local_15c;
      local_a8._4_4_ = local_158[0];
      local_a8._8_4_ = local_158[1];
    }
    local_38 = SQRT((float)local_a8._8_4_ * (float)local_a8._8_4_ +
                    (float)local_a8._0_4_ * (float)local_a8._0_4_ +
                    (float)local_a8._4_4_ * (float)local_a8._4_4_);
    if (local_38 <= 0.0) {
      local_a8._4_4_ = 0.0;
      local_a8._0_4_ = 0.0;
      local_a8._8_4_ = 0.0;
    }
    else {
      fVar11 = 1.0 / local_38;
      local_a8._0_4_ = (float)local_a8._0_4_ * fVar11;
      local_a8._4_4_ = (float)local_a8._4_4_ * fVar11;
      local_a8._8_4_ = (float)local_a8._8_4_ * fVar11;
    }
    if (this_ptr->flame_style == 7) {
      local_a8._0_4_ = (float)local_a8._0_4_ * _DAT_005c0880;
      local_a8._4_4_ = (float)local_a8._4_4_ * _DAT_005c0880;
      local_a8._8_4_ = (float)local_a8._8_4_ * _DAT_005c0880;
    }
    local_a8._0_4_ = (float)local_a8._0_4_ + (this_ptr->position).x;
    local_a8._4_4_ = (float)local_a8._4_4_ + (this_ptr->position).y;
    local_a8._8_4_ = (float)local_a8._8_4_ + (this_ptr->position).z;
    world_position = (CGunFlame *)local_a8;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&world_position->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250
            (DAT_005f2afc,(CVector3f *)(local_a8 + 0x18));
  translation = (CVector3f *)0x0;
  euler_angles = &local_144;
  local_144.x = (float)local_a8._24_4_;
  *(uint *)((int)&local_144 + (uint)bVar4 * -8 + 4) =
       *(uint *)(local_a8 + (uint)bVar4 * -8 + 0x1c);
  pCVar10 = DAT_005f2afc;
  *(uint *)((int)&local_144 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)(local_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (pCVar10,euler_angles,translation);
  local_18c = 0x40400000;
  if ((this_ptr->flame_style == 6) || (local_18c = _DAT_005df900, this_ptr->flame_style == 0)) {
    local_18c = (local_18c - this_ptr->lifetime) / local_18c;
  }
  else {
    local_18c = 0.5;
  }
  iVar2 = this_ptr->flame_style;
  if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
    local_24 = 4.4;
  }
  else if (iVar2 == 5) {
    local_24 = 1.9;
  }
  else if (iVar2 == 6) {
    if ((float)_DAT_005c0898 <= local_18c) {
      local_24 = 4.4;
    }
    else {
      local_24 = local_18c * (float)_DAT_005c0888 * (float)_DAT_005c08a0 + (float)_DAT_005c0890;
    }
  }
  else {
    local_24 = local_18c * (float)_DAT_005c0888 + (float)_DAT_005c0890;
  }
  local_198 = local_24;
  if ((this_ptr->flame_style == 0) && (local_18c < (float)_DAT_005c0890)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046d1c0(DAT_005f2afc,&local_6c);
    local_e4 = local_6c.x;
    local_e0[(uint)bVar4 * -2] = *(float *)((int)&local_6c + (uint)bVar4 * -8 + 4);
    local_e0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&local_6c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_12c = local_e4 - (this_ptr->position).x;
    local_128[0] = local_e0[0] - (this_ptr->position).y;
    local_128[1] = local_e0[1] - (this_ptr->position).z;
    fStack_b4 = local_12c;
    local_b0[(uint)bVar4 * -2] = local_128[(uint)bVar4 * -2];
    local_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fVar11 = (this_ptr->velocity).y;
    fVar12 = (this_ptr->velocity).x;
    fVar1 = (this_ptr->velocity).z;
    local_190 = (1.0 - local_18c * (float)_DAT_005c08a8) *
                (1.0 - ABS(local_b0[1] * (this_ptr->velocity).z +
                           fStack_b4 * (this_ptr->velocity).x + local_b0[0] * (this_ptr->velocity).y
                          ) / (SQRT(fVar1 * fVar1 + fVar12 * fVar12 + fVar11 * fVar11) *
                              SQRT(local_b0[1] * local_b0[1] +
                                   fStack_b4 * fStack_b4 + local_b0[0] * local_b0[0])));
    local_198 = (local_190 * (float)_DAT_005c08a0 + 1.0) * local_198;
  }
  if ((this_ptr->flame_style == 7) || (this_ptr->flame_style == 2)) {
    fStack_60 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    local_1c = fStack_60;
    local_5c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    fStack_3c = SQRT(local_58 * local_58 + fStack_60 * fStack_60 + local_5c * local_5c);
    fVar12 = 6.2831855;
    fVar11 = 0.0;
    local_110[2] = (float)_DAT_02cfd900;
    local_1c = local_5c;
    local_110[(uint)bVar4 * -2 + 3] = *(float *)(&DAT_02cfd904 + (uint)bVar4 * -8);
    local_110[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)(&DAT_02cfd908 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    local_188.base.type = (int)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar11,fVar12);
    fVar5 = (float10)fsin((float10)(float)local_188.base.type);
    fVar6 = (float10)fcos((float10)(float)local_188.base.type);
    local_110[2] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_110[3] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_a8._36_4_ = (uint)ROUND(local_110[2] * _DAT_005df8e4);
    local_80 = (int)ROUND(local_110[3] * _DAT_005df8e4);
    local_7c = (int)ROUND(local_100 * _DAT_005df8e4);
    local_1c = (float)local_188.base.type;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_a8 + 0x24));
    fVar5 = (float10)(float)local_188.base.type + (float10)_DAT_005c08d0;
    local_188.base.type = (int)(float)fVar5;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    local_110[2] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_110[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_fc.x = (int)ROUND(local_110[2] * _DAT_005df8e4);
    local_fc.y = (int)ROUND(local_110[3] * _DAT_005df8e4);
    local_fc.z = (int)ROUND(local_100 * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_fc);
    fVar5 = (float10)(float)local_188.base.type + (float10)_DAT_005c08d0;
    local_188.base.type = (int)(float)fVar5;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    local_110[2] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_110[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    CStack_138.x = (int)ROUND(local_110[2] * _DAT_005df8e4);
    CStack_138.y = (int)ROUND(local_110[3] * _DAT_005df8e4);
    CStack_138.z = (int)ROUND(local_100 * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_138);
    fVar5 = (float10)(float)local_188.base.type + (float10)_DAT_005c08d0;
    local_188.base.type = (int)(float)fVar5;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    local_110[2] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_110[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_f0.x = (int)ROUND(local_110[2] * _DAT_005df8e4);
    local_f0.y = (int)ROUND(local_110[3] * _DAT_005df8e4);
    local_f0.z = (int)ROUND(local_100 * _DAT_005df8e4);
    input = &local_f0;
  }
  else {
    local_a8._16_4_ = local_24 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_a8._12_4_ = -local_198 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_a8._20_4_ = 0.0;
    local_cc.x = (int)ROUND((float)local_a8._12_4_ * _DAT_005df8e4);
    local_cc.y = (int)ROUND((float)local_a8._16_4_ * _DAT_005df8e4);
    local_cc.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_1c = (float)local_a8._12_4_;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_cc);
    local_a8._12_4_ = local_198 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_78.x = (int)ROUND((float)local_a8._12_4_ * _DAT_005df8e4);
    local_78.y = (int)ROUND((float)local_a8._16_4_ * _DAT_005df8e4);
    local_78.z = (int)ROUND((float)local_a8._20_4_ * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_78);
    local_a8._16_4_ = -local_24 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_120.x = (int)ROUND((float)local_a8._12_4_ * _DAT_005df8e4);
    local_120.y = (int)ROUND((float)local_a8._16_4_ * _DAT_005df8e4);
    local_120.z = (int)ROUND((float)local_a8._20_4_ * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_120);
    local_a8._12_4_ = local_1c;
    local_150.x = (int)ROUND(local_1c * _DAT_005df8e4);
    local_150.y = (int)ROUND((float)local_a8._16_4_ * _DAT_005df8e4);
    local_150.z = (int)ROUND((float)local_a8._20_4_ * _DAT_005df8e4);
    input = &local_150;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,input);
  pCVar10 = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr->u = 0x20000;
  pCVar10->vertex_buffer_ptr->v = 0x20000;
  pCVar10->vertex_buffer_ptr[1].u = 0xfe0000;
  pCVar10->vertex_buffer_ptr[1].v = 0x20000;
  pCVar10->vertex_buffer_ptr[2].u = 0xfe0000;
  pCVar10->vertex_buffer_ptr[2].v = 0xfe0000;
  pCVar10->vertex_buffer_ptr[3].u = 0x20000;
  pCVar10->vertex_buffer_ptr[3].v = 0xfe0000;
  iVar2 = this_ptr->flame_style;
  if (iVar2 == 0) {
    fVar11 = 1.0 - local_18c;
LAB_0049ec85:
    fVar11 = fVar11 * _DAT_005c08d8;
  }
  else {
    if (iVar2 == 6) {
      local_34 = local_18c * _DAT_005c08d4;
      fVar11 = local_34;
      if ((float)_DAT_005c0898 <= local_18c) {
        fVar11 = _DAT_005c08d4 - local_34;
      }
      goto LAB_0049ec85;
    }
    if ((iVar2 == 4) || (iVar2 == 3)) {
      local_20 = 0xffff;
      goto LAB_0049ec97;
    }
    if (iVar2 == 7) {
      local_20 = 48000;
      goto LAB_0049ec97;
    }
    if (iVar2 != 2) {
      local_20 = 0x8000;
      goto LAB_0049ec97;
    }
    local_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(12000.0,20000.0);
    fVar11 = local_1c;
  }
  dVar7 = round((double)fVar11);
  local_24 = (float)(int)ROUND(dVar7);
LAB_0049ec97:
  if (this_ptr->flame_style == 0) {
    fVar11 = (_DAT_005c08d4 - local_190) * local_190;
    fVar12 = (1.0 - fVar11) * _DAT_005c08dc;
    fVar3 = (fVar11 * _DAT_005c08e8 + fVar12) * _DAT_005c08e4;
    fVar1 = (fVar11 * _DAT_005c08ec + fVar12) * _DAT_005c08e4;
    dVar7 = round
                      ((double)((fVar11 * _DAT_005c08e0 + fVar12) * _DAT_005c08e4));
    dVar8 = round((double)fVar3);
    dVar9 = round((double)fVar1);
    iStack_40 = (int)ROUND(dVar7);
    local_38 = (float)(int)ROUND(dVar8);
    fStack_3c = (float)(int)ROUND(dVar9);
  }
  else {
    local_2c = 0xff00;
    local_30 = 0xff00;
    local_34 = 9.14768e-41;
  }
  pCVar10 = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr->r = (int)local_34;
  pCVar10->vertex_buffer_ptr->g = local_2c;
  pCVar10->vertex_buffer_ptr->b = local_30;
  pCVar10->vertex_buffer_ptr->a = (int)local_24;
  pCVar10->vertex_buffer_ptr[1].r = (int)local_34;
  pCVar10->vertex_buffer_ptr[1].g = local_2c;
  pCVar10->vertex_buffer_ptr[1].b = local_30;
  pCVar10->vertex_buffer_ptr[1].a = (int)local_24;
  pCVar10->vertex_buffer_ptr[2].r = (int)local_34;
  pCVar10->vertex_buffer_ptr[2].g = local_2c;
  pCVar10->vertex_buffer_ptr[2].b = local_30;
  pCVar10->vertex_buffer_ptr[2].a = (int)local_24;
  pCVar10->vertex_buffer_ptr[3].r = (int)local_34;
  pCVar10->vertex_buffer_ptr[3].g = local_2c;
  pCVar10->vertex_buffer_ptr[3].b = local_30;
  pCVar10->vertex_buffer_ptr[3].a = (int)local_24;
  local_188.surface_normal.D.i = 0;
  local_188.surface_normal.C.i = 0;
  local_188.surface_normal.B.i = 0;
  local_188.surface_normal.A.i = 0;
  local_170 = 0;
  local_164 = 3;
  local_188.base.count = 4;
  local_168 = 2;
  local_16c = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar10,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&local_188);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_drender_cpp_pop_FUN_0046d080();
  return;
}
