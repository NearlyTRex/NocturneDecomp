// Name: core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0
// Address: 004a0fe0
// Address Range: [[004a0fe0, 004a1031]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  if (g_CGamePtr->freeze_enemies_enabled == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventListPtr,"Capture");
    if (iVar1 == 0) {
      iVar1 = core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_00433f10
                        (&this_ptr->base,delta_time,this_ptr->patrol_name_pattern);
      return iVar1;
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_00433f10
                    (&this_ptr->base,delta_time,(char *)0x0);
  return iVar1;
}
