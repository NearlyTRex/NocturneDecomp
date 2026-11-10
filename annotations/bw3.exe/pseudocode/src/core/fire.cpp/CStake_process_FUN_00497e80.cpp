// Name: core_fire.cpp_CStake_process_FUN_00497e80
// Address: 00497e80
// Address Range: [[00497e80, 00497ea1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_process_FUN_00497e80(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_process_FUN_00497e80(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_0041b470(&this_ptr->physics_box,g_CGamePtr->delta_time_float)
  ;
  return;
}
