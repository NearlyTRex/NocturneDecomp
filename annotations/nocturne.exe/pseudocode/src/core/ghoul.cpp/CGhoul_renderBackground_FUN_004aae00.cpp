// Name: core_ghoul.cpp_CGhoul_renderBackground_FUN_004aae00
// Address: 004aae00
// Address Range: [[004aae00, 004aae27]]
// Convention: unknown
// Signature: void core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CEnemy *param_1,int param_2)

#include "nocturne.h"

void core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CEnemy *param_1,int param_2)

{
  if ((param_1[1].base.base.location.position.x == 0.0) &&
     (*(int *)(param_1[1].base.base.actor_name + 0x1c) < 1)) {
    core_enemy_cpp_CEnemy_renderBackground_FUN_0047a000(param_1,param_2);
    return;
  }
  return;
}
