// Name: core_fire.cpp_FUN_0049ab90
// Address: 0049ab90
// Address Range: [[0049ab90, 0049abc7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049ab90(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_0049ab90(CLightningBolt *this_ptr)

{
  if ((0.0 < *(float *)&this_ptr->field_0x14) &&
     (*(float *)&this_ptr->field_0x14 =
           *(float *)&this_ptr->field_0x14 - *(float *)&g_CGamePtr->field_0x284,
     *(float *)&this_ptr->field_0x14 < 0.0)) {
    *(uint *)&this_ptr->field_0x14 = 0;
    return;
  }
  return;
}
