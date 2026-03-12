// Name: core_icepick.cpp_CIcePick_findAndPickupGun_FUN_004f8970
// Address: 004f8970
// Address Range: [[004f8970, 004f8ac6]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004f8970(CIcePick *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004f8970(CIcePick *this_ptr)

{
  float fVar3;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  int iVar4;
  int iVar5;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float fStack_18;
  float fVar1;
  CDemonActor *this_ptr_00;
  float fVar2;
  
  this_ptr->pending_pickup_target = (CDemonActor *)0x0;
  local_1c = 4.0;
  local_28.x = 1.0;
  local_28.y = 0.0;
  local_28.z = 2.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_34,&local_28);
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    this_ptr_00 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
    pCVar3 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
    if (pCVar3 == (CDemonActor *)0x0) {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (this_ptr_00,g_CTommyGunClassInfo.name_hash);
      if (pCVar4 != (CDemonActor *)0x0) {
        fVar1 = (this_ptr_00->location).position.x - local_34.x;
        fVar2 = (this_ptr_00->location).position.z - local_34.z;
        if ((ABS((this_ptr_00->location).position.y - local_34.y) <= (float)2) &&
           (fVar3 = fVar1 * fVar1 + fVar2 * fVar2, fVar3 <= local_1c)) {
          this_ptr->pending_pickup_target = this_ptr_00;
          local_1c = fVar3;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  if (this_ptr->pending_pickup_target == (CDemonActor *)0x0) {
    return 0;
  }
  (this_ptr->base).base.base.location.position.x =
       ((this_ptr->pending_pickup_target->location).position.x - local_34.x) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       ((this_ptr->pending_pickup_target->location).position.z - local_34.z) +
       (this_ptr->base).base.base.location.position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0x13,1);
  return 1;
}
