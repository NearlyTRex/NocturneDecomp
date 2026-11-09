// Name: core_vampboss.cpp_FUN_005a7290
// Address: 005a7290
// Address Range: [[005a7290, 005a72d2]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_005a7290(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_005a7290(CVampireBoss *this_ptr)

{
  *(uint *)&this_ptr->field_0xbe79c = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            ((CMotionController *)&this_ptr->field_0x158,"float",0.0);
  *(uint *)&this_ptr->field_0xbf3f8 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"voicuhuman.wav");
  return;
}
