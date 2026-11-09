// Name: core_vampboss.cpp_FUN_00583650
// Address: 00583650
// Address Range: [[00583650, 00583692]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_00583650(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_00583650(CVampireBoss *this_ptr)

{
  *(uint *)&this_ptr->field_0xc2f3c = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            ((CMotionController *)&this_ptr->field_0x2b4,"float",0.0);
  *(uint *)&this_ptr->field_0xc3b98 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"voicuhuman.wav");
  return;
}
