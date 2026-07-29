// Name: core_baron.cpp_CBaron_attachToOwner_FUN_00410a80
// Address: 00410a80
// Address Range: [[00410a80, 00410bab]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(CBaron *this_ptr,CDemonActor *target)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  CCharacter *this_ptr_00;
  CVector3f *pCVar3;
  EDeathState EVar4;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  
  if ((((target != (CDemonActor *)0x0) && (target != this_ptr->target_actor)) &&
      (this_ptr->target_actor == (CDemonActor *)0x0)) &&
     ((this_ptr_00 = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040d890
                               (target,g_CCharacterActorType_00765a60.name_hash),
      this_ptr_00 == (CCharacter *)0x0 ||
      (EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), (int)EVar4 < 1
      )))) {
    this_ptr->target_actor = target;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    local_1c.z = -2.0;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       (this_ptr->target_actor,&local_34,&local_1c);
    pCVar2 = this_ptr->target_actor;
    local_28 = (pCVar2->location).position.x + pCVar3->x;
    local_24 = (pCVar2->location).position.y + pCVar3->y;
    local_20 = (pCVar2->location).position.z + pCVar3->z;
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
    memset(&(this_ptr->base).player_input,0,0x2c);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,6,1);
    this_ptr->summoned = 1;
    this_ptr->shell_visible = 0;
    return;
  }
  return;
}
