// Name: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004ce950
// Address: 004ce950
// Address Range: [[004ce950, 004ce97c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004ce950(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004ce950(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CBloodSplat *this_ptr_00;
  
  if (blood_type == BLOOD_TYPE_NONE) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004ce900(this_ptr);
  core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004cd450(this_ptr_00,position,blood_type);
  return;
}
