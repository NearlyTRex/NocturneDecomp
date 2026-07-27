// Name: core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
// Address: 00479f70
// Address Range: [[00479f70, 00479ff6]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  if (0.0 < *(float *)(param_2 + 4)) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(param_2 + 0x38),g_CCharacterActorType_00765a60.name_hash);
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(param_2 + 0x34),g_CCharacterActorType_00765a60.name_hash);
    }
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xbca8) = 0x41700000;
      *(uint *)(param_1 + 0xbc98) = 1;
      *(int *)(param_1 + 0xbca4) = iVar1;
      return;
    }
  }
  return;
}
