// Name: core_enemy.cpp_CEnemy_setVictim_FUN_00479f50
// Address: 00479f50
// Address Range: [[00479f50, 00479f68]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00479f50(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00479f50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xbca8) = 0;
  *(uint *)(param_1 + 0xbd1c) = param_2;
  return;
}
