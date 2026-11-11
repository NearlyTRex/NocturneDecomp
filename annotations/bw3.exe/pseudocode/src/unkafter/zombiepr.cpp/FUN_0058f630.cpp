// Name: unkafter_zombiepr.cpp_FUN_0058f630
// Address: 0058f630
// Address Range: [[0058f630, 0058f981]]
// Convention: unknown
// Signature: void unkafter_zombiepr_cpp_FUN_0058f630(CCharacter *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_zombiepr_cpp_FUN_0058f630(CCharacter *param_1,float *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  float fVar2;
  CBodyPart *body_part;
  float local_1c;
  
  if ((0.0 < param_2[0xb]) && (*param_2 == -NAN)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      fVar2 = param_1[1].model.bone_origins[0x1d].z;
      break;
    case 1:
      fVar2 = param_1[1].model.bone_origins[0x1e].x;
      break;
    case 2:
      fVar2 = param_1[1].model.bone_origins[0x1e].y;
      break;
    case 3:
      fVar2 = param_1[1].model.bone_origins[0x1e].z;
      break;
    case 4:
      fVar2 = param_1[1].model.bone_origins[0x21].x;
      break;
    case 5:
      fVar2 = param_1[1].model.bone_origins[0x20].z;
      break;
    default:
      goto switchD_0058f669_default;
    }
    *param_2 = fVar2;
  }
switchD_0058f669_default:
  fVar2 = *param_2;
  if (((((fVar2 != param_1[1].model.bone_origins[0x1d].z) &&
        (fVar2 != param_1[1].model.bone_origins[0x1e].x)) &&
       (fVar2 != param_1[1].model.bone_origins[0x1e].y)) &&
      ((fVar2 != param_1[1].model.bone_origins[0x1e].z &&
       (fVar2 != param_1[1].model.bone_origins[0x20].z)))) &&
     (fVar2 != param_1[1].model.bone_origins[0x21].x)) {
    return;
  }
  if (param_1[1].model.bone_origins[0x20].z == *param_2) {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    if ((float)_DAT_005d8cb8 <= fVar2) {
      if (_DAT_005d8cc0 <= (double)fVar2) goto LAB_0058f6c3;
      fVar2 = param_1[1].model.bone_origins[0x1e].y;
    }
    else {
      fVar2 = param_1[1].model.bone_origins[0x1d].z;
    }
    *param_2 = fVar2;
  }
LAB_0058f6c3:
  local_1c = param_2[0xb];
  if (param_1[1].model.bone_origins[0x21].x == *param_2) {
    local_1c = 0.05;
  }
  if (param_1[1].model.bone_origins[0x20].z == *param_2) {
    local_1c = 0.06;
  }
  if (g_CGamePtr->gratuitous_dismemberment != 0) {
    local_1c = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_1c = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                          (&(param_1->base).location.position,&(param_1->base).orient,
                           (CVector3f *)(param_2 + 3),&param_1->base,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
              (param_1,body_part,(int)*param_2,1);
    if (*param_2 == param_1[1].model.bone_origins[0x1d].z) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (param_1,body_part,(int)param_1[1].model.bone_origins[0x1e].x,1);
    }
    if (param_1[1].model.bone_origins[0x1e].y == *param_2) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (param_1,body_part,(int)param_1[1].model.bone_origins[0x1e].z,1);
    }
    if (param_1[1].model.bone_origins[0x20].z == *param_2) {
      initial_velocity = (CVector3f *)(param_2 + 3);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x1e].y,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x1e].z,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x1d].z,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x1e].x,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                (param_1,(int)param_1[1].model.bone_origins[0x21].x,initial_velocity,1);
      (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,1,(CVector3f *)0x0);
      (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,0,(CVector3f *)0x0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_00434810(param_1,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
    if ((param_1->model).part_data.visibility_flags[(int)param_1[1].model.bone_origins[0x21].x] == 0
       ) {
      param_2[1] = 9999.0;
    }
    param_2[2] = param_2[2] * (float)_DAT_005d8cc8;
    if ((*param_2 == param_1[1].model.bone_origins[0x1e].y) ||
       (*param_2 == param_1[1].model.bone_origins[0x1e].z)) {
      (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,1,(CVector3f *)0x0);
      (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,0,(CVector3f *)0x0);
    }
    if ((*param_2 == param_1[1].model.bone_origins[0x1d].z) ||
       (*param_2 == param_1[1].model.bone_origins[0x1e].x)) {
      (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,0,(CVector3f *)0x0);
      return;
    }
  }
  return;
}
