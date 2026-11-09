// Name: core_fire.cpp_FUN_004b5bc0
// Address: 004b5bc0
// Address Range: [[004b5bc0, 004b5d46]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b5bc0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b5bc0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

{
  bool bVar1;
  byte bVar2;
  float afStackY_1034 [1003];
  CMatrix3x3f local_74 [40];
  float local_4c;
  float afStack_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [3];
  byte local_1c [8];
  float fStack_14;
  
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
    goto switchD_004b5bd9_caseD_6;
  }
  core_dirmat_cpp_FUN_0045f3e0(local_74,orientation_angles);
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  local_28[2] = 0.7;
  core_dirmat_cpp_FUN_0045f690(local_74,afStack_48 + 8);
  local_34 = local_4c;
  afStack_48[(uint)bVar2 * -2 + 6] = afStack_48[(uint)bVar2 * -2];
  afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  afStack_48[2] = *(float *)impact_position - local_34;
  afStack_48[3] = *(float *)&impact_position->field_0x4 - local_30;
  local_38 = *(float *)&impact_position->field_0x8 - local_2c;
  local_1c._0_4_ = *(float *)impact_position - local_34;
  *(float *)(local_1c + (uint)bVar2 * -8 + 4) = afStack_48[(uint)bVar2 * -2 + 3];
  *(float *)(local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_004acb60
              (g_StakePool + _DAT_01c726ac,(CVector3f *)local_1c,orientation_angles,surface_normal);
  }
  else {
    core_sound_cpp_FUN_0057d940
              (0x02C82A60,(CDemonActor *)this_ptr,"a-wood?.wav",(CVector3f *)local_1c,0.23
              );
    core_fire_cpp_CStake_init_FUN_004acaf0
              (g_StakePool + _DAT_01c726ac,(CVector3f *)local_1c,orientation_angles);
  }
  _DAT_01c726ac = _DAT_01c726ac + 1;
  if (0xff < _DAT_01c726ac) {
    _DAT_01c726ac = 0;
  }
  if (_DAT_01c726a8 < 0x100) {
    _DAT_01c726a8 = _DAT_01c726a8 + 1;
    return;
  }
switchD_004b5bd9_caseD_6:
  return;
}
