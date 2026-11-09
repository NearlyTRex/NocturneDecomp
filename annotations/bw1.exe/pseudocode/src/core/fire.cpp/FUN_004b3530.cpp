// Name: core_fire.cpp_FUN_004b3530
// Address: 004b3530
// Address Range: [[004b3530, 004b3567]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b3530(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004b3530(CLightningBolt *this_ptr)

{
  if ((0.0 < *(float *)&this_ptr->field_0x14) &&
     (*(float *)&this_ptr->field_0x14 =
           *(float *)&this_ptr->field_0x14 - *(float *)&g_CGamePtr->field_0x294,
     *(float *)&this_ptr->field_0x14 < 0.0)) {
    *(uint *)&this_ptr->field_0x14 = 0;
    return;
  }
  return;
}
