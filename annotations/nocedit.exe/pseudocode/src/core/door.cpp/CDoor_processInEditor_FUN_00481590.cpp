// Name: core_door.cpp_CDoor_processInEditor_FUN_00481590
// Address: 00481590
// Address Range: [[00481590, 00481620]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_processInEditor_FUN_00481590(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_processInEditor_FUN_00481590(CDoor *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  if (this_ptr->door_state == 0) {
    pCVar1 = &(this_ptr->base).location;
    if ((CLocation *)&this_ptr->orig_pos != pCVar1) {
      (this_ptr->orig_pos).x = (pCVar1->position).x;
      (this_ptr->orig_pos).y = (this_ptr->base).location.position.y;
      (this_ptr->orig_pos).z = (this_ptr->base).location.position.z;
    }
    pUVar2 = &(this_ptr->base).orient;
    if (&this_ptr->orig_orient != (CVector3f *)pUVar2) {
      (this_ptr->orig_orient).x = (pUVar2->vec).x;
      (this_ptr->orig_orient).y = (this_ptr->base).orient.vec.y;
      (this_ptr->orig_orient).z = (this_ptr->base).orient.vec.z;
    }
  }
  if (this_ptr->door_state != 0) {
    if (this_ptr->door_state == 2) {
      this_ptr->param = this_ptr->max_param;
      return;
    }
    this_ptr->param = 0.0;
    this_ptr->door_state = 0;
    return;
  }
  this_ptr->param = 0.0;
  return;
}
