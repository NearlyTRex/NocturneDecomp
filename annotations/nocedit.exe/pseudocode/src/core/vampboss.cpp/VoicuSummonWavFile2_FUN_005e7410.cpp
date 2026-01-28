// Name: core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
// Address: 005e7410
// Address Range: [[005e7410, 005e7470]]
// Convention: unknown
// Signature: void core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_VoicuSummonWavFile2(uint param_1) */

void core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                        g_CEmitterClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (*(int *)pCVar1[1].actor_name == 2)) {
      core_emitter_cpp_FUN_004a7e80();
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
