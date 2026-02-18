// Name: core_fire.cpp_CLightningBolt_process_FUN_004c56e0
// Address: 004c56e0
// Address Range: [[004c56e0, 004c5717]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt *this_ptr)

{
  if ((0.0 < this_ptr->lifetime) &&
     (this_ptr->lifetime = this_ptr->lifetime - g_CGamePtr->delta_time_float,
     this_ptr->lifetime < 0.0)) {
    this_ptr->lifetime = 0.0;
    return;
  }
  return;
}
