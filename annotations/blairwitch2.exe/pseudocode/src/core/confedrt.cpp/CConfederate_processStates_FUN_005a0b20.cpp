// Name: core_confedrt.cpp_CConfederate_processStates_FUN_005a0b20
// Address: 005a0b20
// Address Range: [[005a0b20, 005a0bc3]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(CConfederate *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(CConfederate *this_ptr,float delta_time,int mode)

{
  SStateMachine *this_ptr_00;
  int iVar1;
  
  if (mode == 0) {
    core_muzzle_cpp_SStateMachine_addState_FUN_0059d650
              (&(this_ptr->base).state_machine,"RangeAttack");
  }
  else {
    core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0(&this_ptr->base,delta_time,mode);
    if ((mode == 1) &&
       (iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0
                          (&(this_ptr->base).state_machine,"RangeAttack"), iVar1 != 0)) {
      core_confedrt_cpp_CConfederate_processRangeAttackState_FUN_005a1030(this_ptr,delta_time);
      return;
    }
  }
  this_ptr_00 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    core_muzzle_cpp_SStateMachine_addState_FUN_0059d650(this_ptr_00,"MeleeAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"MeleeAttack")
     , iVar1 != 0)) {
    core_confedrt_cpp_CConfederate_processMeleeAttackState_FUN_005a1180(this_ptr,delta_time);
    return;
  }
  return;
}
