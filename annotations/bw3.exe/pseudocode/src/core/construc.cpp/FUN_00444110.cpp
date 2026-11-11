// Name: core_construc.cpp_FUN_00444110
// Address: 00444110
// Address Range: [[00444110, 00444330]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00444110(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_construc_cpp_FUN_00444110(CCharacter *param_1)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  CBodyPart *body_part;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  byte bVar11;
  float afStackY_1820 [1520];
  float part_index;
  float local_44;
  CVector3f local_34;
  CVector3f *local_28;
  UOrientationVector *local_24;
  CDeformableModel *local_20;
  float *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar11 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(param_1);
  param_1[1].model.bone_transform.pose_data.bone_rotations[0x27].w = 1.4013e-45;
  param_1[1].model.bone_transform.pose_data.bone_rotations[0x27].z = 0.0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(&param_1->model);
  fVar6 = (float)local_20->num_parts;
  param_1[1].model.bone_origins[0x2b].x = fVar6;
  if (0x18 < (int)fVar6) {
    _DAT_01d71de0 = "..\\core\\construc.cpp";
    _DAT_01d71de4 = 0x357;
    core_main_c_FUN_004e4330("CConstruct::explode - Not enough containers");
  }
  fVar6 = 0.0;
  if (0 < local_20->num_parts) {
    local_1c = &param_1[1].model.bone_origins[0x2b].y;
    local_24 = &(param_1->base).orient;
    local_28 = &(param_1->base).location.position;
    pfVar7 = &param_1[1].model.bone_origins[0x2c].y;
    local_18 = param_1;
    do {
      local_34.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
      local_14 = local_34.x;
      local_34.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
      local_14 = local_34.y;
      local_34.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
      local_14 = local_34.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                            (local_28,local_24,&local_34,&param_1->base,1,1,BLOOD_TYPE_NONE);
      part_index = param_1[1].model.bone_origins[0x1a].y;
      bVar10 = fVar6 == part_index;
      if (bVar10) {
        param_1[1].model.bone_transform.pose_data.bone_rotations[0x27].x = part_index;
        body_part->dont_pick_me_up = 0;
        body_part->render_disabled = 1;
      }
      else {
        body_part->dont_pick_me_up = 1;
        part_index = fVar6;
      }
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (param_1,body_part,(int)part_index,(uint)!bVar10);
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
      local_18[1].model.bone_origins[0x31].x = (float)body_part;
      pCVar1 = &(body_part->base).location;
      pfVar5 = local_1c + (int)fVar6 * 0x12;
      if ((CLocation *)pfVar5 != pCVar1) {
        *pfVar5 = (pCVar1->position).x;
        pfVar5[1] = (body_part->base).location.position.y;
        pfVar5[2] = (body_part->base).location.position.z;
      }
      pUVar2 = &(body_part->base).orient;
      if ((UOrientationVector *)pfVar7 != pUVar2) {
        *pfVar7 = (pUVar2->vec).x;
        pfVar7[1] = (body_part->base).orient.vec.y;
        pfVar7[2] = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_FUN_005860b0(&(body_part->base).orient);
      pCVar4 = local_18;
      pCVar3 = local_18 + 1;
      local_18 = (CCharacter *)((local_18->base).orient_matrix.m + 1);
      puVar8 = (uint *)((int)pCVar4 + (uint)bVar11 * -8 + 0xd1b0);
      (pCVar3->model).bone_origins[0x2e].z = local_44;
      puVar9 = puVar8 + (uint)bVar11 * -2 + 1;
      *puVar8 = *(uint *)(&stack0xffffffc0 + (uint)bVar11 * -8);
      *puVar9 = *(uint *)(&stack0xffffffc4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      puVar9[(uint)bVar11 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
            ((uint)bVar11 * -2 + 1) * 4);
      fVar6 = (float)((int)fVar6 + 1);
      pfVar7 = pfVar7 + 0x12;
    } while ((int)fVar6 < local_20->num_parts);
  }
  return;
}
