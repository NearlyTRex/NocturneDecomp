// Name: core_xform.cpp_FUN_005b8eb0
// Address: 005b8eb0
// Address Range: [[005b8eb0, 005b910b]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b8eb0(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_005b8eb0(CCharacter *param_1,int *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 4) {
    case 0:
      iVar1 = *(int *)(param_1[1].base.create_event + 0x3c);
      break;
    case 1:
      iVar1 = *(int *)(param_1[1].base.create_event + 0x40);
      break;
    case 2:
      iVar1 = *(int *)(param_1[1].base.create_event + 0x54);
      break;
    case 3:
      iVar1 = *(int *)(param_1[1].base.create_event + 0x50);
      break;
    default:
      goto switchD_005b8ee6_default;
    }
    *param_2 = iVar1;
  }
switchD_005b8ee6_default:
  iVar1 = *param_2;
  if ((((iVar1 == *(int *)(param_1[1].base.create_event + 0x3c)) ||
       (iVar1 == *(int *)(param_1[1].base.create_event + 0x40))) ||
      (iVar1 == *(int *)(param_1[1].base.create_event + 0x50))) ||
     (iVar1 == *(int *)(param_1[1].base.create_event + 0x54))) {
    local_14 = (float)param_2[0xb];
    if (*(int *)(param_1[1].base.create_event + 0x54) == *param_2) {
      local_14 = 0.05;
    }
    if (*(int *)(param_1[1].base.create_event + 0x50) == *param_2) {
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
      initial_velocity = (CVector3f *)(param_2 + 3);
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(param_1->base).location.position,&(param_1->base).orient,
                             initial_velocity,&param_1->base,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210(param_1,body_part,*param_2,0);
      if (*param_2 == *(int *)(param_1[1].base.create_event + 0x50)) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x3c),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x40),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x44),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x48),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x4c),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x54),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x58),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x5c),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,*(int *)(param_1[1].base.create_event + 0x60),initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].base.standing_platform,initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if (*(int *)(&(param_1->model).field_0x2140 +
                  *(int *)(param_1[1].base.create_event + 0x54) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005fa354);
      if (*(int *)(param_1[1].base.create_event + 0x50) < 0) {
        param_2[1] = 0x4479c000;
        return;
      }
    }
  }
  return;
}
