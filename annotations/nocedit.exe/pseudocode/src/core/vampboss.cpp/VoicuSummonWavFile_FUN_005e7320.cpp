// Name: core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320
// Address: 005e7320
// Address Range: [[005e7320, 005e7380]]
// Convention: unknown
// Signature: void core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_VoicuSummonWavFile(uint param_1) */

void core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CTVBatClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[0x8f].orient_matrix.m[0].x != 0.0)) {
      core_tvbat_cpp_FUN_005e4d70();
    }
    iVar3 = iVar3 + 4;
  }
  return;
}
