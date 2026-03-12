// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_004135e0
// Address: 004135e0
// Address Range: [[004135e0, 004136a2]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_004135e0(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_004135e0(CBaron *this_ptr)

{
  CVector3f *pCVar3;
  CCharacter *this_ptr_00;
  EDeathState EVar4;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CDemonActor_vtable *pCVar1;
  CVector3f *new_orientation;
  CDemonActor *pCVar2;
  
  if (this_ptr->target_actor != (CDemonActor *)0x0) {
    new_orientation = (CVector3f *)&this_ptr->target_actor->orient;
    pCVar1 = (this_ptr->base).base.base.vtable._ub;
    local_1c.z = -2.0;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr->target_actor,&local_28,&local_1c);
    pCVar2 = this_ptr->target_actor;
    local_34.x = (pCVar2->location).position.x + pCVar3->x;
    local_34.y = (pCVar2->location).position.y + pCVar3->y;
    local_34.z = (pCVar2->location).position.z + pCVar3->z;
    (*pCVar1->setPositionAndOrientation)((CDemonActor *)this_ptr,&local_34,new_orientation);
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->target_actor,g_CCharacterClassInfo.name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (EVar4 == DEATH_STATE_DEAD) {
        core_baron_cpp_CBaron_releaseTarget_FUN_004135a0(this_ptr,this_ptr->target_actor);
        return;
      }
    }
  }
  return;
}
