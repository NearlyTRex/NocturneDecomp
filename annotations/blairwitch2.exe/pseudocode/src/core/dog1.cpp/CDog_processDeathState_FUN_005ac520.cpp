// Name: core_dog1.cpp_CDog_processDeathState_FUN_005ac520
// Address: 005ac520
// Address Range: [[005ac520, 005ac596]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_processDeathState_FUN_005ac520(CDog *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_dog1_cpp_CDog_processDeathState_FUN_005ac520(CDog *this_ptr,float delta_time)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,5,1);
  if ((*(int *)&this_ptr->field_0x10a28 != 0) && (*(int *)&this_ptr->field_0x1186c == 0)) {
    iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if (*(int *)(iVar1 + 0x24) == 6) {
      *(uint *)&this_ptr->field_0x1186c = 1;
      core_charactr_cpp_FUN_0042b550(this_ptr,1,0x3f800000,0,0x40a00000,0x3f800000,0,0);
      return;
    }
  }
  return;
}
