// Name: core_minecar.cpp_CMinecar_setup_FUN_00520e90
// Address: 00520e90
// Address Range: [[00520e90, 00520eab]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMinecar_setup_FUN_00520e90(CMineCar *this_ptr)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMinecar_setup_FUN_00520e90(CMineCar *this_ptr)

{
  core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(&this_ptr->base);
  this_ptr->spark_timer = 0.0;
  return;
}
