// Name: core_fire.cpp_CFireEffect_createStake_FUN_004a25f0
// Address: 004a25f0
// Address Range: [[004a25f0, 004a260f] [004a2615, 004a2702] [004a270a, 004a2776]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004a25f0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004a25f0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

{
  bool bVar1;
  byte bVar2;
  float afStackY_1034 [1003];
  CMatrix3x3f CStack_74;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [3];
  CVector3f CStack_1c;
  
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
    goto LAB_004a26fb;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_74,orientation_angles);
  afStack_28[0] = 0.0;
  afStack_28[1] = 0.0;
  afStack_28[2] = 0.7;
  core_dirmat_cpp_FUN_0045b800(&CStack_74,afStack_48 + 8);
  fStack_34 = fStack_4c;
  afStack_48[(uint)bVar2 * -2 + 6] = afStack_48[(uint)bVar2 * -2];
  afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  afStack_48[2] = impact_position->x - fStack_34;
  afStack_48[3] = impact_position->y - fStack_30;
  fStack_38 = impact_position->z - fStack_2c;
  CStack_1c.x = afStack_48[2];
  *(float *)((int)&CStack_1c + (uint)bVar2 * -8 + 4) = afStack_48[(uint)bVar2 * -2 + 3];
  *(float *)((int)&CStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_00497ac0
              (g_StakePool + _DAT_01c8eeac,&CStack_1c,orientation_angles,surface_normal);
  }
  else {
    core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
              (0x02CF5680,(CDemonActor *)this_ptr,"a-wood?.wav",&CStack_1c,0.23);
    core_fire_cpp_CStake_init_FUN_00497a50
              (g_StakePool + _DAT_01c8eeac,&CStack_1c,orientation_angles);
  }
  _DAT_01c8eeac = _DAT_01c8eeac + 1;
  if (0xff < _DAT_01c8eeac) {
    _DAT_01c8eeac = 0;
  }
  if (_DAT_01c8eea8 < 0x100) {
    _DAT_01c8eea8 = _DAT_01c8eea8 + 1;
    return;
  }
LAB_004a26fb:
  return;
}
