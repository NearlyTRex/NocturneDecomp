// Name: core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0
// Address: 004c7bb0
// Address Range: [[004c7bb0, 004c7cfa]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0 (CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles, CVector3f *surface_normal,int material_type)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
          (CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,
          CVector3f *surface_normal,int material_type)

{
  bool bVar1;
  CVector3f *pCVar2;
  CVector3f *in_stack_ffffffa4;
  CVector3f *in_stack_ffffffa8;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar1 = false;
  switch(material_type) {
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
    goto switchD_004c7bca_caseD_6;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,orientation_angles);
  local_34.x = 0.0;
  local_34.y = 0.0;
  local_34.z = 0.7;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffffa4,&local_28,&local_34);
  local_1c.x = impact_position->x - pCVar2->x;
  local_1c.y = impact_position->y - pCVar2->y;
  local_1c.z = impact_position->z - pCVar2->z;
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_004bfe90
              (g_StakePool + g_StakeAllocIndex,(float)&local_1c,orientation_angles,surface_normal,
               in_stack_ffffffa4,in_stack_ffffffa8);
  }
  else {
    core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
              (g_CSoundPtr,(CDemonActor *)this_ptr,"a-wood?.wav",&local_1c,0.23);
    core_fire_cpp_CStake_init_FUN_004bfe20
              (g_StakePool + g_StakeAllocIndex,&local_1c,orientation_angles);
  }
  g_StakeAllocIndex = g_StakeAllocIndex + 1;
  if (0xff < g_StakeAllocIndex) {
    g_StakeAllocIndex = 0;
  }
  if (g_StakeActiveCount < 0x100) {
    g_StakeActiveCount = g_StakeActiveCount + 1;
    return;
  }
switchD_004c7bca_caseD_6:
  return;
}
