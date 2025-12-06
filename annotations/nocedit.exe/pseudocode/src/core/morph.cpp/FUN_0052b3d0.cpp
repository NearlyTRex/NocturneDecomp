// Name: core_morph.cpp_FUN_0052b3d0
// Address: 0052b3d0
// Address Range: [[0052b3d0, 0052b425]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b3d0()

#include "nocturne.h"

void core_morph_cpp_FUN_0052b3d0(void)

{
  CMorphModel *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = (CMorphModel *)(in_stack_00000004 + in_stack_00000008 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580(this_ptr);
  return;
}
