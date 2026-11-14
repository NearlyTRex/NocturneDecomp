// Name: core_gore.cpp_CGore_createBloodPool_FUN_004cec40
// Address: 004cec40
// Address Range: [[004cec40, 004cec6c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004cec40(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004cec40(CGore *this_ptr,CVector3f *position,EBloodType blood_type)

{
  CBloodPool *this_ptr_00;
  
  if (blood_type == BLOOD_TYPE_NONE) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodPool_FUN_004cebf0(this_ptr);
  core_gore_cpp_CBloodPool_init_FUN_004cdff0(this_ptr_00,position,blood_type);
  return;
}
