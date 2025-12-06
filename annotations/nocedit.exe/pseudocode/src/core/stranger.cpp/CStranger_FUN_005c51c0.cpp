// Name: core_stranger.cpp_CStranger_FUN_005c51c0
// Address: 005c51c0
// Address Range: [[005c51c0, 005c5225]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c51c0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c51c0(uint param_1,
   uint param_2) */

CVector3f * core_stranger_cpp_CStranger_FUN_005c51c0(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x3f CStack_44;
  CVector3f local_20;
  float local_10;
  float local_c;
  
  local_20.x = *(float *)(in_stack_00000004 + 0x1fbf0);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffb8,&local_20);
  local_10 = 0.0;
  local_c = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            (&CStack_44,in_stack_00000008,(CVector3f *)&local_10);
  return in_stack_00000008;
}
