// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0
// Address: 00422ec0
// Address Range: [[00422ec0, 00422f36]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  (*(((this_ptr->base).vtable._uc)->_uc).releaseVictim)(this_ptr);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70
            (&this_ptr->base,new_position,new_orientation);
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  this_ptr->closest_distance_threshold = _DAT_005f4084;
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (&this_ptr->cloth_list,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,
             10.0,this_ptr->closest_distance_threshold,&this_ptr->model);
  return;
}
