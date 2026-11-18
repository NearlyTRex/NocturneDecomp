// Name: core_fire.cpp_CFireEffect_createStake_FUN_004a25f0
// Address: 004a25f0
// Address Range: [[004a25f0, 004a2776]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004a25f0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004a25f0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)

{
  bool bVar1;
  byte bVar2;
  float afStackY_1034 [1003];
  CMatrix3x3f CStack_74;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  CVector3f CStack_28;
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
    goto switchD_004a2609_caseD_6;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_74,orientation_angles);
  CStack_28.x = 0.0;
  CStack_28.y = 0.0;
  CStack_28.z = 0.7;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(&CStack_74,&CStack_28,&CStack_4c);
  afStack_3c[2] = CStack_4c.x;
  afStack_3c[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_4c + (uint)bVar2 * -8 + 4);
  afStack_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&CStack_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fStack_40 = impact_position->x - afStack_3c[2];
  afStack_3c[0] = impact_position->y - afStack_3c[3];
  afStack_3c[1] = impact_position->z - fStack_2c;
  CStack_1c.x = fStack_40;
  *(float *)((int)&CStack_1c + (uint)bVar2 * -8 + 4) = afStack_3c[(uint)bVar2 * -2];
  *(float *)((int)&CStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_00497ac0
              (g_StakePool + g_INT_01c8eeac,&CStack_1c,orientation_angles,surface_normal);
  }
  else {
    core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
              (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"a-wood?.wav",&CStack_1c,0.23);
    core_fire_cpp_CStake_init_FUN_00497a50
              (g_StakePool + g_INT_01c8eeac,&CStack_1c,orientation_angles);
  }
  g_INT_01c8eeac = g_INT_01c8eeac + 1;
  if (0xff < g_INT_01c8eeac) {
    g_INT_01c8eeac = 0;
  }
  if (g_INT_01c8eea8 < 0x100) {
    g_INT_01c8eea8 = g_INT_01c8eea8 + 1;
    return;
  }
switchD_004a2609_caseD_6:
  return;
}
