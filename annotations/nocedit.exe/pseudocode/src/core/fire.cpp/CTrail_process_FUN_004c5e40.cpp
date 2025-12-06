// Name: core_fire.cpp_CTrail_process_FUN_004c5e40
// Address: 004c5e40
// Address Range: [[004c5e40, 004c5e8a]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_process_FUN_004c5e40(CTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_process_FUN_004c5e40(CTrail *this_ptr)

{
  if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x10)) {
    *(float *)(this_ptr->field0_0x0 + 0x10) =
         *(float *)(this_ptr->field0_0x0 + 0x10) - g_CGamePtr->delta_time_float;
    if (0.0 <= *(float *)(this_ptr->field0_0x0 + 0x10)) {
      *(float *)(this_ptr->field0_0x0 + 0x14) =
           (1.0 - (*(float *)(this_ptr->field0_0x0 + 0x18) - *(float *)(this_ptr->field0_0x0 + 0x10)
                  ) / *(float *)(this_ptr->field0_0x0 + 0x18)) *
           *(float *)(this_ptr->field0_0x0 + 0x1c);
      return;
    }
    this_ptr->field0_0x0[0x10] = '\0';
    this_ptr->field0_0x0[0x11] = '\0';
    this_ptr->field0_0x0[0x12] = '\0';
    this_ptr->field0_0x0[0x13] = '\0';
  }
  return;
}
