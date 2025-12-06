// Name: core_fire.cpp_CLightningBolt_process_FUN_004c56e0
// Address: 004c56e0
// Address Range: [[004c56e0, 004c5717]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt *this_ptr)

{
  if ((0.0 < *(float *)(this_ptr->field0_0x0 + 0x14)) &&
     (*(float *)(this_ptr->field0_0x0 + 0x14) =
           *(float *)(this_ptr->field0_0x0 + 0x14) - g_CGamePtr->delta_time_float,
     *(float *)(this_ptr->field0_0x0 + 0x14) < 0.0)) {
    this_ptr->field0_0x0[0x14] = '\0';
    this_ptr->field0_0x0[0x15] = '\0';
    this_ptr->field0_0x0[0x16] = '\0';
    this_ptr->field0_0x0[0x17] = '\0';
    return;
  }
  return;
}
