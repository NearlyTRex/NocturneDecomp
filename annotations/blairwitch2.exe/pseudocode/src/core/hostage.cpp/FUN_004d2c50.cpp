// Name: core_hostage.cpp_FUN_004d2c50
// Address: 004d2c50
// Address Range: [[004d2c50, 004d2d98]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_FUN_004d2c50(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hostage_cpp_FUN_004d2c50(CHostage *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  float afStackY_1020 [1013];
  uint local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  uint local_8;
  
  bVar3 = 0;
  if (*(int *)&this_ptr->field_0x24728 == 0) {
    return 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x2472c - delta_time;
  *(float *)&this_ptr->field_0x2472c = fVar2;
  if ((0.0 < fVar2) && (*(float *)&this_ptr->field_0x304c <= (float)_DAT_005da3a6)) {
    iVar1 = *(int *)&this_ptr->field_0x24728;
    local_2c = *(float *)&this_ptr->field_0x20 - *(float *)(iVar1 + 0x20);
    local_28 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar1 + 0x24);
    local_24 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar1 + 0x28);
    local_20 = local_2c;
    fStack_1c = local_28;
    fStack_18 = local_24;
    core_vecdir_cpp_FUN_005838f0(&stack0xffffffe0);
    local_38 = local_14;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * 0xfffffffe * 4);
    *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    local_8 = core_actor_cpp_FUN_0040d0c0(local_34 - *(float *)&this_ptr->field_0x34);
    *(uint *)&this_ptr->field_0x2578 = local_8;
    if (*(float *)&this_ptr->field_0x2578 < -*(float *)&this_ptr->field_0x2598) {
      *(uint *)&this_ptr->field_0x2578 = *(uint *)&this_ptr->field_0x2598;
    }
    if (*(float *)&this_ptr->field_0x2598 < *(float *)&this_ptr->field_0x2578) {
      *(uint *)&this_ptr->field_0x2578 = *(uint *)&this_ptr->field_0x2598;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,2,1);
    return 1;
  }
  *(uint *)&this_ptr->field_0x24728 = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  return 0;
}
