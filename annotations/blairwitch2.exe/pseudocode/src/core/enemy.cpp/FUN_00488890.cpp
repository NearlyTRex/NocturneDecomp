// Name: core_enemy.cpp_FUN_00488890
// Address: 00488890
// Address Range: [[00488890, 00488939]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00488890(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_enemy_cpp_FUN_00488890(CCharacter *param_1,SDamageInfo *param_2)

{
  int iVar1;
  
  if (*(int *)&param_1->field_0x281c != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0
              (0x01C38BC0,"@@ShotInvulnerable" + 2);
    return;
  }
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x100))(param_1);
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
  if (0.0 < *(float *)(param_2 + 4)) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)(param_2 + 0x38),g_CCharacterClassInfo.name_hash);
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(param_2 + 0x34),g_CCharacterClassInfo.name_hash);
    }
    if (iVar1 != 0) {
      *(uint *)&param_1[1].field_0x1c = 0x41700000;
      *(uint *)&param_1[1].field_0xc = 1;
      *(int *)&param_1[1].field_0x18 = iVar1;
      return;
    }
  }
  return;
}
