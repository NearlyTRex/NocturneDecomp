// Name: core_morph.cpp_FUN_0052b370
// Address: 0052b370
// Address Range: [[0052b370, 0052b3c5]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052b370(void)

#include "nocturne.h"

/* Signature: byte core_morph.cpp_FUN_0052b370(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6, uint
   param_7, uint param_8) */

void __cdecl core_morph_cpp_FUN_0052b370(void)

{
  CMorphModel *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = (CMorphModel *)(in_stack_00000004 + in_stack_00000008 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580(this_ptr);
  return;
}
