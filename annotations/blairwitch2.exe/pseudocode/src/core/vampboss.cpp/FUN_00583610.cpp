// Name: core_vampboss.cpp_FUN_00583610
// Address: 00583610
// Address Range: [[00583610, 00583644]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_00583610(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_00583610(CVampireBoss *this_ptr)

{
  *(uint *)&this_ptr->field_0xc2f3c = 1;
  *(uint *)&this_ptr->field_0xc3b80 = 1;
  *(uint *)&this_ptr->field_0xc3b70 = 0x40000000;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"voicubat.wav");
  return;
}
