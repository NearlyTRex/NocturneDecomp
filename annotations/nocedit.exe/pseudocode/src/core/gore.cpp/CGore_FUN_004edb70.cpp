// Name: core_gore.cpp_CGore_FUN_004edb70
// Address: 004edb70
// Address Range: [[004edb70, 004edba3]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004edb70(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004edb70(CGore *this_ptr)

{
  CBloodSplat *this_ptr_00;
  int in_stack_00000010;
  
  if (in_stack_00000010 == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_FUN_004edaf0(this_ptr);
  core_gore_cpp_CBloodSplat_FUN_004ec390(this_ptr_00);
  return;
}
