// Name: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00422640
// Address: 00422640
// Address Range: [[00422640, 004226c2]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422640 (CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422640
          (CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  COrientation *pCVar1;
  
  (this_ptr->base).location.position.x = new_position->x;
  (this_ptr->base).location.position.y = new_position->y;
  (this_ptr->base).location.position.z = new_position->z;
  pCVar1 = &(this_ptr->base).orient;
  if (pCVar1 != (COrientation *)new_orientation) {
    pCVar1->pitch = new_orientation->x;
    (this_ptr->base).orient.bank = new_orientation->y;
    (this_ptr->base).orient.heading = new_orientation->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  if ((CVector3f *)&this_ptr->sim_box != new_position) {
    this_ptr->sim_box = (CSimBox *)new_position->x;
    *(float *)this_ptr->unk4 = new_position->y;
    *(float *)(this_ptr->unk4 + 4) = new_position->z;
  }
  if ((CVector3f *)(this_ptr->unk4 + 8) != new_orientation) {
    ((CVector3f *)(this_ptr->unk4 + 8))->x = new_orientation->x;
    *(float *)(this_ptr->unk4 + 0xc) = new_orientation->y;
    *(float *)(this_ptr->unk4 + 0x10) = new_orientation->z;
  }
  core_boxactor_cpp_CBoxActor_FUN_004218d0(this_ptr);
  return;
}
