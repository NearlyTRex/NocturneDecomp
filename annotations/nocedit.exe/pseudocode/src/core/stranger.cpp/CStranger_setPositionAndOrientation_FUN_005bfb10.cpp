// Name: core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_005bfb10
// Address: 005bfb10
// Address Range: [[005bfb10, 005bfb54]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_005bfb10(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_005bfb10(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  CVector3f local_14;
  
  local_14.y = new_orientation->y;
  local_14.x = 0.0;
  local_14.z = 0.0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
            ((CCharacter *)this_ptr,new_position,&local_14);
  return;
}
