// Name: core_fire.cpp_CTrail_render_FUN_004a0680
// Address: 004a0680
// Address Range: [[004a0680, 004a095f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_render_FUN_004a0680(CTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CTrail_render_FUN_004a0680(CTrail *this_ptr)

{
  byte bVar1;
  float afStackY_102c [997];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_84;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [2];
  CVector3f local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  bVar1 = 0;
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,this_ptr->texture_ptr);
  local_84.base.count = 4;
  local_84.surface_normal.D.i = 0;
  local_84.surface_normal.C.i = 0;
  local_84.surface_normal.B.i = 0;
  local_84.surface_normal.A.i = 0;
  local_6c = 0;
  local_60 = 3;
  local_68 = 1;
  local_64 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046d4d0
            (DAT_005f2afc,this_ptr->current_alpha);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&this_ptr->position);
  engine_drender_cpp_FUN_0046d250(DAT_005f2afc);
  translation = (CVector3f *)0x0;
  local_38.x = local_44;
  *(float *)((int)&local_38 + (uint)bVar1 * -8 + 4) = afStack_40[(uint)bVar1 * -2];
  *(float *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_38,translation);
  local_48 = 0.0;
  local_50 = this_ptr->size * this_ptr->current_alpha;
  local_2c.x = (int)ROUND(local_50 * _DAT_005df8e4);
  local_2c.y = (int)ROUND(local_50 * _DAT_005df8e4);
  local_2c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  local_4c = local_50;
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_2c);
  local_50 = -local_50;
  local_20.x = (int)ROUND(local_50 * _DAT_005df8e4);
  local_20.y = (int)ROUND(local_4c * _DAT_005df8e4);
  local_20.z = (int)ROUND(local_48 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_20);
  local_4c = -local_4c;
  local_14.x = (int)ROUND(local_50 * _DAT_005df8e4);
  local_14.y = (int)ROUND(local_4c * _DAT_005df8e4);
  local_14.z = (int)ROUND(local_48 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_14);
  local_50 = -local_50;
  local_5c.x = (int)ROUND(local_50 * _DAT_005df8e4);
  local_5c.y = (int)ROUND(local_4c * _DAT_005df8e4);
  local_5c.z = (int)ROUND(local_48 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_5c);
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
  DAT_0060b034 = 0xffff;
  DAT_0060b038 = 0xffff;
  DAT_0060b03c = 0xffff;
  DAT_0060b064 = 0xffff;
  DAT_0060b068 = 0xffff;
  DAT_0060b06c = 0xffff;
  _DAT_0060b094 = 0xffff;
  _DAT_0060b098 = 0xffff;
  _DAT_0060b09c = 0xffff;
  _DAT_0060b0c4 = 0xffff;
  _DAT_0060b0c8 = 0xffff;
  _DAT_0060b0cc = 0xffff;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&local_84);
  engine_drender_cpp_pop_FUN_0046d080();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
