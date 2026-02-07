// Name: core_enemy.cpp_CEnemy_FUN_004a9880
// Address: 004a9880
// Address Range: [[004a9880, 004a9927]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_FUN_004a9880(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a9880(CEnemy *this_ptr)

{
  int in_stack_00000010;
  
  if (*(int *)(this_ptr->unk2 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(this_ptr->unk2 + 4) + 0x154) + 0x114))();
    if (0.0 < (double)*(float *)(in_stack_00000010 + 4)) {
      round
                ((double)*(float *)(in_stack_00000010 + 4) * 1.2 * 0.25);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      return 1;
    }
  }
  return 0;
}
