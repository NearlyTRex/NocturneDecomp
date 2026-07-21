// Name: core_enemy.cpp_CEnemy_onVictimLost_FUN_0047a120
// Address: 0047a120
// Address Range: [[0047a120, 0047a141]]
// Convention: unknown
// Signature: void core_enemy_cpp_CEnemy_onVictimLost_FUN_0047a120(int param_1,int param_2)

#include "nocturne.h"

void core_enemy_cpp_CEnemy_onVictimLost_FUN_0047a120(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xbca4)) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  return;
}
