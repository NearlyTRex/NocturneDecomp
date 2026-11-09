// Name: core_moocow.cpp_FUN_00521810
// Address: 00521810
// Address Range: [[00521810, 00521989]]
// Convention: unknown
// Signature: void core_moocow_cpp_FUN_00521810(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moocow_cpp_FUN_00521810(CCharacter *param_1,int *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((*param_2 == *(int *)&param_1[1].field_0xc) || (*param_2 == *(int *)&param_1[1].field_0x20)) {
    local_14 = (float)param_2[0xb];
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      initial_velocity = (CVector3f *)(param_2 + 3);
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&param_1->field_0x20,
                             (UOrientationVector *)&param_1->field_0x30,initial_velocity,
                             (CDemonActor *)param_1,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_FUN_00431210(param_1,body_part,*param_2,0);
      if (*param_2 == *(int *)&param_1[1].field_0x20) {
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0xc,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x10,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x14,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x18,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0(param_1,*(int *)&param_1[1].field_0x1c,initial_velocity,0);
      }
      core_charactr_cpp_FUN_004352e0(param_1,"limb?.wav");
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005ea3ea);
    }
  }
  if (*(int *)&param_1[1].field_0xc == *param_2) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ea3fa);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ea3f2);
  return;
}
