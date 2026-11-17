// Name: core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970
// Address: 00488970
// Address Range: [[00488970, 004889c1]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  if (g_CGamePtr->freeze_enemies_enabled == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (g_CEventListPtr,"Capture");
    if (iVar1 == 0) {
      iVar1 = core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_00429f20
                        (&this_ptr->base,delta_time,this_ptr->patrol_name_pattern);
      return iVar1;
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_00429f20
                    (&this_ptr->base,delta_time,(char *)0x0);
  return iVar1;
}
