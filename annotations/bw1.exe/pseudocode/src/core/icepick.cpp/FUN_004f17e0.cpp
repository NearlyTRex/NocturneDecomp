// Name: core_icepick.cpp_FUN_004f17e0
// Address: 004f17e0
// Address Range: [[004f17e0, 004f1974]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_FUN_004f17e0(CIcePick *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_icepick_cpp_FUN_004f17e0(CIcePick *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1048 [1015];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  
  bVar3 = 0;
  this_ptr->pending_pickup_target = (CDemonActor *)0x0;
  local_24 = 4.0;
  local_48 = 0x3f800000;
  local_40 = 0x40000000;
  local_44 = 0;
  core_actor_cpp_FUN_00408b40(this_ptr,&stack0xffffffb8);
  local_20 = 0;
  local_1c = 0;
  local_30 = local_3c;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  for (; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
    this_ptr_00 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c);
    pCVar1 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
    if (pCVar1 == (CDemonActor *)0x0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (this_ptr_00,g_CTommyGunClassInfo.name_hash);
      if (iVar2 != 0) {
        fStack_60 = (this_ptr_00->location).position.x - local_30;
        fStack_5c = (this_ptr_00->location).position.y - fStack_2c;
        fStack_58 = (this_ptr_00->location).position.z - local_28;
        fStack_54 = fStack_60;
        *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if ((ABS(fStack_50) <= (float)_DAT_005e53c7) &&
           (fStack_18 = fStack_54 * fStack_54 + fStack_4c * fStack_4c, fStack_18 <= local_24)) {
          this_ptr->pending_pickup_target = this_ptr_00;
          local_24 = fStack_18;
        }
      }
    }
    local_1c = local_1c + 4;
  }
  if (this_ptr->pending_pickup_target == (CDemonActor *)0x0) {
    return 0;
  }
  (this_ptr->base).base.base.location.position.x =
       ((this_ptr->pending_pickup_target->location).position.x - local_30) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((this_ptr->pending_pickup_target->location).position.z - local_28) +
       (this_ptr->base).base.base.location.position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,0x13,1);
  return 1;
}
