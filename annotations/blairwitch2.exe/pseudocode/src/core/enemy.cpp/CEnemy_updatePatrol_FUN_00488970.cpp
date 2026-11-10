// Name: core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970
// Address: 00488970
// Address Range: [[00488970, 004889c1]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x1f0 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,"Capture");
    if (iVar1 == 0) {
      iVar1 = core_charactr_cpp_FUN_00429f20(this_ptr,delta_time,this_ptr->patrol_name_pattern);
      return iVar1;
    }
  }
  iVar1 = core_charactr_cpp_FUN_00429f20(this_ptr,delta_time,0);
  return iVar1;
}
