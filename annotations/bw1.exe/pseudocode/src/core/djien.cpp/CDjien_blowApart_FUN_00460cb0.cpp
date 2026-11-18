// Name: core_djien.cpp_CDjien_blowApart_FUN_00460cb0
// Address: 00460cb0
// Address Range: [[00460cb0, 00460e73]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_blowApart_FUN_00460cb0(CDjien *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_djien_cpp_CDjien_blowApart_FUN_00460cb0(CDjien *this_ptr)

{
  UOrientationVector *pUVar1;
  int iVar2;
  CBodyPart *body_part;
  SDjienBox *pSVar3;
  CLocation *pCVar4;
  CDjien *pCVar5;
  UOrientationVector *pUVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1824 [1520];
  CQuaternion4f local_48;
  CVector3f local_38;
  UOrientationVector *local_2c;
  CDeformableModel *local_28;
  CVector3f *local_24;
  SDjienBox *local_20;
  CDjien *local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  this_ptr->blown_up = 1;
  this_ptr->recombine_interpolation = 0.0;
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       (&(this_ptr->base).base.model);
  iVar2 = local_28->num_parts;
  local_18 = 0;
  this_ptr->box_count = iVar2;
  if (0 < iVar2) {
    local_20 = this_ptr->boxes;
    local_2c = &(this_ptr->base).base.base.orient;
    local_24 = &(this_ptr->base).base.base.location.position;
    pUVar6 = &this_ptr->boxes[0].orientation;
    local_1c = this_ptr;
    do {
      local_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_38.x;
      local_38.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,10.0);
      local_14 = local_38.y;
      local_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_38.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (local_24,local_2c,&local_38,(CDemonActor *)this_ptr,1,1,BLOOD_TYPE_NONE
                            );
      iVar2 = local_18;
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,local_18,0);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      pSVar3 = local_20 + iVar2;
      local_1c->boxes[0].body_part = body_part;
      pCVar4 = &(body_part->base).location;
      if (pSVar3 != (SDjienBox *)pCVar4) {
        (pSVar3->position).x = (pCVar4->position).x;
        (pSVar3->position).y = (body_part->base).location.position.y;
        (pSVar3->position).z = (body_part->base).location.position.z;
      }
      pUVar1 = &(body_part->base).orient;
      if (pUVar6 != pUVar1) {
        (pUVar6->vec).x = (pUVar1->vec).x;
        (pUVar6->vec).y = (body_part->base).orient.vec.y;
        (pUVar6->vec).z = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&(body_part->base).orient.vec,&local_48);
      pCVar5 = (CDjien *)((local_1c->base).base.base.orient_matrix.m + 1);
      puVar8 = (uint *)((int)local_1c + (uint)bVar10 * -8 + 0xc328);
      local_1c->boxes[0].rotation.w = local_48.w;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar7 = (uint *)((int)&local_48 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *puVar8 = *(uint *)((int)&local_48 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar7;
      puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
      pUVar6 = pUVar6 + 6;
      local_18 = local_18 + 1;
      local_1c = pCVar5;
    } while (local_18 < local_28->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"djien-die.wav @ 5");
  return;
}
