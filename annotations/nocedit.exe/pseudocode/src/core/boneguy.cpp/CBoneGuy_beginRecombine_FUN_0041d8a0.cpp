// Name: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041d8a0
// Address: 0041d8a0
// Address Range: [[0041d8a0, 0041d96d] [00604831, 00604857]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d8a0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d8a0(CBoneGuy *this_ptr)

{
  CLocation *pCVar2;
  CBoneGuy *pCVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1800 [1525];
  CQuaternion4f local_24;
  int local_14;
  CBodyPart *pCVar1;
  
  local_14 = 0;
  if (0 < this_ptr->box_count) {
    pCVar4 = &this_ptr->boxes[0].source_pos;
    pCVar3 = this_ptr;
    do {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                (&((pCVar3->boxes[0].body_part)->base).orient.vec,&local_24);
      pCVar3->boxes[0].dest_orient.w = local_24.w;
      pCVar3->boxes[0].dest_orient.x = local_24.x;
      pCVar3->boxes[0].dest_orient.y = local_24.y;
      pCVar3->boxes[0].dest_orient.z = local_24.z;
      ((pCVar3->boxes[0].body_part)->physics_box).is_valid = 0;
      pCVar1 = pCVar3->boxes[0].body_part;
      pCVar2 = &(pCVar1->base).location;
      if ((CLocation *)pCVar4 != pCVar2) {
        pCVar4->x = (pCVar2->position).x;
        pCVar4->y = (pCVar1->base).location.position.y;
        pCVar4->z = (pCVar1->base).location.position.z;
      }
      local_14 = local_14 + 1;
      pCVar4 = pCVar4 + 6;
      pCVar3 = (CBoneGuy *)((pCVar3->base).base.base.orient_matrix.m + 1);
    } while (local_14 < this_ptr->box_count);
  }
  this_ptr->blown_up = 2;
  this_ptr->recombine_interpolation = 0.0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-comeback.wav");
  return;
}
