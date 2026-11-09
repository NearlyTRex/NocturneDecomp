// Name: core_charactr.cpp_FUN_00430d60
// Address: 00430d60
// Address Range: [[00430d60, 00430ff5]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00430d60(CCharacter *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00430d60(CCharacter *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  uint auStackY_1040 [1011];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_58;
  uint local_4c;
  CVector3f local_40;
  CVector3f local_34 [2];
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  if (*(int *)&param_1->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"?ShotInvulnerable" + 1);
    return;
  }
  if ((float)param_2[1] <= 0.0) {
    return;
  }
  *(uint *)&param_1->field_0x3268 = 1;
  puVar2 = (uint *)0x0;
  if (0.0 < SQRT((float)param_2[5] * (float)param_2[5] +
                 (float)param_2[3] * (float)param_2[3] + (float)param_2[4] * (float)param_2[4])) {
    puVar2 = param_2 + 3;
  }
  uVar1 = param_2[0xc];
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_FUN_0042ffe0(param_1,puVar2,param_2[6]);
      }
      goto LAB_00430dee;
    }
    if (4 < uVar1) {
      core_charactr_cpp_FUN_0042ff70(param_1);
      goto LAB_00430dee;
    }
LAB_00430f85:
    core_charactr_cpp_FUN_004300e0(param_1,puVar2,param_2[6],1);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00430dee;
        goto LAB_00430f85;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_FUN_0042f770(param_1);
        goto LAB_00430dee;
      }
      if (uVar1 != 0x6a) goto LAB_00430dee;
    }
    *(uint *)&param_1->field_0xbc70 = 0x40000000;
  }
LAB_00430dee:
  if (param_2[10] == 5) {
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 7);
    uVar7 = 0x40000000;
    uVar6 = 0;
    uVar5 = 0x3f800000;
    local_58 = local_4c;
    *(uint *)((int)&stack0xffffffac + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)((int)local_34 + (uint)bVar3 * -8 + -0x14);
    *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c) =
         *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x10);
    core_charactr_cpp_FUN_0042fbd0(param_1,&stack0xffffffa8,*param_2,0,uVar5,uVar6,uVar7);
  }
  if (param_2[10] == 9) {
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 7);
    *(uint *)&param_1->field_0xbc70 = 0x3f000000;
  }
  if (0.0 < (float)param_2[2]) {
    fVar4 = (float10)(float)param_2[1] * (float10)(float)param_2[2];
    round();
    local_18 = (int)ROUND(fVar4);
    local_1c = local_18 + 1;
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 7);
    local_34[0]._0_4_ = local_40._0_4_;
    *(uint *)((int)local_34 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)local_34 + (uint)bVar3 * -8 + -8);
    *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4);
    core_gore_cpp_FUN_004ce9c0
              (g_CGorePtr,local_34,(CVector3f *)(param_2 + 3),local_1c,
               *(EBloodType *)&param_1->field_0x27a0);
  }
  if ((*(int *)&param_1->field_0x2540 == 1) &&
     (param_1 != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
    core_game_cpp_FUN_004bd930
              (g_CGamePtr,&param_1->field_0x2544,
               *(float *)&param_1->field_0x2538 / *(float *)&param_1->field_0x253c,5.0);
  }
  if ((param_1 != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) && (param_2[0xc] == 0x6f)) {
    core_game_cpp_FUN_004bd930
              (g_CGamePtr,&param_1->field_0x2544,
               *(float *)&param_1->field_0x2538 / *(float *)&param_1->field_0x253c,5.0);
  }
  if (0.0 < *(float *)&param_1->field_0x2538) {
    return;
  }
  core_charactr_cpp_FUN_00431ce0(param_1);
  return;
}
