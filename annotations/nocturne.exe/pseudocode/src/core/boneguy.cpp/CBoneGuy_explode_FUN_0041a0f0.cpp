// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0
// Address: 0041a0f0
// Address Range: [[0041a0f0, 0041a30c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(CBoneGuy *this_ptr)

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
  uint *puVar9;
  byte bVar10;
  float afStackY_1824 [1520];
  CQuaternion4f local_48;
  CVector3f local_38;
  UOrientationVector *local_2c;
  CVector3f *local_28;
  CDeformableModel *local_24;
  SBoneGuyBox *local_20;
  CBoneGuy *local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->recombine_interpolation = 0.0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                       (&(this_ptr->base).base.model);
  iVar2 = local_24->num_parts;
  this_ptr->box_count = iVar2;
  if (0x14 < iVar2) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 1091;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < local_24->num_parts) {
    local_20 = this_ptr->boxes;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location.position;
    pCVar6 = &this_ptr->boxes[0].orient;
    local_1c = this_ptr;
    do {
      local_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
      local_14 = local_38.x;
      local_38.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,10.0);
      local_14 = local_38.y;
      local_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
      local_14 = local_38.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00415b30
                            (local_28,local_2c,&local_38,(CDemonActor *)this_ptr,1,1,2);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                ((CCharacter *)this_ptr,body_part,local_18,0);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(body_part);
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
      core_xform_cpp_eulerToQuaternion_FUN_0055d610(&(body_part->base).orient.vec,&local_48);
      pCVar4 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);
      local_18 = local_18 + 1;
      puVar8 = (uint *)((int)local_1c + (uint)bVar10 * -8 + 0xbdd0);
      local_1c->boxes[0].start_orient.w = local_48.w;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar7 = (uint *)((int)&local_48 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *puVar8 = *(uint *)((int)&local_48 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar7;
      puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
      local_1c = pCVar4;
    } while (local_18 < local_24->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
