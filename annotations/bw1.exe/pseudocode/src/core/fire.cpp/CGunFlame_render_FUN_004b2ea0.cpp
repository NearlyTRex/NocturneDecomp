// Name: core_fire.cpp_CGunFlame_render_FUN_004b2ea0
// Address: 004b2ea0
// Address Range: [[004b2ea0, 004b3449]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CDemonRenderer *this_ptr_00;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_10a8 [999];
  CVector3f *translation;
  float local_f4;
  SMRGLHeaderPrimitive local_e8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc [2];
  CVector3i local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float afStack_98 [2];
  CVector3f local_90;
  float local_84;
  float local_80 [5];
  CVector3i local_6c;
  CVector3i local_60;
  float local_54;
  float local_50 [2];
  CVector3i local_48 [2];
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar4 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  fVar5 = (float10)this_ptr->anim_frame;
  round();
  local_28 = (float)(int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)((int)local_28 * 0x18 + 0x1c58588));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->position);
  engine_drender_cpp_FUN_00483b70(DAT_00612560);
  translation = (CVector3f *)0x0;
  local_90.x = local_80[2];
  *(float *)((int)&local_90 + (uint)bVar4 * -8 + 4) = local_80[(uint)bVar4 * -2 + 3];
  *(float *)((int)&local_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       local_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_90,translation);
  fVar5 = ((float10)_DAT_005fffb0 - (float10)this_ptr->lifetime) / (float10)_DAT_005fffb0;
  fVar1 = (float)(fVar5 * (float10)_DAT_005df514 + (float10)_DAT_005df51c);
  local_f4 = fVar1;
  if ((float10)(double)fVar5 < (float10)_DAT_005df51c) {
    engine_drender_cpp_FUN_00483ae0(DAT_00612560);
    local_54 = local_9c;
    local_50[(uint)bVar4 * -2] = afStack_98[(uint)bVar4 * -2];
    local_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_c0 = local_54 - (this_ptr->position).x;
    local_bc[0] = local_50[0] - (this_ptr->position).y;
    local_bc[1] = local_50[1] - (this_ptr->position).z;
    local_84 = local_c0;
    local_80[(uint)bVar4 * -2] = local_bc[(uint)bVar4 * -2];
    local_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_bc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fVar6 = (float10)(this_ptr->velocity).y;
    fVar7 = (float10)(this_ptr->velocity).x;
    fVar8 = (float10)(this_ptr->velocity).z;
    local_f4 = (float)(((float10)1 +
                       ((float10)1 - (float10)(double)fVar5 * (float10)_DAT_005df524) *
                       ((float10)1 -
                       (float10)ABS(local_80[1] * (this_ptr->velocity).z +
                                    local_84 * (this_ptr->velocity).x +
                                    local_80[0] * (this_ptr->velocity).y) /
                       (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) *
                       SQRT((float10)local_80[1] * (float10)local_80[1] +
                            (float10)local_84 * (float10)local_84 +
                            (float10)local_80[0] * (float10)local_80[0]))) * (float10)_DAT_005df52c)
                      * (float10)fVar1);
  }
  local_a4 = fVar1 * _DAT_005df534 * (float)_DAT_005df53c;
  local_a8 = -local_f4 * _DAT_005df534 * (float)_DAT_005df53c;
  local_a0 = 0.0;
  local_48[0].x = (int)ROUND(local_a8 * _DAT_005fff94);
  local_48[0].y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_48[0].z = (int)ROUND(_DAT_005fff94 * 0.0);
  local_28 = local_a8;
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,local_48);
  local_a8 = local_f4 * (float)_DAT_005df544 * (float)_DAT_005df53c;
  local_6c.x = (int)ROUND(local_a8 * _DAT_005fff94);
  local_6c.y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_6c.z = (int)ROUND(local_a0 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_6c);
  local_a4 = -fVar1 * (float)_DAT_005df544 * (float)_DAT_005df53c;
  local_b4.x = (int)ROUND(local_a8 * _DAT_005fff94);
  local_b4.y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_b4.z = (int)ROUND(local_a0 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_b4);
  local_a8 = local_28;
  local_60.x = (int)ROUND(local_28 * _DAT_005fff94);
  local_60.y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_60.z = (int)ROUND(local_a0 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_60);
  pCVar2 = DAT_00612560;
  fVar5 = (float10)(float)fVar5;
  fVar11 = ((float10)_DAT_005df550 - fVar5) * fVar5;
  fVar9 = ((float10)1 - fVar5) * (float10)_DAT_005df54c;
  fVar5 = (float10)_DAT_005df558;
  fVar6 = (float10)_DAT_005df560;
  fVar7 = (float10)_DAT_005df564;
  DAT_00612560->vertex_buffer_ptr->u = 0x20000;
  fVar8 = ((float10)1 - fVar11) * (float10)_DAT_005df554;
  pCVar2->vertex_buffer_ptr->v = 0x20000;
  fVar10 = (float10)_DAT_005df55c;
  fVar5 = (fVar11 * fVar5 + fVar8) * fVar10;
  pCVar2->vertex_buffer_ptr[1].u = 0xfe0000;
  fVar6 = (fVar11 * fVar6 + fVar8) * fVar10;
  pCVar2->vertex_buffer_ptr[1].v = 0x20000;
  fVar10 = fVar10 * (fVar11 * fVar7 + fVar8);
  pCVar2->vertex_buffer_ptr[2].u = 0xfe0000;
  iVar3 = round();
  *(uint *)(iVar3 + 0x7c) = 0xfe0000;
  round();
  iVar3 = round();
  *(uint *)(iVar3 + 0xa8) = 0x20000;
  round();
  local_1c = (int)ROUND(fVar5);
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  local_24 = (int)ROUND(fVar6);
  this_ptr_00->vertex_buffer_ptr->r = local_1c;
  local_18 = (int)ROUND(fVar10);
  this_ptr_00->vertex_buffer_ptr->g = local_24;
  local_20 = (int)ROUND(fVar9);
  this_ptr_00->vertex_buffer_ptr->b = local_18;
  this_ptr_00->vertex_buffer_ptr->a = local_20;
  this_ptr_00->vertex_buffer_ptr[1].r = local_1c;
  this_ptr_00->vertex_buffer_ptr[1].g = local_24;
  this_ptr_00->vertex_buffer_ptr[1].b = local_18;
  this_ptr_00->vertex_buffer_ptr[1].a = local_20;
  this_ptr_00->vertex_buffer_ptr[2].r = local_1c;
  this_ptr_00->vertex_buffer_ptr[2].g = local_24;
  this_ptr_00->vertex_buffer_ptr[2].b = local_18;
  this_ptr_00->vertex_buffer_ptr[2].a = local_20;
  this_ptr_00->vertex_buffer_ptr[3].r = local_1c;
  this_ptr_00->vertex_buffer_ptr[3].g = local_24;
  this_ptr_00->vertex_buffer_ptr[3].b = local_18;
  this_ptr_00->vertex_buffer_ptr[3].a = local_20;
  local_e8.surface_normal.D.i = 0;
  local_e8.surface_normal.C.i = 0;
  local_e8.surface_normal.B.i = 0;
  local_e8.surface_normal.A.i = 0;
  local_d0 = 0;
  local_e8.base.count = 4;
  local_c8 = 2;
  local_c4 = 3;
  local_cc = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(DAT_00612560,&local_e8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
