// Name: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00420290
// Address: 00420290
// Address Range: [[00420290, 00420312]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00420290(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00420290(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  
  (this_ptr->base).location.position.x = new_position->x;
  (this_ptr->base).location.position.y = new_position->y;
  (this_ptr->base).location.position.z = new_position->z;
  pUVar1 = &(this_ptr->base).orient;
  if ((CVector3f *)pUVar1 != new_orientation) {
    (pUVar1->vec).x = new_orientation->x;
    (this_ptr->base).orient.vec.y = new_orientation->y;
    (this_ptr->base).orient.vec.z = new_orientation->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(&this_ptr->base);
  if (&this_ptr->physics_box != (CBox *)new_position) {
    (this_ptr->physics_box).position.x = new_position->x;
    (this_ptr->physics_box).position.y = new_position->y;
    (this_ptr->physics_box).position.z = new_position->z;
  }
  pCVar2 = &(this_ptr->physics_box).orientation;
  if (pCVar2 != new_orientation) {
    pCVar2->x = new_orientation->x;
    (this_ptr->physics_box).orientation.y = new_orientation->y;
    (this_ptr->physics_box).orientation.z = new_orientation->z;
  }
  core_boxactor_cpp_FUN_0041f1e0(this_ptr);
  return;
}
