// Name: core_gore.cpp_CGore_createWallBloodSplat_FUN_004ce980
// Address: 004ce980
// Address Range: [[004ce980, 004ce9b3]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004ce980(CGore *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004ce980(CGore *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)

{
  CBloodSplat *this_ptr_00;
  
  if (blood_type == BLOOD_TYPE_NONE) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004ce900(this_ptr);
  core_gore_cpp_FUN_004cd510(this_ptr_00,position,normal,blood_type);
  return;
}
