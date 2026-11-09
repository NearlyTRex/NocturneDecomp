// Name: core_mobster.cpp_FUN_004fdd50
// Address: 004fdd50
// Address Range: [[004fdd50, 004fde4d]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_004fdd50(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_FUN_004fdd50(CMobster *this_ptr)

{
  float fVar1;
  byte bVar2;
  uint auStackY_1024 [1012];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  bVar2 = 0;
  if (*(int *)&this_ptr->field_0x10b20 == 0) {
    local_20 = 0xc0166666;
    local_1c = 0xbfcccccd;
    local_24 = 0x40866666;
    if (&stack0xffffffd0 != &stack0xffffffdc) {
      local_2c = 0xc0166666;
      local_28 = 0xbfcccccd;
      local_30 = 0x40866666;
    }
    fVar1 = *(float *)(*(int *)&this_ptr->field_0x10b1c + 0x34) + _DAT_005ded6d;
  }
  else {
    local_44 = 0xc0166666;
    local_40 = 0xbfcccccd;
    local_48 = 0xc0866666;
    if (&stack0xffffffd0 != &stack0xffffffb8) {
      local_2c = 0xc0166666;
      local_28 = 0xbfcccccd;
      local_30 = 0xc0866666;
    }
    fVar1 = *(float *)(*(int *)&this_ptr->field_0x10b1c + 0x34) + _DAT_005ded71;
  }
  *(float *)&this_ptr->field_0x34 = fVar1;
  core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x10b1c,&stack0xffffffd0);
  local_3c = local_18;
  (&stack0xffffffc8)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)&this_ptr->field_0x20 = local_3c;
  *(uint *)&this_ptr->field_0x24 = local_38;
  *(uint *)&this_ptr->field_0x28 = local_34;
  *(uint *)&this_ptr->field_0x10b1c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,8,1);
  return;
}
