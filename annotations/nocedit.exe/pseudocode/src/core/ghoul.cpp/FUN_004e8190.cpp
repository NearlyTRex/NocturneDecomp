// Name: core_ghoul.cpp_FUN_004e8190
// Address: 004e8190
// Address Range: [[004e8190, 004e81b7]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_FUN_004e8190(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e8190(uint param_1, uint param_2)
    */

void __cdecl core_ghoul_cpp_FUN_004e8190(void)

{
  CEnemy *in_stack_00000004;
  
  if ((in_stack_00000004[1].base.base.location.position.z == 0.0) &&
     ((int)in_stack_00000004[1].base.base.location.position.y < 1)) {
    core_enemy_cpp_CEnemy_FUN_004a9fa0(in_stack_00000004);
    return;
  }
  return;
}
