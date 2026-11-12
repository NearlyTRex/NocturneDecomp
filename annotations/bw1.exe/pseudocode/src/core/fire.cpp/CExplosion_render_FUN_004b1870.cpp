// Name: core_fire.cpp_CExplosion_render_FUN_004b1870
// Address: 004b1870
// Address Range: [[004b1870, 004b1c08]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_004b1870(CExplosion *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CExplosion_render_FUN_004b1870(CExplosion *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  int aiStackY_1048 [999];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_94;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3i local_6c;
  CVector3f local_60;
  CVector3i local_54;
  float local_48;
  float local_44;
  float local_40;
  CVector3i local_3c;
  float local_30;
  int aiStack_2c [2];
  CVector3i local_24;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar2 = 0;
  if (ABS(this_ptr->lifetime) == 0.0) {
    return;
  }
  fVar3 = ((float10)1 - (float10)this_ptr->lifetime) * (float10)_DAT_005df35c;
  round();
  local_18 = (int)ROUND(fVar3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)(&DAT_0061c524 + local_18 * 0x30));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->position);
  engine_drender_cpp_FUN_00483b70(DAT_00612560);
  translation = (CVector3f *)0x0;
  local_60.x = local_30;
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + 4) = aiStack_2c[(uint)bVar2 * -2];
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_60,translation);
  fVar3 = (float10)this_ptr->scale * (float10)_DAT_005df374 * (float10)_DAT_005df36c;
  fVar4 = -(float10)this_ptr->scale * (float10)_DAT_005df364 * (float10)_DAT_005df36c;
  round();
  iVar1 = round();
  local_c = (int)ROUND(fVar3);
  local_10 = (int)ROUND(fVar4);
  if (iVar1 != 0) {
    local_c = -local_c;
    local_10 = -local_10;
  }
  local_8 = local_10;
  local_48 = (float)local_10;
  local_44 = this_ptr->scale * _DAT_005df37c * (float)_DAT_005df36c;
  local_40 = 0.0;
  local_24.x = (int)ROUND(local_48 * _DAT_005fff94);
  local_24.y = (int)ROUND(local_44 * _DAT_005fff94);
  local_24.z = (int)ROUND(_DAT_005fff94 * 0.0);
  local_14 = local_48;
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_24);
  local_8 = local_c;
  local_48 = (float)local_c;
  local_54.x = (int)ROUND(local_48 * _DAT_005fff94);
  local_54.y = (int)ROUND(local_44 * _DAT_005fff94);
  local_54.z = (int)ROUND(local_40 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_54);
  local_44 = -this_ptr->scale * (float)_DAT_005df384 * (float)_DAT_005df36c;
  local_3c.x = (int)ROUND(local_48 * _DAT_005fff94);
  local_3c.y = (int)ROUND(local_44 * _DAT_005fff94);
  local_3c.z = (int)ROUND(local_40 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_3c);
  local_48 = local_14;
  local_6c.x = (int)ROUND(local_14 * _DAT_005fff94);
  local_6c.y = (int)ROUND(local_44 * _DAT_005fff94);
  local_6c.z = (int)ROUND(local_40 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_6c);
  this_ptr_00 = DAT_00612560;
  DAT_00612560->vertex_buffer_ptr->u = 0x20000;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x20000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr->a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[1].a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[2].a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[3].a = 0x8000;
  local_94.base.count = 4;
  local_94.surface_normal.D.i = 0;
  local_94.surface_normal.C.i = 0;
  local_94.surface_normal.B.i = 0;
  local_94.surface_normal.A.i = 0;
  local_7c = 0;
  local_70 = 3;
  local_78 = 1;
  local_74 = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,&local_94,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
