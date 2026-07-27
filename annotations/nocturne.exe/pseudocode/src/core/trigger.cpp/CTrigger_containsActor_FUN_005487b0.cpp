// Name: core_trigger.cpp_CTrigger_containsActor_FUN_005487b0
// Address: 005487b0
// Address Range: [[005487b0, 00548a41]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  byte auStack_94 [4];
  float fStack_90;
  float fStack_84;
  byte local_7c [24];
  byte auStack_64 [24];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte auStack_28 [28];
  
  if (param_2 != 0) {
    pfVar4 = (float *)(**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,local_7c);
    fStack_34 = *pfVar4 + pfVar4[3];
    fStack_30 = pfVar4[1] + pfVar4[4];
    fStack_4c = fStack_34 * 0.5f;
    fStack_48 = fStack_30 * 0.5f;
    fStack_2c = pfVar4[2] + pfVar4[5];
    fStack_44 = fStack_2c * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,&fStack_40,&fStack_4c);
    if (*(int *)(param_1 + 0x210) != 0) {
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (param_2,g_CCharacterActorType_00765a60.name_hash);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2408) == 0)) {
        return 0;
      }
      fStack_3c = *(float *)(param_2 + 0x24);
    }
    fVar1 = fStack_40 - *(float *)(param_1 + 0x20);
    fVar3 = fStack_3c - *(float *)(param_1 + 0x24);
    fVar2 = fStack_38 - *(float *)(param_1 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150)) {
      pfVar4 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                  (param_1,auStack_28,&fStack_40);
      if (&fStack_40 != pfVar4) {
        fStack_40 = *pfVar4;
        fStack_3c = pfVar4[1];
        fStack_38 = pfVar4[2];
      }
      if (*(int *)(param_1 + 0x168) == 0) {
        pfVar4 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_64);
        if (((((*pfVar4 <= fStack_40) && (pfVar4[1] <= fStack_3c)) && (pfVar4[2] <= fStack_38)) &&
            ((fStack_40 <= pfVar4[3] && (fStack_3c <= pfVar4[4])))) && (fStack_38 <= pfVar4[5])) {
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x168) != 1) {
          PTR_01cc4800 = "..\\core\\trigger.cpp";
          INT_01cc4804 = 0x37d;
          core_main_c_FUN_004c8440
                    ("CTrigger::containsActor - invalid trigger shape %d for %s",*(uint *)(param_1 + 0x168),param_1);
          INT_01cc4804 = 899;
          PTR_01cc4800 = "..\\core\\trigger.cpp";
          core_main_c_FUN_004c8440("Hell froze...");
          return 0;
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_94);
        if ((fStack_90 <= fStack_3c) && (fStack_3c <= fStack_84)) {
          if (fStack_40 * fStack_40 + fStack_38 * fStack_38 <=
              *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x160) * (float)0.25) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
