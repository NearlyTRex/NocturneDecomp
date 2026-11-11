// Name: core_fire.cpp_CBulletHole_render_FUN_004ac770
// Address: 004ac770
// Address Range: [[004ac770, 004acac0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_004ac770(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_render_FUN_004ac770(CBulletHole *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_1028 [998];
  CVector3f *translation;
  CVector3i local_7c;
  CVector3i local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  CVector3i local_58;
  CVector3i local_4c;
  float local_40;
  float local_3c [2];
  CVector3i local_34;
  float local_28;
  float afStack_24 [2];
  CVector3i local_1c;
  
  bVar2 = 0;
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,&this_ptr->position);
    translation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(this_ptr->actor_ptr);
    translation = &this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&this_ptr->euler_angles,translation);
  _DAT_0062905c = (this_ptr->texture_index & 1U) * 0x800000;
  local_5c = 0;
  DAT_0062902c = _DAT_0062905c + 0x80000;
  iVar1 = (this_ptr->texture_index & 2U) * 0x400000;
  _DAT_0062905c = _DAT_0062905c + 0x780000;
  _DAT_00629030 = iVar1 + 0x780000;
  DAT_00629090 = iVar1 + 0x80000;
  local_64 = 0xbe2e147b;
  local_60 = 0xbe2e147b;
  local_4c.x = (int)ROUND(_DAT_005fff94 * -0.17);
  local_4c.y = (int)ROUND(_DAT_005fff94 * -0.17);
  local_4c.z = (int)ROUND(_DAT_005fff94 * 0.0);
  _DAT_00629060 = _DAT_00629030;
  _DAT_0062908c = _DAT_0062905c;
  _DAT_006290bc = DAT_0062902c;
  _DAT_006290c0 = DAT_00629090;
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_64 = 0x3e2e147b;
  local_60 = 0xbe2e147b;
  local_5c = 0;
  local_7c.x = (int)ROUND(_DAT_005fff94 * 0.17);
  local_7c.y = (int)ROUND(_DAT_005fff94 * -0.17);
  local_7c.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_64 = 0x3e2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_1c.x = (int)ROUND(_DAT_005fff94 * 0.17);
  local_1c.y = (int)ROUND(_DAT_005fff94 * 0.17);
  local_1c.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_64 = 0xbe2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_34.x = (int)ROUND(_DAT_005fff94 * -0.17);
  local_34.y = (int)ROUND(_DAT_005fff94 * 0.17);
  local_34.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_34);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    DAT_00629038 = 0xffff;
    DAT_0062903c = 0xffff;
    DAT_00629064 = 0xffff;
    DAT_00629068 = 0xffff;
    DAT_0062906c = 0xffff;
    DAT_00629094 = 0xffff;
    DAT_00629098 = 0xffff;
    DAT_0062909c = 0xffff;
    DAT_006290c4 = 0xffff;
    DAT_006290c8 = 0xffff;
    DAT_006290cc = 0xffff;
    DAT_00629034 = 0xffff;
  }
  else {
    core_actor_cpp_FUN_00408ac0(this_ptr->actor_ptr,&this_ptr->actor_local_space);
    local_40 = local_28;
    local_3c[(uint)bVar2 * -2] = afStack_24[(uint)bVar2 * -2];
    local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_70.x = (int)ROUND((this_ptr->position).x * _DAT_005fff94);
    local_70.y = (int)ROUND((this_ptr->position).y * _DAT_005fff94);
    local_70.z = (int)ROUND((this_ptr->position).z * _DAT_005fff94);
    local_58.x = (int)ROUND(local_40 * _DAT_005fff98);
    local_58.y = (int)ROUND(local_3c[0] * _DAT_005fff98);
    local_58.z = (int)ROUND(local_3c[1] * _DAT_005fff98);
    core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(g_CDemonSetPtr,&local_70,&local_58,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1c57090);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_matrix_c_pop_FUN_004839a0();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(this_ptr->actor_ptr);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
