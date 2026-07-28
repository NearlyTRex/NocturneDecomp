// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0
// Address: 00410bf0
// Address Range: [[00410bf0, 00410cb2]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(CBaron *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float *pfVar2;
  CCharacter *this_ptr_00;
  int iVar3;
  CVector3f *new_orientation;
  float local_34;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (this_ptr->target_actor != (CDemonActor *)0x0) {
    new_orientation = (CVector3f *)&this_ptr->target_actor->orient;
    pCVar1 = (this_ptr->base).base.base.vtable._ub;
    local_14 = 0xc0000000;
    local_1c = 0;
    local_18 = 0;
    pfVar2 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (this_ptr->target_actor,&stack0xffffffd8,&local_1c);
    local_34 = (this_ptr->target_actor->location).position.x + *pfVar2;
    (*pCVar1->setPositionAndOrientation)
              ((CDemonActor *)this_ptr,(CVector3f *)&local_34,new_orientation);
    local_34 = 5.973786e-39;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (this_ptr->target_actor,g_CCharacterActorType_00765a60.name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      iVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_00);
      if (iVar3 == 2) {
        core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(this_ptr,this_ptr->target_actor);
        return;
      }
    }
  }
  return;
}
