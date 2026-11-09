// Name: unkafter_zombiepr.cpp_FUN_0058f630
// Address: 0058f630
// Address Range: [[0058f630, 0058f981]]
// Convention: unknown
// Signature: void unkafter_zombiepr_cpp_FUN_0058f630(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_zombiepr_cpp_FUN_0058f630(CCharacter *param_1,int *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  float fVar2;
  CBodyPart *body_part;
  float local_1c;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)&param_1[1].field_0x314;
      break;
    case 1:
      iVar1 = *(int *)&param_1[1].field_0x318;
      break;
    case 2:
      iVar1 = *(int *)&param_1[1].field_0x31c;
      break;
    case 3:
      iVar1 = *(int *)&param_1[1].field_0x320;
      break;
    case 4:
      iVar1 = *(int *)&param_1[1].field_0x33c;
      break;
    case 5:
      iVar1 = *(int *)&param_1[1].field_0x338;
      break;
    default:
      goto switchD_0058f669_default;
    }
    *param_2 = iVar1;
  }
switchD_0058f669_default:
  iVar1 = *param_2;
  if (((((iVar1 != *(int *)&param_1[1].field_0x314) && (iVar1 != *(int *)&param_1[1].field_0x318))
       && (iVar1 != *(int *)&param_1[1].field_0x31c)) &&
      ((iVar1 != *(int *)&param_1[1].field_0x320 && (iVar1 != *(int *)&param_1[1].field_0x338)))) &&
     (iVar1 != *(int *)&param_1[1].field_0x33c)) {
    return;
  }
  if (*(int *)&param_1[1].field_0x338 == *param_2) {
    fVar2 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
    if ((float)_DAT_005d8cb8 <= fVar2) {
      if (_DAT_005d8cc0 <= (double)fVar2) goto LAB_0058f6c3;
      iVar1 = *(int *)&param_1[1].field_0x31c;
    }
    else {
      iVar1 = *(int *)&param_1[1].field_0x314;
    }
    *param_2 = iVar1;
  }
LAB_0058f6c3:
  local_1c = (float)param_2[0xb];
  if (*(int *)&param_1[1].field_0x33c == *param_2) {
    local_1c = 0.05;
  }
  if (*(int *)&param_1[1].field_0x338 == *param_2) {
    local_1c = 0.06;
  }
  if (*(int *)&g_CGamePtr->field_0x204 != 0) {
    local_1c = 1.0;
  }
  if (*(int *)&g_CGamePtr->field_0x14 == 0) {
    local_1c = 0.0;
  }
  iVar1 = core_actor_cpp_FUN_0040cf40(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_FUN_00414550
                          ((CVector3f *)&param_1->field_0x20,
                           (UOrientationVector *)&param_1->field_0x30,(CVector3f *)(param_2 + 3),
                           (CDemonActor *)param_1,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_FUN_00430590(param_1,body_part,*param_2,1);
    if (*param_2 == *(int *)&param_1[1].field_0x314) {
      core_charactr_cpp_FUN_00430590(param_1,body_part,*(int *)&param_1[1].field_0x318,1);
    }
    if (*(int *)&param_1[1].field_0x31c == *param_2) {
      core_charactr_cpp_FUN_00430590(param_1,body_part,*(int *)&param_1[1].field_0x320,1);
    }
    if (*(int *)&param_1[1].field_0x338 == *param_2) {
      initial_velocity = (CVector3f *)(param_2 + 3);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x31c,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x320,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x314,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x318,initial_velocity,1);
      core_charactr_cpp_FUN_00430520(param_1,*(int *)&param_1[1].field_0x33c,initial_velocity,1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
    }
    core_charactr_cpp_FUN_00434810(param_1,"limb?.wav");
    core_bodypart_cpp_FUN_004157c0(body_part);
    if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x33c * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d8cc8);
    if ((*param_2 == *(int *)&param_1[1].field_0x31c) ||
       (*param_2 == *(int *)&param_1[1].field_0x320)) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
    }
    if ((*param_2 == *(int *)&param_1[1].field_0x314) ||
       (*param_2 == *(int *)&param_1[1].field_0x318)) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
      return;
    }
  }
  return;
}
