// Name: core_gore.cpp_CGore_createWallBloodSplat_FUN_004c9810
// Address: 004c9810
// Address Range: [[004c9810, 004c9843]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004c9810(CGore *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004c9810(CGore *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

{
  CBloodSplat *this_ptr_00;
  
  if (blood_type == BLOOD_TYPE_NONE) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004c9790(this_ptr);
  core_gore_cpp_CBloodSplat_initWallSplat_FUN_004c7ea0(this_ptr_00,position,normal,blood_type);
  return;
}
