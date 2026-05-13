// Name: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041d8a0
// Address: 0041d8a0
// MANUAL RECONSTRUCTION
// Address Range: [[0041d8a0, 0041d96d] [00604831, 00604857]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d8a0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d8a0(CBoneGuy *this_ptr)

{
  CLocation *pCVar2;
  CQuaternion4f local_24;
  int local_14;
  CBodyPart *pCVar1;
  
  local_14 = 0;
  if (0 < this_ptr->box_count) {
    do {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                (&((this_ptr->boxes[local_14].body_part)->base).orient.vec,&local_24);
      this_ptr->boxes[local_14].dest_orient = local_24;
      ((this_ptr->boxes[local_14].body_part)->physics_box).is_valid = 0;
      pCVar1 = this_ptr->boxes[local_14].body_part;
      pCVar2 = &(pCVar1->base).location;
      if ((CLocation *)&this_ptr->boxes[local_14].source_pos != pCVar2) {
        this_ptr->boxes[local_14].source_pos = (pCVar1->base).location.position;
      }
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->box_count);
  }
  this_ptr->blown_up = 2;
  this_ptr->recombine_interpolation = 0.0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-comeback.wav");
  return;
}
