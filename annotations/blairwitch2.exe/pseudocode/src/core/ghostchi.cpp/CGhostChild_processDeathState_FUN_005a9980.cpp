// Name: core_ghostchi.cpp_CGhostChild_processDeathState_FUN_005a9980
// Address: 005a9980
// Address Range: [[005a9980, 005a99e7]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processDeathState_FUN_005a9980(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processDeathState_FUN_005a9980(CGhostChild *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  *(uint *)&this_ptr->field_0x2814 = 1;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,10,1);
  if ((*(int *)&this_ptr->field_0x113b8 == 0) && (0.0 < *(float *)&this_ptr->field_0x113c4)) {
    unkafter_basicene_cpp_FUN_005a01a0
              (this_ptr,*(uint *)&this_ptr->field_0x113c4,0,0x400ccccd);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    return;
  }
  return;
}
