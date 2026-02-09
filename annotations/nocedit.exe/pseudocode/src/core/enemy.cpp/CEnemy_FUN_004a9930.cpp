// Name: core_enemy.cpp_CEnemy_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a99c7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_FUN_004a9930(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a9930(CEnemy *this_ptr)

{
  int in_stack_00000010;
  
  if (this_ptr->victim != (CDemonActor *)0x0) {
    (*(((this_ptr->victim->vtable)._uc)->_uc).cfunc12)();
    if (0.0 < (double)*(float *)(in_stack_00000010 + 4)) {
      round
                ((double)*(float *)(in_stack_00000010 + 4) * 1.2 * 0.25);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      return 1;
    }
  }
  return 0;
}
