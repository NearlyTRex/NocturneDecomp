// Name: core_morph.cpp_FUN_0052b470
// Address: 0052b470
// Address Range: [[0052b470, 0052b4a9]]
// Convention: __cdecl
// Signature: void core_morph.cpp_FUN_0052b470(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052b470(void)

{
  CMorphModel *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = (CMorphModel *)(in_stack_00000004 + in_stack_00000008 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_FUN_0052a8d0(this_ptr);
  return;
}
