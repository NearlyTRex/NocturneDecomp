// Name: core_stranger.cpp_CStranger_FUN_005c51c0
// Address: 005c51c0
// Address Range: [[005c51c0, 005c5225]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_stranger_cpp_CStranger_FUN_005c51c0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c51c0(uint param_1,
   uint param_2) */

CVector3f * __cdecl core_stranger_cpp_CStranger_FUN_005c51c0(void)

{
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x3f local_48;
  CVector3f local_20;
  CVector3f local_14;
  
  local_20.x = *(float *)(in_stack_00000004 + 0x1fbf0);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_48,&local_20);
  local_14.z = *(float *)(in_stack_00000004 + 0x1fbe4);
  local_14.x = 0.0;
  local_14.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_48,in_stack_00000008,&local_14);
  return in_stack_00000008;
}
