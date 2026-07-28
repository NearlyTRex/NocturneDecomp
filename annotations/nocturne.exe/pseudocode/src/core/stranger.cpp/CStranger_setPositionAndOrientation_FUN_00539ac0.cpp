// Name: core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_00539ac0
// Address: 00539ac0
// Address Range: [[00539ac0, 00539b04]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_00539ac0(CCharacter *param_1,CVector3f *param_2,int param_3)

#include "nocturne.h"

void core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_00539ac0(CCharacter *param_1,CVector3f *param_2,int param_3)

{
  CVector3f local_14;
  
  local_14.y = *(float *)(param_3 + 4);
  local_14.x = 0.0;
  local_14.z = 0.0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(param_1,param_2,&local_14);
  return;
}
