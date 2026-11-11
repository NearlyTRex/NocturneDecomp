// Name: unkafter_djien.cpp_FUN_00460cb0
// Address: 00460cb0
// Address Range: [[00460cb0, 00460e73]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_00460cb0(CCharacter *param_1)

#include "nocturne.h"

void unkafter_djien_cpp_FUN_00460cb0(CCharacter *param_1)

{
  UOrientationVector *pUVar1;
  int iVar2;
  CBodyPart *body_part;
  float *pfVar3;
  CLocation *pCVar4;
  CCharacter *pCVar5;
  UOrientationVector *pUVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  UActorVTable aUStackY_1824 [1520];
  UActorVTable local_48;
  CVector3f local_38;
  UOrientationVector *local_2c;
  CDeformableModel *local_28;
  CVector3f *local_24;
  CDemonActorTransformState *local_20;
  CCharacter *local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  param_1[1].model.rest_bone_scales[0x60] = 1.4013e-45;
  param_1[1].model.rest_bone_scales[99] = 0.0;
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(&param_1->model);
  iVar2 = local_28->num_parts;
  local_18 = 0;
  param_1[1].base.dead2 = iVar2;
  if (0 < iVar2) {
    local_20 = &param_1[1].base.previous_transform_state;
    local_2c = &(param_1->base).orient;
    local_24 = &(param_1->base).location.position;
    pUVar6 = &param_1[1].base.previous_transform_state.orientation;
    local_1c = param_1;
    do {
      local_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_38.x;
      local_38.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,10.0);
      local_14 = local_38.y;
      local_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
      local_14 = local_38.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (local_24,local_2c,&local_38,&param_1->base,1,1,BLOOD_TYPE_NONE);
      iVar2 = local_18;
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210(param_1,body_part,local_18,0);
      body_part->dont_pick_me_up = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      pfVar3 = (float *)(iVar2 * 0x48 + (int)local_20);
      local_1c[1].model.base.tween_target_motion = (int)body_part;
      pCVar4 = &(body_part->base).location;
      if ((CLocation *)pfVar3 != pCVar4) {
        *pfVar3 = (pCVar4->position).x;
        pfVar3[1] = (body_part->base).location.position.y;
        pfVar3[2] = (body_part->base).location.position.z;
      }
      pUVar1 = &(body_part->base).orient;
      if (pUVar6 != pUVar1) {
        (pUVar6->vec).x = (pUVar1->vec).x;
        (pUVar6->vec).y = (body_part->base).orient.vec.y;
        (pUVar6->vec).z = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_FUN_005b7ed0(&(body_part->base).orient);
      pCVar5 = (CCharacter *)((local_1c->base).orient_matrix.m + 1);
      puVar7 = (uint *)((int)local_1c + (uint)bVar9 * -8 + 0xc328);
      local_1c[1].base.vtable = local_48;
      puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = *(uint *)(&stack0xffffffbc + (uint)bVar9 * -8);
      *puVar8 = *(uint *)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      puVar8[(uint)bVar9 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
            ((uint)bVar9 * -2 + 1) * 4);
      pUVar6 = pUVar6 + 6;
      local_18 = local_18 + 1;
      local_1c = pCVar5;
    } while (local_18 < local_28->num_parts);
  }
  (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"?djien-die.wav @ 5" + 1);
  return;
}
