// Name: core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
// Address: 0047a030
// Address Range: [[0047a030, 0047a081]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(0x01C775EC + 0x1d4) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,"Capture");
    if (iVar1 == 0) {
      core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
                (param_1,param_2,param_1 + 0xbcb0);
      return;
    }
  }
  core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(param_1,param_2,0);
  return;
}
