// Name: core_carved.cpp_FUN_00428810
// Address: 00428810
// Address Range: [[00428810, 00428a7f]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00428810(CCharacter *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00428810(CCharacter *param_1,float *param_2)

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
      fVar2 = param_1[1].model.bone_origins[0x18].z;
      break;
    case 1:
      fVar2 = param_1[1].model.bone_origins[0x19].x;
      break;
    case 2:
      fVar2 = param_1[1].model.bone_origins[0x19].y;
      break;
    case 3:
      fVar2 = param_1[1].model.bone_origins[0x19].z;
      break;
    case 4:
      fVar2 = param_1[1].model.bone_origins[0x1a].z;
      break;
    case 5:
      fVar2 = param_1[1].model.bone_origins[0x1a].y;
      break;
    default:
      goto switchD_00428846_default;
    }
    *param_2 = fVar2;
  }
switchD_00428846_default:
  fVar2 = *param_2;
  if ((((fVar2 != param_1[1].model.bone_origins[0x18].z) &&
       (fVar2 != param_1[1].model.bone_origins[0x19].x)) &&
      (fVar2 != param_1[1].model.bone_origins[0x19].y)) &&
     (((fVar2 != param_1[1].model.bone_origins[0x19].z &&
       (fVar2 != param_1[1].model.bone_origins[0x1a].y)) &&
      (fVar2 != param_1[1].model.bone_origins[0x1a].z)))) {
    return;
  }
  local_14 = param_2[0xb];
  if (param_1[1].model.bone_origins[0x1a].z == *param_2) {
    local_14 = 0.05;
  }
  if (param_1[1].model.bone_origins[0x1a].y == *param_2) {
    local_14 = 0.02;
  }
  if (g_CGamePtr->gratuitous_dismemberment != 0) {
    local_14 = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_14 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(local_14);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                          (&(param_1->base).location.position,&(param_1->base).orient,
                           (CVector3f *)(param_2 + 3),&param_1->base,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
              (param_1,body_part,(int)*param_2,1);
    if (*param_2 == param_1[1].model.bone_origins[0x18].z) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (param_1,body_part,(int)param_1[1].model.bone_origins[0x19].x,1);
    }
    if (param_1[1].model.bone_origins[0x19].y == *param_2) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (param_1,body_part,(int)param_1[1].model.bone_origins[0x19].z,1);
    }
    if (param_1[1].model.bone_origins[0x1a].y == *param_2) {
      initial_velocity = (CVector3f *)(param_2 + 3);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x19].y,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x19].z,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x18].z,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x19].x,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x1a].z,initial_velocity,1);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_00434810(param_1,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
    if ((param_1->model).part_data.visibility_flags[(int)param_1[1].model.bone_origins[0x1a].z] == 0
       ) {
      param_2[1] = 9999.0;
    }
    param_2[2] = param_2[2] * (float)_DAT_005b7e37;
    if ((int)param_1[1].model.bone_origins[0x1a].x < 0) {
      param_2[1] = 999.0;
      return;
    }
  }
  return;
}
