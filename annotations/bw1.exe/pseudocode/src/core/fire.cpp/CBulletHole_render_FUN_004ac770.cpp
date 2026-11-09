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
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float afStack_24 [2];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  if (*(CDemonActor **)&this_ptr->field_0x10 == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)this_ptr);
    translation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(*(CDemonActor **)&this_ptr->field_0x10)
    ;
    translation = (CVector3f *)&this_ptr->field_0x24;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x14,translation);
  _DAT_0062905c = (*(uint *)&this_ptr->field_0x20 & 1) * 0x800000;
  local_5c = 0;
  DAT_0062902c = _DAT_0062905c + 0x80000;
  iVar1 = (*(uint *)&this_ptr->field_0x20 & 2) * 0x400000;
  _DAT_0062905c = _DAT_0062905c + 0x780000;
  _DAT_00629030 = iVar1 + 0x780000;
  DAT_00629090 = iVar1 + 0x80000;
  local_64 = 0xbe2e147b;
  local_60 = 0xbe2e147b;
  local_4c = (int)ROUND(_DAT_005fff94 * -0.17);
  local_48 = (int)ROUND(_DAT_005fff94 * -0.17);
  local_44 = (int)ROUND(_DAT_005fff94 * 0.0);
  _DAT_00629060 = _DAT_00629030;
  _DAT_0062908c = _DAT_0062905c;
  _DAT_006290bc = DAT_0062902c;
  _DAT_006290c0 = DAT_00629090;
  engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_4c);
  local_64 = 0x3e2e147b;
  local_60 = 0xbe2e147b;
  local_5c = 0;
  local_7c = (int)ROUND(_DAT_005fff94 * 0.17);
  local_78 = (int)ROUND(_DAT_005fff94 * -0.17);
  local_74 = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_7c);
  local_64 = 0x3e2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_1c = (int)ROUND(_DAT_005fff94 * 0.17);
  local_18 = (int)ROUND(_DAT_005fff94 * 0.17);
  local_14 = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_1c);
  local_64 = 0xbe2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_34 = (int)ROUND(_DAT_005fff94 * -0.17);
  local_30 = (int)ROUND(_DAT_005fff94 * 0.17);
  local_2c = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_34);
  if (*(int *)&this_ptr->field_0x10 == 0) {
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
    core_actor_cpp_FUN_00408ac0(*(uint *)&this_ptr->field_0x10,&this_ptr->field_0x30);
    local_40 = local_28;
    local_3c[(uint)bVar2 * -2] = afStack_24[(uint)bVar2 * -2];
    local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_70 = (int)ROUND(*(float *)this_ptr * _DAT_005fff94);
    local_6c = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005fff94);
    local_68 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005fff94);
    local_58 = (int)ROUND(local_40 * _DAT_005fff98);
    local_54 = (int)ROUND(local_3c[0] * _DAT_005fff98);
    local_50 = (int)ROUND(local_3c[1] * _DAT_005fff98);
    core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
              (g_CDemonSetPtr,(CVector3i *)&local_70,(CVector3i *)&local_58,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1c57090);
  if (*(CDemonActor **)&this_ptr->field_0x10 == (CDemonActor *)0x0) {
    engine_matrix_c_pop_FUN_004839a0();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(*(CDemonActor **)&this_ptr->field_0x10)
  ;
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
