// Name: core_fire.cpp_CGunFlame_render_FUN_004b2ea0
// Address: 004b2ea0
// Address Range: [[004b2ea0, 004b3449]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonRenderer *this_ptr_00;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float afStackY_10ac [996];
  uint uStack_114;
  CVector3f *translation;
  SMRGLHeaderPrimitive SStack_fc;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  float local_c4;
  float local_c0 [2];
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f CStack_94;
  float fStack_88;
  float local_84 [2];
  CVector3f local_7c;
  CVector3i CStack_70;
  CVector3i local_64;
  float local_58;
  float local_54 [2];
  CVector3i local_4c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  
  bVar8 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  dVar13 = round((double)this_ptr->anim_frame);
  fStack_2c = (float)(int)ROUND(dVar13);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)((int)fStack_2c * 0x18 + 0x1c58588));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00483b70(DAT_00612560,&local_7c);
  translation = (CVector3f *)0x0;
  CStack_94.x = local_7c.x;
  *(uint *)((int)&CStack_94 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&CStack_94 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_7c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  uStack_114 = 0x4b2f4b;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&CStack_94,translation);
  fVar12 = ((float10)_DAT_005fffb0 - (float10)this_ptr->lifetime) / (float10)_DAT_005fffb0;
  SStack_fc.surface_normal.B.f = (float)fVar12;
  SStack_fc.base.count = (int)(float)(fVar12 * (float10)_DAT_005df514 + (float10)_DAT_005df51c);
  SStack_fc.surface_normal.A.f = (float)SStack_fc.base.count;
  if ((float10)(double)fVar12 < (float10)_DAT_005df51c) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0(DAT_00612560,&local_a0);
    local_58 = local_a0.x;
    local_54[(uint)bVar8 * -2] = *(float *)((int)&local_a0 + (uint)bVar8 * -8 + 4);
    local_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&local_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    local_c4 = local_58 - (this_ptr->position).x;
    local_c0[0] = local_54[0] - (this_ptr->position).y;
    local_c0[1] = local_54[1] - (this_ptr->position).z;
    fStack_88 = local_c4;
    local_84[(uint)bVar8 * -2] = local_c0[(uint)bVar8 * -2];
    local_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    fVar9 = (float10)(this_ptr->velocity).y;
    fVar10 = (float10)(this_ptr->velocity).x;
    fVar11 = (float10)(this_ptr->velocity).z;
    fVar12 = ((float10)1 - (float10)(double)fVar12 * (float10)_DAT_005df524) *
             ((float10)1 -
             (float10)ABS(local_84[1] * (this_ptr->velocity).z +
                          fStack_88 * (this_ptr->velocity).x + local_84[0] * (this_ptr->velocity).y)
             / (SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9) *
               SQRT((float10)local_84[1] * (float10)local_84[1] +
                    (float10)fStack_88 * (float10)fStack_88 +
                    (float10)local_84[0] * (float10)local_84[0])));
    SStack_fc.base.type = (int)(float)fVar12;
    SStack_fc.base.count =
         (int)(float)(((float10)1 + fVar12 * (float10)_DAT_005df52c) *
                     (float10)SStack_fc.surface_normal.A.f);
  }
  local_a8 = SStack_fc.surface_normal.A.f * _DAT_005df534 * (float)_DAT_005df53c;
  local_ac = -(float)SStack_fc.base.count * _DAT_005df534 * (float)_DAT_005df53c;
  local_a4 = 0.0;
  local_4c.x = (int)ROUND(local_ac * _DAT_005fff94);
  local_4c.y = (int)ROUND(local_a8 * _DAT_005fff94);
  local_4c.z = (int)ROUND(_DAT_005fff94 * 0.0);
  fStack_2c = local_ac;
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_ac = (float)SStack_fc.base.count * (float)_DAT_005df544 * (float)_DAT_005df53c;
  CStack_70.x = (int)ROUND(local_ac * _DAT_005fff94);
  CStack_70.y = (int)ROUND(local_a8 * _DAT_005fff94);
  CStack_70.z = (int)ROUND(local_a4 * _DAT_005fff94);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_70);
  local_a8 = -SStack_fc.surface_normal.A.f * (float)_DAT_005df544 * (float)_DAT_005df53c;
  local_b8.x = (int)ROUND(local_ac * _DAT_005fff94);
  local_b8.y = (int)ROUND(local_a8 * _DAT_005fff94);
  local_b8.z = (int)ROUND(local_a4 * _DAT_005fff94);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_b8);
  local_ac = fStack_2c;
  local_64.x = (int)ROUND(fStack_2c * _DAT_005fff94);
  local_64.y = (int)ROUND(local_a8 * _DAT_005fff94);
  local_64.z = (int)ROUND(local_a4 * _DAT_005fff94);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_64);
  this_ptr_00 = DAT_00612560;
  fVar2 = (_DAT_005df550 - SStack_fc.surface_normal.B.f) * SStack_fc.surface_normal.B.f;
  fVar6 = (1.0 - SStack_fc.surface_normal.B.f) * _DAT_005df54c;
  fVar3 = fVar2 * _DAT_005df558;
  fVar4 = fVar2 * _DAT_005df560;
  fVar5 = fVar2 * _DAT_005df564;
  DAT_00612560->vertex_buffer_ptr->u = 0x20000;
  fVar2 = (1.0 - fVar2) * _DAT_005df554;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  fVar7 = _DAT_005df55c;
  fVar3 = (fVar3 + fVar2) * _DAT_005df55c;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar13 = round((double)fVar6);
  pSVar1[2].v = 0xfe0000;
  dVar14 = round((double)fVar3);
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar15 = round((double)((fVar4 + fVar2) * fVar7));
  pSVar1[3].u = 0x20000;
  uStack_114 = 0x4b32c8;
  dVar16 = round((double)(fVar7 * (fVar5 + fVar2)));
  iStack_30 = (int)ROUND(dVar14);
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  iStack_38 = (int)ROUND(dVar15);
  this_ptr_00->vertex_buffer_ptr->r = iStack_30;
  fStack_2c = (float)(int)ROUND(dVar16);
  this_ptr_00->vertex_buffer_ptr->g = iStack_38;
  iStack_34 = (int)ROUND(dVar13);
  this_ptr_00->vertex_buffer_ptr->b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr->a = iStack_34;
  this_ptr_00->vertex_buffer_ptr[1].r = iStack_30;
  this_ptr_00->vertex_buffer_ptr[1].g = iStack_38;
  this_ptr_00->vertex_buffer_ptr[1].b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr[1].a = iStack_34;
  this_ptr_00->vertex_buffer_ptr[2].r = iStack_30;
  this_ptr_00->vertex_buffer_ptr[2].g = iStack_38;
  this_ptr_00->vertex_buffer_ptr[2].b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr[2].a = iStack_34;
  this_ptr_00->vertex_buffer_ptr[3].r = iStack_30;
  this_ptr_00->vertex_buffer_ptr[3].g = iStack_38;
  this_ptr_00->vertex_buffer_ptr[3].b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr[3].a = iStack_34;
  SStack_fc.surface_normal.D.i = 0;
  SStack_fc.surface_normal.C.i = 0;
  SStack_fc.surface_normal.B.i = 0;
  SStack_fc.surface_normal.A.i = 0;
  local_e4 = 0;
  SStack_fc.base.count = 4;
  local_dc = 2;
  local_d8 = 3;
  local_e0 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(DAT_00612560,&SStack_fc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
