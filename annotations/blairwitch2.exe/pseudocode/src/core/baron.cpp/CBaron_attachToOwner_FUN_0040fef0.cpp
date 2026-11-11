// Name: core_baron.cpp_CBaron_attachToOwner_FUN_0040fef0
// Address: 0040fef0
// Address Range: [[0040fef0, 0041003b]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(CBaron *this_ptr,CDemonActor *target)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1028 [1012];
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  if ((((target != (CDemonActor *)0x0) && (target != this_ptr->target_actor)) &&
      (this_ptr->target_actor == (CDemonActor *)0x0)) &&
     ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(target,g_CCharacterClassInfo.name_hash),
      iVar3 == 0 || (iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar3 < 1)))) {
    this_ptr->target_actor = target;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0xc0000000;
    core_actor_cpp_FUN_00408cf0(this_ptr->target_actor,&stack0xffffffb4);
    local_40 = local_34;
    (&stack0xffffffc4)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    pCVar2 = this_ptr->target_actor;
    local_1c = (pCVar2->location).position.x + local_40;
    local_18 = (pCVar2->location).position.y + local_3c;
    local_14 = (pCVar2->location).position.z + local_38;
    local_28 = local_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (this_ptr->base).base.base.location.position.x = local_28;
    (this_ptr->base).base.base.location.position.y = local_24;
    (this_ptr->base).base.base.location.position.z = local_20;
    pCVar2 = this_ptr->target_actor;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (pUVar1 != &pCVar2->orient) {
      (pUVar1->vec).x = (pCVar2->orient).vec.x;
      (this_ptr->base).base.base.orient.vec.y = (pCVar2->orient).vec.y;
      (this_ptr->base).base.base.orient.vec.z = (pCVar2->orient).vec.z;
    }
    memset(&(this_ptr->base).player_input,0,0x34);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,6,1);
    this_ptr->summoned = 1;
    this_ptr->shell_visible = 0;
    return;
  }
  return;
}
