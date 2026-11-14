// Name: core_construc.cpp_CConstruct_explode_FUN_00444110
// Address: 00444110
// Address Range: [[00444110, 00444330]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_explode_FUN_00444110(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_construc_cpp_CConstruct_explode_FUN_00444110(CConstruct *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CConstruct *pCVar3;
  CBodyPart *body_part;
  SBoneGuyBox *pSVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  float afStackY_1820 [1520];
  int part_index;
  float local_44;
  CVector3f local_34;
  CVector3f *local_28;
  UOrientationVector *local_24;
  CDeformableModel *local_20;
  SBoneGuyBox *local_1c;
  CConstruct *local_18;
  float local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->recombine_interpolation = 0.0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       (&(this_ptr->base).base.model);
  iVar5 = local_20->num_parts;
  this_ptr->box_count = iVar5;
  if (0x18 < iVar5) {
    _DAT_01d71de0 = "..\\core\\construc.cpp";
    _DAT_01d71de4 = 0x357;
    core_main_c_FUN_004e4330("CConstruct::explode - Not enough containers");
  }
  iVar5 = 0;
  if (0 < local_20->num_parts) {
    local_1c = this_ptr->boxes;
    local_24 = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location.position;
    pCVar6 = &this_ptr->boxes[0].orient;
    local_18 = this_ptr;
    do {
      local_34.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
      local_14 = local_34.x;
      local_34.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
      local_14 = local_34.y;
      local_34.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
      local_14 = local_34.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                            (local_28,local_24,&local_34,(CDemonActor *)this_ptr,1,1,BLOOD_TYPE_NONE
                            );
      part_index = this_ptr->part_indices[0];
      bVar9 = iVar5 == part_index;
      if (bVar9) {
        this_ptr->pickable_box_index = part_index;
        body_part->dont_pick_me_up = 0;
        body_part->render_disabled = 1;
      }
      else {
        body_part->dont_pick_me_up = 1;
        part_index = iVar5;
      }
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                ((CCharacter *)this_ptr,body_part,part_index,(uint)!bVar9);
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
      local_18->boxes[0].body_part = body_part;
      pCVar1 = &(body_part->base).location;
      pSVar4 = local_1c + iVar5;
      if (pSVar4 != (SBoneGuyBox *)pCVar1) {
        (pSVar4->pos).x = (pCVar1->position).x;
        (pSVar4->pos).y = (body_part->base).location.position.y;
        (pSVar4->pos).z = (body_part->base).location.position.z;
      }
      pUVar2 = &(body_part->base).orient;
      if (pCVar6 != (CVector3f *)pUVar2) {
        pCVar6->x = (pUVar2->vec).x;
        pCVar6->y = (body_part->base).orient.vec.y;
        pCVar6->z = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_FUN_005860b0(&(body_part->base).orient);
      pCVar3 = local_18;
      pSVar4 = local_18->boxes;
      local_18 = (CConstruct *)((local_18->base).base.base.orient_matrix.m + 1);
      puVar7 = (uint *)((int)pCVar3 + (uint)bVar10 * -8 + 0xd1b0);
      (pSVar4->start_orient).w = local_44;
      puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
      *puVar7 = *(uint *)(&stack0xffffffc0 + (uint)bVar10 * -8);
      *puVar8 = *(uint *)(&stack0xffffffc4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      puVar8[(uint)bVar10 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
            ((uint)bVar10 * -2 + 1) * 4);
      iVar5 = iVar5 + 1;
      pCVar6 = pCVar6 + 6;
    } while (iVar5 < local_20->num_parts);
  }
  return;
}
