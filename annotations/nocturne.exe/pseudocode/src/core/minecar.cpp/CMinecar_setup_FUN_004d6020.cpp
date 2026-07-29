// Name: core_minecar.cpp_CMinecar_setup_FUN_004d6020
// Address: 004d6020
// Address Range: [[004d6020, 004d603b]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMinecar_setup_FUN_004d6020(CMineCar *this_ptr)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMinecar_setup_FUN_004d6020(CMineCar *this_ptr)

{
  core_platfrm_cpp_FUN_004f5f60(&this_ptr->base);
  (this_ptr->base).rendered_in_background = 0;
  return;
}
