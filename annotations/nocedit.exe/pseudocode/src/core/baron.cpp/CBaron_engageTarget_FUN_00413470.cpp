// Name: core_baron.cpp_CBaron_engageTarget_FUN_00413470
// Address: 00413470
// Address Range: [[00413470, 0041359b]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_engageTarget_FUN_00413470(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_engageTarget_FUN_00413470(CBaron *this_ptr,CDemonActor *target)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CCharacter *this_ptr_00;
  CVector3f *pCVar3;
  EDeathState EVar4;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  
  if ((((target != (CDemonActor *)0x0) && (target != this_ptr->target_actor)) &&
      (this_ptr->target_actor == (CDemonActor *)0x0)) &&
     ((this_ptr_00 = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (target,g_CCharacterClassInfo.name_hash),
      this_ptr_00 == (CCharacter *)0x0 ||
      (EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), (int)EVar4 < 1
      )))) {
    this_ptr->target_actor = target;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    local_1c.z = -2.0;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr->target_actor,&local_34,&local_1c);
    pCVar2 = this_ptr->target_actor;
    fVar1 = (pCVar2->location).position.y;
    fVar2 = pCVar3->y;
    fVar3 = (pCVar2->location).position.z;
    fVar4 = pCVar3->z;
    (this_ptr->base).base.base.location.position.x = (pCVar2->location).position.x + pCVar3->x;
    (this_ptr->base).base.base.location.position.y = fVar1 + fVar2;
    (this_ptr->base).base.base.location.position.z = fVar3 + fVar4;
    pCVar5 = this_ptr->target_actor;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (pUVar1 != &pCVar5->orient) {
      (pUVar1->vec).x = (pCVar5->orient).vec.x;
      (this_ptr->base).base.base.orient.vec.y = (pCVar5->orient).vec.y;
      (this_ptr->base).base.base.orient.vec.z = (pCVar5->orient).vec.z;
    }
    memset(&(this_ptr->base).player_control,0,0x2c);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,6,1);
    this_ptr->summoned = 1;
    this_ptr->shell_visible = 0;
    return;
  }
  return;
}
