// Name: core_charactr.cpp_FUN_004319e0
// Address: 004319e0
// Address Range: [[004319e0, 00431c22]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004319e0(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004319e0(CCharacter *param_1,int *param_2)

{
  uint uVar1;
  CVector3f *impact_point;
  byte bVar2;
  float10 fVar3;
  uint auStackY_1040 [1012];
  float flame_scale;
  int include_hero;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34 [2];
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  if (*(int *)&param_1->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"?ShotInvulnerable" + 1);
    return;
  }
  if ((float)param_2[1] <= 0.0) {
    return;
  }
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT((float)param_2[5] * (float)param_2[5] +
                 (float)param_2[3] * (float)param_2[3] + (float)param_2[4] * (float)param_2[4])) {
    impact_point = (CVector3f *)(param_2 + 3);
  }
  uVar1 = param_2[0xc];
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_FUN_00430c90(param_1,impact_point,param_2[6]);
      }
      goto LAB_00431a64;
    }
    if (4 < uVar1) {
      core_charactr_cpp_FUN_00430c40(param_1);
      goto LAB_00431a64;
    }
LAB_00431bb2:
    core_charactr_cpp_CCharacter_dismember_FUN_00430d90(param_1,impact_point,(float)param_2[6],0);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00431a64;
        goto LAB_00431bb2;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_FUN_00430440(param_1);
        goto LAB_00431a64;
      }
      if (uVar1 != 0x6a) goto LAB_00431a64;
    }
    *(uint *)&param_1->field_0xb9f0 = 0x40400000;
  }
LAB_00431a64:
  if (param_2[10] == 5) {
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 7);
    include_hero = 0;
    flame_scale = 1.0;
    local_4c._0_4_ = local_34[0]._0_4_;
    *(uint *)((int)&local_4c + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)local_34 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_charactr_cpp_FUN_004308a0(param_1,&local_4c,*param_2,0,flame_scale,include_hero);
  }
  if (param_2[10] == 9) {
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 7);
    *(uint *)&param_1->field_0xb9f0 = 0x3f000000;
  }
  if (0.0 < (float)param_2[2]) {
    fVar3 = (float10)(float)param_2[1] * (float10)(float)param_2[2];
    round();
    local_1c = (int)ROUND(fVar3);
    local_18 = local_1c + 1;
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 7);
    local_40._0_4_ = local_58._0_4_;
    *(uint *)((int)local_34 + (uint)bVar2 * -8 + -8) =
         *(uint *)((int)&local_58 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -4) =
         *(uint *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_gore_cpp_FUN_004e6060
              (g_CGorePtr,&local_40,(CVector3f *)(param_2 + 3),local_18,
               *(EBloodType *)&param_1->field_0x27a0);
  }
  if ((*(int *)&param_1->field_0x2540 == 1) &&
     (param_1 != *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
    core_game_cpp_FUN_004d6340
              (g_CGamePtr,&param_1->field_0x2544,
               *(float *)&param_1->field_0x2538 / *(float *)&param_1->field_0x253c,5.0);
  }
  if (0.0 < *(float *)&param_1->field_0x2538) {
    return;
  }
  core_charactr_cpp_FUN_004328c0(param_1);
  return;
}
