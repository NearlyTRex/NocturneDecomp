// Name: core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_0058a320
// Address: 0058a320
// Address Range: [[0058a320, 0058a354]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_0058a320(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_0058a320(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  CVector3f CStack_18;
  
  CStack_18.y = new_orientation->y;
  CStack_18.x = 0.0;
  CStack_18.z = 0.0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042cbe0
            ((CCharacter *)this_ptr,new_position,&CStack_18);
  return;
}
