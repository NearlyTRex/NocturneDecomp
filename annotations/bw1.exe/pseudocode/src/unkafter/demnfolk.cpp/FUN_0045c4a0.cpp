// Name: unkafter_demnfolk.cpp_FUN_0045c4a0
// Address: 0045c4a0
// Address Range: [[0045c4a0, 0045c7af]]
// Convention: unknown
// Signature: void unkafter_demnfolk_cpp_FUN_0045c4a0(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_demnfolk_cpp_FUN_0045c4a0(CCharacter *param_1,int *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)&param_1[1].field_0x158;
      break;
    case 1:
      iVar1 = *(int *)&param_1[1].field_0x15c;
      break;
    case 2:
      iVar1 = *(int *)&param_1[1].field_0x160;
      break;
    case 3:
      iVar1 = *(int *)&param_1[1].field_0x164;
      break;
    case 4:
      iVar1 = *(int *)&param_1[1].field_0x170;
      break;
    case 5:
      iVar1 = *(int *)&param_1[1].field_0x16c;
      break;
    default:
      goto switchD_0045c4d6_default;
    }
    *param_2 = iVar1;
  }
switchD_0045c4d6_default:
  iVar1 = *param_2;
  if (((((iVar1 == *(int *)&param_1[1].field_0x158) || (iVar1 == *(int *)&param_1[1].field_0x15c))
       || (iVar1 == *(int *)&param_1[1].field_0x160)) ||
      ((iVar1 == *(int *)&param_1[1].field_0x164 || (iVar1 == *(int *)&param_1[1].field_0x16c)))) ||
     (iVar1 == *(int *)&param_1[1].field_0x170)) {
    local_14 = (float)param_2[0xb];
    if (*(int *)&param_1[1].field_0x170 == *param_2) {
      local_14 = 0.05;
    }
    if (*(int *)&param_1[1].field_0x16c == *param_2) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&param_1->field_0x20,
                             (UOrientationVector *)&param_1->field_0x30,(CVector3f *)(param_2 + 3),
                             (CDemonActor *)param_1,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_FUN_00431210(param_1,body_part,*param_2,0);
      if (*param_2 == *(int *)&param_1[1].field_0x158) {
        core_charactr_cpp_FUN_00431210(param_1,body_part,*(int *)&param_1[1].field_0x15c,0);
      }
      if (*(int *)&param_1[1].field_0x160 == *param_2) {
        core_charactr_cpp_FUN_00431210(param_1,body_part,*(int *)&param_1[1].field_0x164,0);
      }
      if (*(int *)&param_1[1].field_0x16c == *param_2) {
        initial_velocity = (CVector3f *)(param_2 + 3);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x160,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x164,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x158,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x15c,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x170,initial_velocity,0);
      }
      core_charactr_cpp_FUN_004352e0(param_1,"limb?.wav");
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x170 * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d8273);
      iVar1 = core_actor_cpp_FUN_0040cd00(0.2);
      if (((iVar1 != 0) || (*param_2 == *(int *)&param_1[1].field_0x170)) ||
         (*param_2 == *(int *)&param_1[1].field_0x16c)) {
        *(uint *)&g_CGamePtr->field_0x280 = 1;
      }
      if (*(int *)&param_1[1].field_0x168 < 0) {
        param_2[1] = 0x4479c000;
      }
    }
  }
  iVar1 = *param_2;
  if (iVar1 == *(int *)&param_1[1].field_0x170) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d8283);
    return;
  }
  if ((iVar1 != *(int *)&param_1[1].field_0x168) && (iVar1 != *(int *)&param_1[1].field_0x16c)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d827b);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
