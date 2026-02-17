// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680
// Address: 0041d680
// Address Range: [[0041d680, 0041d72f] [0041d853, 0041d89c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)

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
  float afStackY_1824 [1523];
  CQuaternion4f local_48;
  float local_38;
  float local_34;
  float local_30;
  UOrientationVector *local_2c;
  CLocation *local_28;
  CDeformableModel *local_24;
  SBoneGuyBox *local_20;
  CBoneGuy *local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->recombine_interpolation = 0.0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (&(this_ptr->base).base.model);
  iVar2 = local_24->num_parts;
  this_ptr->box_count = iVar2;
  if (0x14 < iVar2) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < local_24->num_parts) {
    local_20 = this_ptr->boxes;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location;
    pCVar6 = &this_ptr->boxes[0].orient;
    local_1c = this_ptr;
    do {
      local_38 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_38;
      local_34 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,10.0);
      local_14 = local_34;
      local_30 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_30;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,local_18,0);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
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
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&(body_part->base).orient.vec,&local_48);
      pCVar4 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);
      local_18 = local_18 + 1;
      puVar8 = (uint *)((int)local_1c + (uint)bVar10 * -8 + 49000);
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
