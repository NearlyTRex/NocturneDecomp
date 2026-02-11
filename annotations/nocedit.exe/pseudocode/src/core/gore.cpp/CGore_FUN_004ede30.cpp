// Name: core_gore.cpp_CGore_FUN_004ede30
// Address: 004ede30
// Address Range: [[004ede30, 004ede5c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ede30(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ede30(CGore *this_ptr)

{
  CBloodPool *this_ptr_00;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_FUN_004edde0(this_ptr);
  core_gore_cpp_CBloodPool_FUN_004ed0d0(this_ptr_00);
  return;
}
