// Name: core_fire.cpp_CFireEffect_createStake_FUN_0049d2c0
// Address: 0049d2c0
// Address Range: [[0049d2c0, 0049d446]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0049d2c0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0049d2c0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

{
  bool bVar1;
  byte bVar2;
  float afStackY_1034 [1003];
  CMatrix3x3f local_74;
  CVector3f local_4c;
  float local_40;
  float local_3c [4];
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar2 = 0;
  bVar1 = false;
  switch(ground_type) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 8:
    bVar1 = true;
    break;
  case 3:
  case 4:
  case 7:
  case 9:
  case 10:
    bVar1 = false;
    break;
  case 6:
    goto switchD_0049d2d9_caseD_6;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_74,orientation_angles);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.7;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_74,&local_28,&local_4c);
  local_3c[2] = local_4c.x;
  local_3c[(uint)bVar2 * -2 + 3] = *(float *)((int)&local_4c + (uint)bVar2 * -8 + 4);
  local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  local_40 = impact_position->x - local_3c[2];
  local_3c[0] = impact_position->y - local_3c[3];
  local_3c[1] = impact_position->z - local_2c;
  local_1c.x = local_40;
  *(float *)((int)&local_1c + (uint)bVar2 * -8 + 4) = local_3c[(uint)bVar2 * -2];
  *(float *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_004941c0
              (g_StakePool + _DAT_01c594ec,&local_1c,orientation_angles,surface_normal);
  }
  else {
    core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0
              (0x0264B290,(CDemonActor *)this_ptr,"a-wood?.wav",&local_1c,0.23);
    core_fire_cpp_CStake_init_FUN_00494150(g_StakePool + _DAT_01c594ec,&local_1c,orientation_angles)
    ;
  }
  _DAT_01c594ec = _DAT_01c594ec + 1;
  if (0xff < _DAT_01c594ec) {
    _DAT_01c594ec = 0;
  }
  if (_DAT_01c594e8 < 0x100) {
    _DAT_01c594e8 = _DAT_01c594e8 + 1;
    return;
  }
switchD_0049d2d9_caseD_6:
  return;
}
