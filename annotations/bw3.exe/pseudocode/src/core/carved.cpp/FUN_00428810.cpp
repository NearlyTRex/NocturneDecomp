// Name: core_carved.cpp_FUN_00428810
// Address: 00428810
// Address Range: [[00428810, 00428a7f]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00428810(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00428810(CCharacter *param_1,int *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)&param_1[1].field_0x2d8;
      break;
    case 1:
      iVar1 = *(int *)&param_1[1].field_0x2dc;
      break;
    case 2:
      iVar1 = *(int *)&param_1[1].field_0x2e0;
      break;
    case 3:
      iVar1 = *(int *)&param_1[1].field_0x2e4;
      break;
    case 4:
      iVar1 = *(int *)&param_1[1].field_0x2f0;
      break;
    case 5:
      iVar1 = *(int *)&param_1[1].field_0x2ec;
      break;
    default:
      goto switchD_00428846_default;
    }
    *param_2 = iVar1;
  }
switchD_00428846_default:
  iVar1 = *param_2;
  if ((((iVar1 != *(int *)&param_1[1].field_0x2d8) && (iVar1 != *(int *)&param_1[1].field_0x2dc)) &&
      (iVar1 != *(int *)&param_1[1].field_0x2e0)) &&
     (((iVar1 != *(int *)&param_1[1].field_0x2e4 && (iVar1 != *(int *)&param_1[1].field_0x2ec)) &&
      (iVar1 != *(int *)&param_1[1].field_0x2f0)))) {
    return;
  }
  local_14 = (float)param_2[0xb];
  if (*(int *)&param_1[1].field_0x2f0 == *param_2) {
    local_14 = 0.05;
  }
  if (*(int *)&param_1[1].field_0x2ec == *param_2) {
    local_14 = 0.02;
  }
  if (*(int *)&g_CGamePtr->field_0x204 != 0) {
    local_14 = 1.0;
  }
  if (*(int *)&g_CGamePtr->field_0x14 == 0) {
    local_14 = 0.0;
  }
  iVar1 = core_actor_cpp_FUN_0040cf40(local_14);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_FUN_00414550
                          ((CVector3f *)&param_1->field_0x20,
                           (UOrientationVector *)&param_1->field_0x30,(CVector3f *)(param_2 + 3),
                           (CDemonActor *)param_1,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_FUN_00430590(param_1,body_part,*param_2,1);
    if (*param_2 == *(int *)&param_1[1].field_0x2d8) {
      core_charactr_cpp_FUN_00430590(param_1,body_part,*(int *)&param_1[1].field_0x2dc,1);
    }
    if (*(int *)&param_1[1].field_0x2e0 == *param_2) {
      core_charactr_cpp_FUN_00430590(param_1,body_part,*(int *)&param_1[1].field_0x2e4,1);
    }
    if (*(int *)&param_1[1].field_0x2ec == *param_2) {
      initial_velocity = (CVector3f *)(param_2 + 3);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x2e0,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x2e4,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x2d8,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x2dc,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x2f0,initial_velocity,1);
    }
    core_charactr_cpp_FUN_00434810(param_1,"limb?.wav");
    core_bodypart_cpp_FUN_004157c0(body_part);
    if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x2f0 * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)_DAT_005b7e37);
    if (*(int *)&param_1[1].field_0x2e8 < 0) {
      param_2[1] = 0x4479c000;
      return;
    }
  }
  return;
}
