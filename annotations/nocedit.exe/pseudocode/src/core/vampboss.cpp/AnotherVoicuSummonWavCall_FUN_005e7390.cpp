// Name: core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390
// Address: 005e7390
// Address Range: [[005e7390, 005e7406]]
// Convention: unknown
// Signature: void core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_AnotherVoicuSummonWavCall(uint param_1) */

void core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar4 = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4),
                        g_CDripClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[2].location.position.y == 2.8026e-45)) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar2 == 0) {
        core_drip_cpp_FUN_0048e6b0();
      }
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
