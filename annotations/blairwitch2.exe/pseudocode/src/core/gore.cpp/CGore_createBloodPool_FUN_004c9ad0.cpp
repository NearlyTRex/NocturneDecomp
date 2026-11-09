// Name: core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0
// Address: 004c9ad0
// Address Range: [[004c9ad0, 004c9afc]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CBloodPool *this_ptr_00;
  
  if (blood_type == BLOOD_TYPE_NONE) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodPool_FUN_004c9a80(this_ptr);
  core_gore_cpp_CBloodPool_init_FUN_004c8d10(this_ptr_00,position,blood_type);
  return;
}
