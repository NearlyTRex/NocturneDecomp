// Name: core_gore.cpp_CGore_createBloodPool_FUN_004ede30
// Address: 004ede30
// Address Range: [[004ede30, 004ede5c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004ede30(CGore *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004ede30(CGore *this_ptr,CVector3f *position,int blood_type)

{
  CBloodPool *this_ptr_00;
  
  if (blood_type == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodPool_FUN_004edde0(this_ptr);
  core_gore_cpp_CBloodPool_init_FUN_004ed0d0(this_ptr_00,position,blood_type);
  return;
}
