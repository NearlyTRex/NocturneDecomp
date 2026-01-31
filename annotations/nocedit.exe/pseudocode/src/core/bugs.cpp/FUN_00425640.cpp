// Name: core_bugs.cpp_FUN_00425640
// Address: 00425640
// Address Range: [[00425640, 00425659]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00425640(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_00425640(uint param_1, uint param_2)
    */

void __cdecl core_bugs_cpp_FUN_00425640(void)

{
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  
  in_stack_00000008->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
