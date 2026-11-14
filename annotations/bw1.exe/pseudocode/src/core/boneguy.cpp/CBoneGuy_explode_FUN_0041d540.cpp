// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d540
// Address: 0041d540
// Address Range: [[0041d540, 0041d75c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d540(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d540(CBoneGuy *this_ptr)

{
  UOrientationVector *pUVar1;
  int iVar2;
  CBodyPart *body_part;
  SBoneGuyBox *pSVar3;
  CBoneGuy *pCVar4;
  CLocation *pCVar5;
  CVector3f *pCVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_1824 [1520];
  float local_48;
  CVector3f local_38;
  UOrientationVector *local_2c;
  CVector3f *local_28;
  CDeformableModel *local_24;
  SBoneGuyBox *local_20;
  CBoneGuy *local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->recombine_interpolation = 0.0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       (&(this_ptr->base).base.model);
  iVar2 = local_24->num_parts;
  this_ptr->box_count = iVar2;
  if (0x14 < iVar2) {
    _DAT_01d1d400 = "..\\core\\boneguy.cpp";
    _DAT_01d1d404 = 0x444;
    core_main_c_FUN_005030e0("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < local_24->num_parts) {
    local_20 = this_ptr->boxes;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location.position;
    pCVar6 = &this_ptr->boxes[0].orient;
    local_1c = this_ptr;
    do {
      local_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_38.x;
      local_38.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,10.0);
      local_14 = local_38.y;
      local_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_38.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (local_28,local_2c,&local_38,(CDemonActor *)this_ptr,1,1,BLOOD_TYPE_NONE
                            );
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,local_18,0);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      local_1c->boxes[0].body_part = body_part;
      pCVar5 = &(body_part->base).location;
      pSVar3 = local_20 + local_18;
      if (pSVar3 != (SBoneGuyBox *)pCVar5) {
        (pSVar3->pos).x = (pCVar5->position).x;
        (pSVar3->pos).y = (body_part->base).location.position.y;
        (pSVar3->pos).z = (body_part->base).location.position.z;
      }
      pUVar1 = &(body_part->base).orient;
      if (pCVar6 != (CVector3f *)pUVar1) {
        pCVar6->x = (pUVar1->vec).x;
        pCVar6->y = (body_part->base).orient.vec.y;
        pCVar6->z = (body_part->base).orient.vec.z;
      }
      pCVar6 = pCVar6 + 6;
      core_xform_cpp_FUN_005b7ed0(&(body_part->base).orient);
      pCVar4 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);
      local_18 = local_18 + 1;
      puVar7 = (uint *)((int)local_1c + (uint)bVar9 * -8 + 0xc314);
      local_1c->boxes[0].start_orient.w = local_48;
      puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = *(uint *)(&stack0xffffffbc + (uint)bVar9 * -8);
      *puVar8 = *(uint *)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
            ((uint)bVar9 * -2 + 1) * 4);
      local_1c = pCVar4;
    } while (local_18 < local_24->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
