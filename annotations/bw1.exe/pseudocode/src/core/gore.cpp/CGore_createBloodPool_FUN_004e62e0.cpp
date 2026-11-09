// Name: core_gore.cpp_CGore_createBloodPool_FUN_004e62e0
// Address: 004e62e0
// Address Range: [[004e62e0, 004e630c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CBloodPool *this_ptr_00;
  
  if (blood_type == BLOOD_TYPE_NONE) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodPool_FUN_004e6290(this_ptr);
  core_gore_cpp_CBloodPool_init_FUN_004e5570(this_ptr_00,position,blood_type);
  return;
}
