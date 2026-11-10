// Name: core_ghostchi.cpp_CGhostChild_processSleepState_FUN_005a9770
// Address: 005a9770
// Address Range: [[005a9770, 005a988c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processSleepState_FUN_005a9770(CGhostChild *this_ptr,float delta_time)

{
  uint uVar1;
  float fVar2;
  
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x17c))(this_ptr);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,4,1);
  uVar1 = *(uint *)&this_ptr->field_0x11858;
  if (uVar1 == 0) {
    *(uint *)&this_ptr->field_0x2814 = 1;
    unkafter_basicene_cpp_FUN_005a01a0
              (this_ptr,*(uint *)&this_ptr->field_0x113c4,0,0x3f000000);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    *(uint *)&this_ptr->field_0x11858 = 1;
    *(uint *)&this_ptr->field_0x11864 = *(uint *)&this_ptr->field_0x11860;
    return;
  }
  if (uVar1 < 2) {
    fVar2 = *(float *)&this_ptr->field_0x11864 - delta_time;
    *(uint *)&this_ptr->field_0x2814 = 1;
    *(float *)&this_ptr->field_0x11864 = fVar2;
    if (0.0 < fVar2) {
      return;
    }
    *(uint *)&this_ptr->field_0x11864 = 0;
    unkafter_basicene_cpp_FUN_005a01a0
              (this_ptr,*(uint *)&this_ptr->field_0x113c4,0x3f800000,0x3f800000);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    *(uint *)&this_ptr->field_0x11858 = 2;
    return;
  }
  if (uVar1 == 2) {
    *(uint *)&this_ptr->field_0x2814 = 0;
    unkaddr_0059d350_cpp_FUN_0059dcb0(&this_ptr->field_0x10af8,0);
    unkaddr_0059d350_cpp_FUN_0059d880(&this_ptr->field_0x10af8,"SleepComplete");
    *(uint *)&this_ptr->field_0x11858 = 3;
    return;
  }
  return;
}
