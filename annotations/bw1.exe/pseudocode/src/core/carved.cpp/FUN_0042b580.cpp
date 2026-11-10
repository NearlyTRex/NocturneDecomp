// Name: core_carved.cpp_FUN_0042b580
// Address: 0042b580
// Address Range: [[0042b580, 0042b84a]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_0042b580(CCharacter *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_0042b580(CCharacter *param_1,float *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  float fVar2;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < param_2[0xb]) && (*param_2 == -NAN)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      fVar2 = param_1[1].base.platform_position_delta.z;
      break;
    case 1:
      fVar2 = param_1[1].base.platform_orientation_delta.x;
      break;
    case 2:
      fVar2 = param_1[1].base.platform_orientation_delta.y;
      break;
    case 3:
      fVar2 = param_1[1].base.platform_orientation_delta.z;
      break;
    case 4:
      fVar2 = (float)param_1[1].base.collision_disabled;
      break;
    case 5:
      fVar2 = (float)param_1[1].base.is_transparent;
      break;
    default:
      goto switchD_0042b5b6_default;
    }
    *param_2 = fVar2;
  }
switchD_0042b5b6_default:
  fVar2 = *param_2;
  if (((((fVar2 == param_1[1].base.platform_position_delta.z) ||
        (fVar2 == param_1[1].base.platform_orientation_delta.x)) ||
       (fVar2 == param_1[1].base.platform_orientation_delta.y)) ||
      ((fVar2 == param_1[1].base.platform_orientation_delta.z ||
       (fVar2 == (float)param_1[1].base.is_transparent)))) ||
     (fVar2 == (float)param_1[1].base.collision_disabled)) {
    local_14 = param_2[0xb];
    if ((float)param_1[1].base.collision_disabled == *param_2) {
      local_14 = 0.05;
    }
    if ((float)param_1[1].base.is_transparent == *param_2) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(param_1->base).location.position,&(param_1->base).orient,
                             (CVector3f *)(param_2 + 3),&param_1->base,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                (param_1,body_part,(int)*param_2,0);
      if (*param_2 == param_1[1].base.platform_position_delta.z) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  (param_1,body_part,(int)param_1[1].base.platform_orientation_delta.x,0);
      }
      if (param_1[1].base.platform_orientation_delta.y == *param_2) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  (param_1,body_part,(int)param_1[1].base.platform_orientation_delta.z,0);
      }
      if ((float)param_1[1].base.is_transparent == *param_2) {
        initial_velocity = (CVector3f *)(param_2 + 3);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].base.platform_orientation_delta.y,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].base.platform_orientation_delta.z,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].base.platform_position_delta.z,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].base.platform_orientation_delta.x,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,param_1[1].base.collision_disabled,initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if (*(int *)(&(param_1->model).field_0x2140 + param_1[1].base.collision_disabled * 4) == 0) {
        param_2[1] = 9999.0;
      }
      param_2[2] = param_2[2] * (float)_DAT_005d563d;
      if (param_1[1].base.is_renderable < 0) {
        param_2[1] = 999.0;
      }
    }
  }
  fVar2 = *param_2;
  if (fVar2 == (float)param_1[1].base.collision_disabled) {
    param_2[1] = param_2[1] * (float)_DAT_005d564d;
    return;
  }
  if ((fVar2 != (float)param_1[1].base.is_renderable) &&
     (fVar2 != (float)param_1[1].base.is_transparent)) {
    param_2[1] = param_2[1] * (float)_DAT_005d5645;
    return;
  }
  param_2[1] = param_2[1];
  return;
}
