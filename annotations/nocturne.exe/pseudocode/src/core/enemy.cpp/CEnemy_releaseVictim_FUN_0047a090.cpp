// Name: core_enemy.cpp_CEnemy_releaseVictim_FUN_0047a090
// Address: 0047a090
// Address Range: [[0047a090, 0047a11d]]
// Convention: unknown
// Signature: void core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(int param_1)

#include "nocturne.h"

void core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(int param_1)

{
  int iVar1;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iVar1 = *(int *)(param_1 + 0xbca4);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xec))(iVar1);
    if (iVar1 == param_1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))(*(int *)(param_1 + 0xbca4))
      ;
      if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x2400) != 0)) {
        uStack_8 = 0xba83126f;
        uStack_10 = 0;
        uStack_c = 0;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&uStack_10);
      }
      *(uint *)(param_1 + 0xbca4) = 0;
      return;
    }
  }
  return;
}
