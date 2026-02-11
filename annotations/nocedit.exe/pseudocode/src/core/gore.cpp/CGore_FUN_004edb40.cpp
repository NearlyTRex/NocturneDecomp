// Name: core_gore.cpp_CGore_FUN_004edb40
// Address: 004edb40
// Address Range: [[004edb40, 004edb6c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004edb40(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004edb40(CGore *this_ptr)

{
  CBloodSplat *this_ptr_00;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_FUN_004edaf0(this_ptr);
  core_gore_cpp_CBloodSplat_FUN_004ec2f0(this_ptr_00);
  return;
}
