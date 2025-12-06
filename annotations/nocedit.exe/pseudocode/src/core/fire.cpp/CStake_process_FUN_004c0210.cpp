// Name: core_fire.cpp_CStake_process_FUN_004c0210
// Address: 004c0210
// Address Range: [[004c0210, 004c0231]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_process_FUN_004c0210(CStake * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_process_FUN_004c0210(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_0041e350(&this_ptr->box,g_CGamePtr->delta_time_float);
  return;
}
