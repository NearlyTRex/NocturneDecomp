// Name: core_stranger.cpp_CStranger_FUN_005bfb10
// Address: 005bfb10
// Address Range: [[005bfb10, 005bfb54]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bfb10(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005bfb10(CStranger *this_ptr)

{
  CVector3f *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_14;
  
  local_14.y = *(float *)(in_stack_0000000c + 4);
  local_14.x = 0.0;
  local_14.z = 0.0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
            ((CCharacter *)this_ptr,in_stack_00000008,&local_14);
  return;
}
