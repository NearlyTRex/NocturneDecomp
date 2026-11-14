// Name: core_minecar.cpp_CMineCar_setup_FUN_00510e00
// Address: 00510e00
// Address Range: [[00510e00, 00510e1b]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMineCar_setup_FUN_00510e00(CMineCar *this_ptr)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMineCar_setup_FUN_00510e00(CMineCar *this_ptr)

{
  int in_stack_00000008;
  
  core_platfrm_cpp_CPlatform_setup_FUN_005395d0(&this_ptr->base);
  *(uint *)(in_stack_00000008 + 0x728) = 0;
  return;
}
