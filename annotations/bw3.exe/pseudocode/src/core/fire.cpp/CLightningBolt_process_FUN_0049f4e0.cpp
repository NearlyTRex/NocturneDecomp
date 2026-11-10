// Name: core_fire.cpp_CLightningBolt_process_FUN_0049f4e0
// Address: 0049f4e0
// Address Range: [[0049f4e0, 0049f517]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_process_FUN_0049f4e0(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_process_FUN_0049f4e0(CLightningBolt *this_ptr)

{
  if ((0.0 < this_ptr->lifetime) &&
     (this_ptr->lifetime = this_ptr->lifetime - g_CGamePtr->delta_time_float,
     this_ptr->lifetime < 0.0)) {
    this_ptr->lifetime = 0.0;
    return;
  }
  return;
}
