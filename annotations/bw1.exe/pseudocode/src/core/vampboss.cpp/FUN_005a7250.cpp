// Name: core_vampboss.cpp_FUN_005a7250
// Address: 005a7250
// Address Range: [[005a7250, 005a7284]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_005a7250(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_005a7250(CVampireBoss *this_ptr)

{
  *(uint *)&this_ptr->field_0xbe79c = 1;
  *(uint *)&this_ptr->field_0xbf3e0 = 1;
  *(uint *)&this_ptr->field_0xbf3d0 = 0x40000000;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"voicubat.wav");
  return;
}
