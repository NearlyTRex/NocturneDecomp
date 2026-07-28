// Name: core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
// Address: 0047a030
// Address Range: [[0047a030, 0047a081]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  if (*(int *)(0x01C775EC + 0x1d4) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,"Capture");
    if (iVar1 == 0) {
      iVar1 = core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
                        (&this_ptr->base,delta_time,this_ptr->patrol_name_pattern);
      return iVar1;
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
                    (&this_ptr->base,delta_time,(char *)0x0);
  return iVar1;
}
