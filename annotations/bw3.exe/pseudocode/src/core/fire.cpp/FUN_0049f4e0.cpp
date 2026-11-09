// Name: core_fire.cpp_FUN_0049f4e0
// Address: 0049f4e0
// Address Range: [[0049f4e0, 0049f517]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049f4e0(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_0049f4e0(CLightningBolt *this_ptr)

{
  if ((0.0 < *(float *)&this_ptr->field_0x14) &&
     (*(float *)&this_ptr->field_0x14 =
           *(float *)&this_ptr->field_0x14 - *(float *)&g_CGamePtr->field_0x314,
     *(float *)&this_ptr->field_0x14 < 0.0)) {
    *(uint *)&this_ptr->field_0x14 = 0;
    return;
  }
  return;
}
