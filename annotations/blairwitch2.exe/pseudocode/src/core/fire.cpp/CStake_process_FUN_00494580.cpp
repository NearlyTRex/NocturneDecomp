// Name: core_fire.cpp_CStake_process_FUN_00494580
// Address: 00494580
// Address Range: [[00494580, 004945a1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_process_FUN_00494580(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_process_FUN_00494580(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_005b22f0(&this_ptr->physics_box,g_CGamePtr->delta_time_float)
  ;
  return;
}
