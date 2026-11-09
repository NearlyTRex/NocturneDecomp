// Name: core_motion.cpp_CMotionController_startTransition_FUN_005036e0
// Address: 005036e0
// Address Range: [[005036e0, 00503796]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_005036e0(CMotionController *this_ptr,SMotionTransition *transition)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_005036e0(CMotionController *this_ptr,SMotionTransition *transition)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float local_18;
  
  local_18 = *(float *)(transition + 0xc);
  if (local_18 == _DAT_005dfc94) {
    iVar3 = (**(code **)(*(int *)&this_ptr->field_0x50 + 4))
                      (this_ptr,*(uint *)&this_ptr->field_0x4,
                       *(uint *)&this_ptr->field_0x8,*(uint *)(transition + 8));
    local_18 = (float)iVar3;
  }
  if (*(float *)(transition + 0x10) <= 0.0) {
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
              (this_ptr,*(int *)(transition + 8),local_18);
    if (*(int *)(transition + 0x14) != 0) {
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
      *(uint *)&this_ptr->field_0x28 = *(uint *)(iVar3 + 0x24);
      return;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x18 = *(uint *)(transition + 8);
    *(float *)&this_ptr->field_0x1c = local_18;
    uVar2 = *(uint *)(transition + 4);
    *(uint *)&this_ptr->field_0x14 = 0x3a83126f;
    *(uint *)&this_ptr->field_0xc = uVar2;
    fVar1 = *(float *)(transition + 0x10);
    *(uint *)&this_ptr->field_0x20 = 0;
    *(float *)&this_ptr->field_0x10 = 1.0 / fVar1;
    *(uint *)&this_ptr->field_0x24 = *(uint *)(transition + 0x14);
  }
  return;
}
