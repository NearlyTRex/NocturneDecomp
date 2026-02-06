// Name: core_enemy.cpp_CEnemy_FUN_004a9fd0
// Address: 004a9fd0
// Address Range: [[004a9fd0, 004aa021]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fd0(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fd0(CEnemy *this_ptr)

{
  int iVar1;
  
  if (g_CGamePtr->debug_flag_2 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,"Capture");
    if (iVar1 == 0) {
      core_charactr_cpp_CCharacter_FUN_0042e050(&this_ptr->base);
      return;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042e050(&this_ptr->base);
  return;
}
