// Name: core_fire.cpp_CBulletHole_render_FUN_00493dd0
// Address: 00493dd0
// Address Range: [[00493dd0, 00494120]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_00493dd0(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_render_FUN_00493dd0(CBulletHole *this_ptr)

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
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&this_ptr->position);
    translation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(this_ptr->actor_ptr);
    translation = &this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&this_ptr->euler_angles,translation);
  _DAT_0062205c = (this_ptr->texture_index & 1U) * 0x800000;
  local_5c = 0;
  DAT_0062202c = _DAT_0062205c + 0x80000;
  iVar1 = (this_ptr->texture_index & 2U) * 0x400000;
  _DAT_0062205c = _DAT_0062205c + 0x780000;
  _DAT_00622030 = iVar1 + 0x780000;
  DAT_00622090 = iVar1 + 0x80000;
  local_64 = 0xbe2e147b;
  local_60 = 0xbe2e147b;
  local_4c.x = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_4c.y = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_4c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  _DAT_00622060 = _DAT_00622030;
  _DAT_0062208c = _DAT_0062205c;
  _DAT_006220bc = DAT_0062202c;
  _DAT_006220c0 = DAT_00622090;
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_64 = 0x3e2e147b;
  local_60 = 0xbe2e147b;
  local_5c = 0;
  local_7c.x = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_7c.y = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_7c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_64 = 0x3e2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_1c.x = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_1c.y = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_1c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_64 = 0xbe2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_34.x = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_34.y = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_34.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_34);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    DAT_00622038 = 0xffff;
    DAT_0062203c = 0xffff;
    DAT_00622064 = 0xffff;
    DAT_00622068 = 0xffff;
    DAT_0062206c = 0xffff;
    DAT_00622094 = 0xffff;
    DAT_00622098 = 0xffff;
    DAT_0062209c = 0xffff;
    DAT_006220c4 = 0xffff;
    DAT_006220c8 = 0xffff;
    DAT_006220cc = 0xffff;
    DAT_00622034 = 0xffff;
  }
  else {
    core_actor_cpp_FUN_00408cf0(this_ptr->actor_ptr,&this_ptr->actor_local_space);
    local_40 = local_28;
    local_3c[(uint)bVar2 * -2] = afStack_24[(uint)bVar2 * -2];
    local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_70.x = (int)ROUND((this_ptr->position).x * _DAT_005f64e4);
    local_70.y = (int)ROUND((this_ptr->position).y * _DAT_005f64e4);
    local_70.z = (int)ROUND((this_ptr->position).z * _DAT_005f64e4);
    local_58.x = (int)ROUND(local_40 * _DAT_005f64e8);
    local_58.y = (int)ROUND(local_3c[0] * _DAT_005f64e8);
    local_58.z = (int)ROUND(local_3c[1] * _DAT_005f64e8);
    core_set_cpp_CDemonSet_computeLighting_FUN_005317c0(g_CDemonSetPtr,&local_70,&local_58,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1c3ded0);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_pop_FUN_0046b4a0();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(this_ptr->actor_ptr);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
