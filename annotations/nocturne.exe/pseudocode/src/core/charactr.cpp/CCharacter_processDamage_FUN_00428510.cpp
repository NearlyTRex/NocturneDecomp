// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00428510
// Address: 00428510
// Address Range: [[00428510, 004286cd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00428510(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00428510(int param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float10 fVar4;
  uint uVar5;
  byte *puVar6;
  uint *puVar7;
  byte local_28 [8];
  byte auStack_20 [4];
  byte local_1c [8];
  int iStack_14;
  
  if ((float)param_2[1] <= 0.0) {
    return;
  }
  fVar1 = (float)param_2[3];
  pfVar3 = (float *)0x0;
  if (0.0 < SQRT((float)param_2[5] * (float)param_2[5] +
                 fVar1 * fVar1 + (float)param_2[4] * (float)param_2[4])) {
    pfVar3 = (float *)(param_2 + 3);
  }
  uVar2 = param_2[0xc];
  if (uVar2 < 6) {
    if (uVar2 < 4) {
      if (uVar2 == 3) {
        core_charactr_cpp_CCharacter_explode_FUN_00427ab0(param_1,pfVar3,param_2[6]);
      }
      goto LAB_00428579;
    }
    if (4 < uVar2) {
      core_charactr_cpp_FUN_00427a60(param_1);
      goto LAB_00428579;
    }
LAB_0042865c:
    core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,pfVar3,param_2[6],0);
  }
  else {
    if (6 < uVar2) {
      if (uVar2 < 0x68) {
        if (uVar2 != 7) goto LAB_00428579;
        goto LAB_0042865c;
      }
      if (uVar2 < 0x69) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(param_1);
        goto LAB_00428579;
      }
      if (uVar2 != 0x6a) goto LAB_00428579;
    }
    core_charactr_cpp_FUN_004286d0(param_1,0x40000000);
  }
LAB_00428579:
  if (param_2[10] == 5) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_28,param_2 + 7);
    core_charactr_cpp_FUN_00427730(param_1,local_28,*param_2,0,0x3f800000,0);
  }
  if (0.0 < (float)param_2[2]) {
    puVar7 = param_2 + 7;
    puVar6 = local_1c;
    uVar5 = 0x4285cc;
    fVar4 = (float10)round
                               ((float10)(float)param_2[1] * (float10)(float)param_2[2]);
    iStack_14 = (int)ROUND(fVar4);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,uVar5,puVar6,puVar7);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
              (INT_005b96c4,auStack_20,param_2 + 3,(int)ROUND(fVar4) + 1,
               *(uint *)(param_1 + 0x2608));
  }
  if ((*(int *)(param_1 + 0x243c) == 1) && (param_1 != *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8))) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (0x01C775EC,param_1 + 0x2440,
               *(float *)(param_1 + 0x2434) / *(float *)(param_1 + 0x2438),0x40a00000);
  }
  if (0.0 < *(float *)(param_1 + 0x2434)) {
    return;
  }
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(param_1);
  return;
}
