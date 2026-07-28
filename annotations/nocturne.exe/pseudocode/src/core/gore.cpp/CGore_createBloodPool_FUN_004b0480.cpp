// Name: core_gore.cpp_CGore_createBloodPool_FUN_004b0480
// Address: 004b0480
// Address Range: [[004b0480, 004b04ac]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004b0480(CGore *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004b0480(CGore *this_ptr,CVector3f *position,int blood_type)

{
  CBloodPool *this_ptr_00;
  
  if (blood_type == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodPool_FUN_004b0430(this_ptr);
  core_gore_cpp_CBloodPool_init_FUN_004af730(this_ptr_00,position,blood_type);
  return;
}
