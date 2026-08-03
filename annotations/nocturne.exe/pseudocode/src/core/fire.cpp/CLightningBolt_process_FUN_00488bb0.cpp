// Name: core_fire.cpp_CLightningBolt_process_FUN_00488bb0
// Address: 00488bb0
// Address Range: [[00488bb0, 00488be7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_process_FUN_00488bb0(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_process_FUN_00488bb0(CLightningBolt *this_ptr)

{
  if ((0.0 < this_ptr->lifetime) &&
     (this_ptr->lifetime = this_ptr->lifetime - g_CGame_PTR_005b9354->delta_time_float,
     this_ptr->lifetime < 0.0)) {
    this_ptr->lifetime = 0.0;
    return;
  }
  return;
}
