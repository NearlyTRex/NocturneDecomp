// Name: core_construc.cpp_FUN_004472a0
// Address: 004472a0
// Address Range: [[004472a0, 004474c1]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_004472a0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_construc_cpp_FUN_004472a0(CCharacter *param_1)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  CBodyPart *body_part;
  CVector3f *pCVar6;
  float fVar7;
  CVector3f *pCVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1820 [1520];
  float local_44;
  CVector3f local_34;
  CVector3f *local_28;
  UOrientationVector *local_24;
  CDeformableModel *local_20;
  CVector3f *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar11 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(param_1);
  param_1[1].model.bone_transform.pose_data.bone_rotations[8].w = 1.4013e-45;
  param_1[1].model.bone_transform.pose_data.bone_rotations[8].x = 0.0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(&param_1->model);
  fVar7 = (float)local_20->num_parts;
  param_1[1].model.bone_origins[1].z = fVar7;
  if (0x18 < (int)fVar7) {
    _DAT_01d1d400 = "..\\core\\construc.cpp";
    _DAT_01d1d404 = 0x31d;
    core_main_c_FUN_005030e0("CConstruct::explode - Not enough containers");
  }
  fVar7 = 0.0;
  if (0 < local_20->num_parts) {
    local_1c = param_1[1].model.bone_origins + 2;
    local_24 = &(param_1->base).orient;
    local_28 = &(param_1->base).location.position;
    pCVar8 = param_1[1].model.bone_origins + 3;
    local_18 = param_1;
    do {
      local_34.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_34.x;
      local_34.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,10.0);
      local_14 = local_34.y;
      local_34.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_34.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (local_28,local_24,&local_34,&param_1->base,1,1,BLOOD_TYPE_NONE);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                (param_1,body_part,(int)fVar7,0);
      fVar3 = (float)param_1[1].base.is_transparent;
      if (fVar7 == fVar3) {
        param_1[1].model.bone_transform.pose_data.bone_rotations[8].y = fVar3;
        body_part->dont_pick_me_up = 0;
        body_part->render_disabled = 1;
      }
      else {
        body_part->dont_pick_me_up = 1;
      }
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      local_18[1].model.bone_origins[7].z = (float)body_part;
      pCVar1 = &(body_part->base).location;
      pCVar6 = local_1c + (int)fVar7 * 6;
      if ((CLocation *)pCVar6 != pCVar1) {
        pCVar6->x = (pCVar1->position).x;
        pCVar6->y = (body_part->base).location.position.y;
        pCVar6->z = (body_part->base).location.position.z;
      }
      pUVar2 = &(body_part->base).orient;
      if (pCVar8 != (CVector3f *)pUVar2) {
        pCVar8->x = (pUVar2->vec).x;
        pCVar8->y = (body_part->base).orient.vec.y;
        pCVar8->z = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_FUN_005b7ed0(&(body_part->base).orient);
      pCVar5 = local_18;
      pCVar4 = local_18 + 1;
      local_18 = (CCharacter *)((local_18->base).orient_matrix.m + 1);
      puVar9 = (uint *)((int)pCVar5 + (uint)bVar11 * -8 + 0xc3c4);
      (pCVar4->model).bone_origins[5].y = local_44;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      *puVar9 = *(uint *)(&stack0xffffffc0 + (uint)bVar11 * -8);
      *puVar10 = *(uint *)(&stack0xffffffc4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      puVar10[(uint)bVar11 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
            ((uint)bVar11 * -2 + 1) * 4);
      fVar7 = (float)((int)fVar7 + 1);
      pCVar8 = pCVar8 + 6;
    } while ((int)fVar7 < local_20->num_parts);
  }
  return;
}
