// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0
// Address: 004282d0
// Address Range: [[004282d0, 0042850a]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(int param_1,float *param_2,float *param_3,int param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(int param_1,float *param_2,float *param_3,int param_4,uint *param_5)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  float10 fVar4;
  uint uVar5;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte auStack_6c [8];
  byte auStack_64 [4];
  byte local_60 [8];
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [12];
  int iStack_1c;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_48,param_2);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_54,param_3);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xa8))(param_1,&local_48,&local_54,local_60);
  if (iVar2 != 0) {
    if (param_5 != (uint *)0x0) {
      puVar3 = (uint *)
               core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (param_1,auStack_6c,local_60);
      if (param_5 != puVar3) {
        *param_5 = *puVar3;
        param_5[1] = puVar3[1];
        param_5[2] = puVar3[2];
      }
    }
    if (0.0 < *(float *)(param_4 + 4)) {
      fStack_78 = *param_3 - *param_2;
      fStack_74 = param_3[1] - param_2[1];
      fVar1 = SQRT((param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) +
                   fStack_78 * fStack_78 + fStack_74 * fStack_74);
      uVar5 = 0x42838f;
      fVar4 = (float10)round
                                 ((float10)*(float *)(param_4 + 4) * (float10)_DAT_0057a03a);
      iStack_1c = (int)ROUND(fVar4);
      iVar2 = iStack_1c + 1;
      if (fVar1 <= 0.0) {
        fStack_78 = 0.0;
        fStack_7c = 0.0;
        fStack_74 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fStack_7c = fStack_7c * fVar1;
        fStack_78 = fStack_78 * fVar1;
        fStack_74 = fStack_74 * fVar1;
      }
      fStack_40 = fStack_7c * _DAT_0057a042;
      fStack_3c = fStack_78 * _DAT_0057a042;
      fStack_38 = fStack_74 * _DAT_0057a042;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_28,auStack_64,uVar5)
      ;
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (0x01C78C7C,auStack_28,&fStack_40,iVar2,*(uint *)(param_1 + 0x2608));
    }
    fStack_34 = (fStack_4c + fStack_58) * _DAT_0057a046;
    fStack_30 = (local_48 + local_54) * _DAT_0057a046;
    fStack_2c = (fStack_44 + fStack_50) * _DAT_0057a046;
    if ((float *)(param_4 + 0x1c) != &fStack_34) {
      *(float *)(param_4 + 0x1c) = fStack_34;
      *(float *)(param_4 + 0x20) = fStack_30;
      *(float *)(param_4 + 0x24) = fStack_2c;
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,param_4);
    return 1;
  }
  *(uint *)(param_4 + 4) = 0;
  return 0;
}
