// Name: core_enemy.cpp_FUN_00489b80
// Address: 00489b80
// Address Range: [[00489b80, 00489c85]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00489b80(int param_1,int param_2)

#include "nocturne.h"

void core_enemy_cpp_FUN_00489b80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@@ShotInvulnerable" + 2);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  core_charactr_cpp_FUN_00430d60(param_1,param_2);
  if (0.0 < *(float *)(param_2 + 4)) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(param_2 + 0x38),g_CCharacterClassInfo.name_hash);
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(param_2 + 0x34),g_CCharacterClassInfo.name_hash);
    }
    if (iVar1 != 0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CBugsClassInfo.name_hash);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0xcde8) = 0x41700000;
        *(uint *)(param_1 + 0xcdd8) = 1;
        *(int *)(param_1 + 0xcde4) = iVar1;
      }
    }
  }
  if (((((*(uint *)(param_1 + 0x3254) & 0x7fffffff) != 0) && (*(int *)(param_1 + 0x3258) == 0)) &&
      (*(int *)(param_2 + 0x30) == 0x71)) && (*(float *)(param_1 + 0x2538) <= 0.0)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0x325c));
    core_charactr_cpp_FUN_0042ff70(param_1);
    return;
  }
  return;
}
