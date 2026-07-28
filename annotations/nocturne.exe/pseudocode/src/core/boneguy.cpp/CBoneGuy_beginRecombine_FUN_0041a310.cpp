// Name: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310
// Address: 0041a310
// Address Range: [[0041a310, 0041a3dd]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(CBoneGuy *this_ptr)

{
  CBodyPart *pCVar1;
  CLocation *pCVar2;
  CBoneGuy *pCVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1800 [1525];
  float local_24;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < this_ptr->box_count) {
    pCVar4 = &this_ptr->boxes[0].source_pos;
    pCVar3 = this_ptr;
    do {
      core_xform_cpp_eulerToQuaternion_FUN_0055d610(&((pCVar3->boxes[0].body_part)->base).orient);
      puVar5 = (uint *)((int)pCVar3 + (uint)bVar7 * -8 + 0xbdc0);
      pCVar3->boxes[0].dest_orient.w = local_24;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      *puVar5 = *(uint *)(&stack0xffffffe0 + (uint)bVar7 * -8);
      *puVar6 = *(uint *)(&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      puVar6[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
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
