// Name: core_morph.cpp_FUN_0052b430
// Address: 0052b430
// Address Range: [[0052b430, 0052b464]]
// Convention: __cdecl
// Signature: void core_morph.cpp_FUN_0052b430(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052b430(void)

{
  CMorphModel *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = (CMorphModel *)(in_stack_00000004 + in_stack_00000008 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_FUN_0052a870(this_ptr);
  return;
}
