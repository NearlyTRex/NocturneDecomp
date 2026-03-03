// Name: core_stranger.cpp_CStranger_getThrowDirection_FUN_005c51c0
// Address: 005c51c0
// Address Range: [[005c51c0, 005c5225]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_stranger_cpp_CStranger_getThrowDirection_FUN_005c51c0(CStranger *this_ptr,CVector3f *out_direction)

#include "nocturne.h"

CVector3f * __cdecl core_stranger_cpp_CStranger_getThrowDirection_FUN_005c51c0(CStranger *this_ptr,CVector3f *out_direction)

{
  CMatrix3x3f local_48;
  CVector3f local_20;
  CVector3f local_14;
  
  local_20.x = (this_ptr->right_arm_aim).target_pitch;
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_48,&local_20);
  local_14.z = this_ptr->aim_speed_factor;
  local_14.x = 0.0;
  local_14.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_48,out_direction,&local_14);
  return out_direction;
}
