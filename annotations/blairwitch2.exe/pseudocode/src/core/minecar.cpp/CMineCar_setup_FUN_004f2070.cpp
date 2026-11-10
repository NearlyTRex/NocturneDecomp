// Name: core_minecar.cpp_CMineCar_setup_FUN_004f2070
// Address: 004f2070
// Address Range: [[004f2070, 004f208b]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMineCar_setup_FUN_004f2070(CMineCar *this_ptr)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMineCar_setup_FUN_004f2070(CMineCar *this_ptr)

{
  int in_stack_00000008;
  
  core_platfrm_cpp_CPlatform_setup_FUN_00518280(&this_ptr->base);
  *(uint *)(in_stack_00000008 + 0x884) = 0;
  return;
}
