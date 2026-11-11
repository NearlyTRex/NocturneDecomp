// Name: core_construc.cpp_FUN_00438060
// Address: 00438060
// Address Range: [[00438060, 00438291]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00438060(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_construc_cpp_FUN_00438060(CCharacter *param_1)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  int iVar3;
  float fVar4;
  CCharacter *pCVar5;
  CCharacter *pCVar6;
  CBodyPart *body_part;
  float *pfVar7;
  float part_index;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1820 [1520];
  float local_44;
  CVector3f local_34;
  UOrientationVector *local_28;
  CVector3f *local_24;
  CDeformableModel *local_20;
  byte *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar11 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(param_1);
  param_1[1].model.rest_bone_scales[0x2c] = 1.4013e-45;
  param_1[1].model.rest_bone_scales[0x2d] = 0.0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(&param_1->model);
  iVar3 = local_20->num_parts;
  param_1[1].base.particle_systems[1].next_particle = iVar3;
  if (0x18 < iVar3) {
    _DAT_01d046a0 = "..\\core\\construc.cpp";
    _DAT_01d046a4 = 0x294;
    core_main_c_FUN_004e4500("CConstruct::explode - Not enough containers");
  }
  part_index = 0.0;
  if (0 < local_20->num_parts) {
    local_1c = &param_1[1].base.particle_systems[1].field_0x20;
    local_28 = &(param_1->base).orient;
    local_24 = &(param_1->base).location.position;
    pfVar8 = &param_1[1].base.particle_systems[1].fade_duration;
    local_18 = param_1;
    do {
      local_34.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
      local_14 = local_34.x;
      local_34.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,10.0);
      local_14 = local_34.y;
      local_34.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
      local_14 = local_34.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_004154f0
                            (local_24,local_28,&local_34,&param_1->base,1,1,BLOOD_TYPE_NONE);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                (param_1,body_part,(int)part_index,0);
      fVar4 = (float)param_1[1].base.collision_disabled;
      if (part_index == fVar4) {
        param_1[1].model.rest_bone_scales[0x2e] = fVar4;
        body_part->dont_pick_me_up = 0;
      }
      else {
        body_part->dont_pick_me_up = 1;
      }
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      *(CBodyPart **)&local_18[1].base.particle_systems[2].field_0x20 = body_part;
      pCVar1 = &(body_part->base).location;
      pfVar7 = (float *)(local_1c + (int)part_index * 0x48);
      if ((CLocation *)pfVar7 != pCVar1) {
        *pfVar7 = (pCVar1->position).x;
        pfVar7[1] = (body_part->base).location.position.y;
        pfVar7[2] = (body_part->base).location.position.z;
      }
      pUVar2 = &(body_part->base).orient;
      if ((UOrientationVector *)pfVar8 != pUVar2) {
        *pfVar8 = (pUVar2->vec).x;
        pfVar8[1] = (body_part->base).orient.vec.y;
        pfVar8[2] = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_FUN_00594380(&(body_part->base).orient);
      pCVar6 = local_18;
      pCVar5 = local_18 + 1;
      local_18 = (CCharacter *)((local_18->base).orient_matrix.m + 1);
      puVar9 = (uint *)((int)pCVar6 + (uint)bVar11 * -8 + 0x10c44);
      (pCVar5->base).particle_systems[2].position.y = local_44;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      *puVar9 = *(uint *)(&stack0xffffffc0 + (uint)bVar11 * -8);
      *puVar10 = *(uint *)(&stack0xffffffc4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      puVar10[(uint)bVar11 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
            ((uint)bVar11 * -2 + 1) * 4);
      part_index = (float)((int)part_index + 1);
      pfVar8 = pfVar8 + 0x12;
    } while ((int)part_index < local_20->num_parts);
  }
  (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"boneguy-fallapart.wav");
  return;
}
