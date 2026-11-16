// Name: core_basicene.cpp_CBasicEnemy_setAIState_FUN_0059e7a0
// Address: 0059e7a0
// Address Range: [[0059e7a0, 0059e7b7]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_setAIState_FUN_0059e7a0(CBasicEnemy *this_ptr,char *state_name)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_setAIState_FUN_0059e7a0(CBasicEnemy *this_ptr,char *state_name)

{
  core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(&this_ptr->state_machine,state_name);
  return;
}
