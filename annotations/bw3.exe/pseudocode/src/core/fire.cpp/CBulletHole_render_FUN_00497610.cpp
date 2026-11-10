// Name: core_fire.cpp_CBulletHole_render_FUN_00497610
// Address: 00497610
// Address Range: [[00497610, 00497a2a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_00497610(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_render_FUN_00497610(CBulletHole *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_1060 [1010];
  SMRGLTextureBasic *texture;
  CVector3f *translation;
  CVector3i local_84;
  float local_78;
  float afStack_74 [2];
  CVector3i local_6c;
  float local_60;
  float local_5c;
  uint local_58;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float local_2c [2];
  CVector3i local_24;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_14 = 0.0;
  if (*(CDemonActor **)&this_ptr->field_0x10 == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)this_ptr);
    translation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(*(CDemonActor **)&this_ptr->field_0x10)
    ;
    translation = (CVector3f *)&this_ptr->field_0x24;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x14,translation);
  iVar1 = *(int *)&this_ptr->field_0x3c;
  if (iVar1 == 0) {
    texture = (SMRGLTextureBasic *)&DAT_005fc964;
  }
  else if (iVar1 == 1) {
    texture = (SMRGLTextureBasic *)&DAT_005fc97c;
  }
  else {
    if (iVar1 != 2) goto LAB_0049766e;
    texture = (SMRGLTextureBasic *)&DAT_005fc994;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
LAB_0049766e:
  if (*(int *)&this_ptr->field_0x3c == 0) {
    _DAT_0060b08c = (*(uint *)&this_ptr->field_0x20 & 1) * 0x800000;
    _DAT_0060b0bc = _DAT_0060b08c + 0x80000;
    _DAT_0060b0c0 = (*(uint *)&this_ptr->field_0x20 & 2) * 0x400000;
    _DAT_0060b08c = _DAT_0060b08c + 0x780000;
    _DAT_0060b060 = _DAT_0060b0c0 + 0x780000;
    _DAT_0060b0c0 = _DAT_0060b0c0 + 0x80000;
  }
  else {
    _DAT_0060b060 = 0xfe0000;
    _DAT_0060b08c = 0xfe0000;
    _DAT_0060b0bc = 0x20000;
    _DAT_0060b0c0 = 0x20000;
  }
  iVar1 = *(int *)&this_ptr->field_0x3c;
  if (iVar1 == 0) {
    local_14 = 0.17;
  }
  else if (iVar1 == 1) {
    local_14 = 1.0;
  }
  else if (iVar1 == 2) {
    local_14 = 0.5;
  }
  local_60 = -local_14;
  local_58 = 0;
  local_6c.x = (int)ROUND(local_60 * _DAT_005df8e4);
  local_6c.y = (int)ROUND(local_60 * _DAT_005df8e4);
  local_6c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  DAT_0060b02c = _DAT_0060b0bc;
  _DAT_0060b030 = _DAT_0060b060;
  _DAT_0060b05c = _DAT_0060b08c;
  DAT_0060b090 = _DAT_0060b0c0;
  local_5c = local_60;
  local_18 = local_60;
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_6c);
  local_60 = local_14;
  local_5c = local_18;
  local_58 = 0;
  local_48.x = (int)ROUND(local_14 * _DAT_005df8e4);
  local_48.y = (int)ROUND(local_18 * _DAT_005df8e4);
  local_48.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_48);
  local_60 = local_14;
  local_5c = local_14;
  local_58 = 0;
  local_84.x = (int)ROUND(local_14 * _DAT_005df8e4);
  local_84.y = (int)ROUND(local_14 * _DAT_005df8e4);
  local_84.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_84);
  local_60 = local_18;
  local_5c = local_14;
  local_58 = 0;
  local_54.x = (int)ROUND(local_18 * _DAT_005df8e4);
  local_54.y = (int)ROUND(local_14 * _DAT_005df8e4);
  local_54.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&local_54);
  if (*(int *)&this_ptr->field_0x10 == 0) {
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
    DAT_0060b034 = 0xffff;
  }
  else {
    core_actor_cpp_FUN_00408b00(*(int *)&this_ptr->field_0x10,&this_ptr->field_0x30);
    local_30 = local_78;
    local_2c[(uint)bVar2 * -2] = afStack_74[(uint)bVar2 * -2];
    local_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_24.x = (int)ROUND(*(float *)this_ptr * _DAT_005df8e4);
    local_24.y = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005df8e4);
    local_24.z = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005df8e4);
    local_3c.x = (int)ROUND(local_30 * _DAT_005df8e8);
    local_3c.y = (int)ROUND(local_2c[0] * _DAT_005df8e8);
    local_3c.z = (int)ROUND(local_2c[1] * _DAT_005df8e8);
    core_set_cpp_CDemonSet_computeLighting_FUN_00538400(g_CDemonSetPtr,&local_24,&local_3c,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
            (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
  if (*(CDemonActor **)&this_ptr->field_0x10 == (CDemonActor *)0x0) {
    engine_matrix_c_pop_FUN_0046d080();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(*(CDemonActor **)&this_ptr->field_0x10)
  ;
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
