// Name: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190
// Address: 004b0190
// Address Range: [[004b0190, 004b01bc]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190(CGore *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190(CGore *this_ptr,CVector3f *position,int blood_type)

{
  CBloodSplat *this_ptr_00;
  
  if (blood_type == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004b0140(this_ptr);
  core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ae960(this_ptr_00,position,blood_type);
  return;
}
