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
  CCharacter *this_ptr_00;
  EDeathState EVar3;
  byte bVar4;
  float afStackY_1028 [1012];
  CVector3f local_4c;
  float local_40;
  float local_3c [2];
  CVector3f local_34;
  float local_28;
  float local_24 [4];
  float local_14;
  
  bVar4 = 0;
  if ((((target != (CDemonActor *)0x0) && (target != this_ptr->target_actor)) &&
      (this_ptr->target_actor == (CDemonActor *)0x0)) &&
     ((this_ptr_00 = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (target,g_CCharacterClassInfo.name_hash),
      this_ptr_00 == (CCharacter *)0x0 ||
      (EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), (int)EVar3 < 1
      )))) {
    this_ptr->target_actor = target;
    local_4c.x = 0.0;
    local_4c.y = 0.0;
    local_4c.z = -2.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              (this_ptr->target_actor,&local_4c,&local_34);
    local_40 = local_34.x;
    local_3c[(uint)bVar4 * -2] = *(float *)((int)&local_34 + (uint)bVar4 * -8 + 4);
    local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    pCVar2 = this_ptr->target_actor;
    local_24[2] = (pCVar2->location).position.x + local_40;
    local_24[3] = (pCVar2->location).position.y + local_3c[0];
    local_14 = (pCVar2->location).position.z + local_3c[1];
    local_28 = local_24[2];
    local_24[(uint)bVar4 * -2] = local_24[(uint)bVar4 * -2 + 3];
    local_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    (this_ptr->base).base.base.location.position.x = local_28;
    (this_ptr->base).base.base.location.position.y = local_24[0];
    (this_ptr->base).base.base.location.position.z = local_24[1];
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
