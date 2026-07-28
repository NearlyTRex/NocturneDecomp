// Name: core_fire.cpp_CFireEffect_createStake_FUN_0048b070
// Address: 0048b070
// Address Range: [[0048b070, 0048b1ba]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0048b070(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0048b070(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

{
  bool bVar1;
  float *pfVar2;
  CMatrix3x3f local_5c;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
  CVector3f local_1c;
  
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
    goto switchD_0048b08a_caseD_6;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_5c,orientation_angles);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f333333;
  pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                              (&local_5c,local_28,&local_34);
  local_1c.x = impact_position->x - *pfVar2;
  local_1c.y = impact_position->y - pfVar2[1];
  local_1c.z = impact_position->z - pfVar2[2];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_00483320
              ((CStake *)(_DAT_01c23d4c * 0x260 + 0x1c23d50),&local_1c,orientation_angles,
               surface_normal);
  }
  else {
    core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
              (0x02DC9450,(CDemonActor *)this_ptr,"a-wood?.wav",&local_1c,0.23);
    core_fire_cpp_CStake_init_FUN_004832b0
              ((CStake *)(_DAT_01c23d4c * 0x260 + 0x1c23d50),&local_1c,orientation_angles);
  }
  _DAT_01c23d4c = _DAT_01c23d4c + 1;
  if (0xff < _DAT_01c23d4c) {
    _DAT_01c23d4c = 0;
  }
  if (_DAT_01c23d48 < 0x100) {
    _DAT_01c23d48 = _DAT_01c23d48 + 1;
    return;
  }
switchD_0048b08a_caseD_6:
  return;
}
