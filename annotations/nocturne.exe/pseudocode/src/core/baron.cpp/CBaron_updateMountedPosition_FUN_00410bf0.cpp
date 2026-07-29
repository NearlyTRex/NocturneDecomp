// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0
// Address: 00410bf0
// Address Range: [[00410bf0, 00410cb2]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(CBaron *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  CCharacter *this_ptr_00;
  EDeathState EVar4;
  CVector3f *new_orientation;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (this_ptr->target_actor != (CDemonActor *)0x0) {
    new_orientation = (CVector3f *)&this_ptr->target_actor->orient;
    pCVar1 = (this_ptr->base).base.base.vtable._ub;
    local_1c.z = -2.0;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       (this_ptr->target_actor,&local_28,&local_1c);
    pCVar2 = this_ptr->target_actor;
    local_34.x = (pCVar2->location).position.x + pCVar3->x;
    local_34.y = (pCVar2->location).position.y + pCVar3->y;
    local_34.z = (pCVar2->location).position.z + pCVar3->z;
    (*pCVar1->setPositionAndOrientation)((CDemonActor *)this_ptr,&local_34,new_orientation);
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (this_ptr->target_actor,g_CCharacterActorType_00765a60.name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (EVar4 == DEATH_STATE_DEAD) {
        core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(this_ptr,this_ptr->target_actor);
        return;
      }
    }
  }
  return;
}
