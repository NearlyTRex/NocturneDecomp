// Name: core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
// Address: 005e7410
// Address Range: [[005e7410, 005e7470]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_VoicuSummonWavFile2(uint param_1) */

void __cdecl core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410(void)

{
  CEmitter *this_ptr;
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
    this_ptr = (CEmitter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                          g_CEmitterClassInfo.name_hash);
    if ((this_ptr != (CEmitter *)0x0) && (this_ptr->emitter_type == 2)) {
      core_emitter_cpp_CEmitter_FUN_004a7e80(this_ptr);
    }
    iVar1 = iVar1 + 4;
  }
  return;
}
