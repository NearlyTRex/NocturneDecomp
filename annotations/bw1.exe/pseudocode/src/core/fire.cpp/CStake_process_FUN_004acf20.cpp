// Name: core_fire.cpp_CStake_process_FUN_004acf20
// Address: 004acf20
// Address Range: [[004acf20, 004acf41]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_process_FUN_004acf20(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_process_FUN_004acf20(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_0041e130(&this_ptr->physics_box,g_CGamePtr->delta_time_float)
  ;
  return;
}
