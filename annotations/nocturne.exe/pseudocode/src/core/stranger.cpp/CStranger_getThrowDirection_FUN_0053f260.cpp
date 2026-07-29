// Name: core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260
// Address: 0053f260
// Address Range: [[0053f260, 0053f2c5]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(CStranger *this_ptr,CVector3f *out_direction)

#include "nocturne.h"

CVector3f * __cdecl core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(CStranger *this_ptr,CVector3f *out_direction)

{
  CMatrix3x3f local_48;
  CVector3f local_20;
  CVector3f local_14;
  
  local_20.x = (this_ptr->right_arm_aim).target_pitch;
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_48,&local_20);
  local_14.z = this_ptr->aim_speed_factor;
  local_14.x = 0.0;
  local_14.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_48,out_direction,&local_14);
  return out_direction;
}
