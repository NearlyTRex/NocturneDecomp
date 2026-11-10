// Name: core_baron.cpp_CBaron_attachToOwner_FUN_0040fef0
// Address: 0040fef0
// Address Range: [[0040fef0, 0041003b]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(CBaron *this_ptr,CDemonActor *target)

{
  CDemonActor *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1028 [1012];
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  if ((((target != (CDemonActor *)0x0) && (target != this_ptr->target_actor)) &&
      (this_ptr->target_actor == (CDemonActor *)0x0)) &&
     ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(target,g_CCharacterClassInfo.name_hash),
      iVar2 == 0 || (iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2), iVar2 < 1)))) {
    this_ptr->target_actor = target;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0xc0000000;
    core_actor_cpp_FUN_00408cf0(this_ptr->target_actor,&stack0xffffffb4);
    local_40 = local_34;
    (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    pCVar1 = this_ptr->target_actor;
    local_1c = *(float *)&pCVar1->field_0x20 + local_40;
    local_18 = *(float *)&pCVar1->field_0x24 + local_3c;
    local_14 = *(float *)&pCVar1->field_0x28 + local_38;
    local_28 = local_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(float *)&this_ptr->field_0x20 = local_28;
    *(uint *)&this_ptr->field_0x24 = local_24;
    *(uint *)&this_ptr->field_0x28 = local_20;
    pCVar1 = this_ptr->target_actor;
    if ((UOrientationVector *)&this_ptr->field_0x30 != &pCVar1->orient) {
      *(float *)&this_ptr->field_0x30 = (pCVar1->orient).vec.x;
      *(float *)&this_ptr->field_0x34 = (pCVar1->orient).vec.y;
      *(float *)&this_ptr->field_0x38 = (pCVar1->orient).vec.z;
    }
    memset(&this_ptr->field_0x10a68,0,0x34);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,6,1);
    this_ptr->summoned = 1;
    this_ptr->shell_visible = 0;
    return;
  }
  return;
}
