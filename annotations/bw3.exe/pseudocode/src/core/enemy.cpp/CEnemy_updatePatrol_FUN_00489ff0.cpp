// Name: core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0
// Address: 00489ff0
// Address Range: [[00489ff0, 0048a041]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x1f8 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,"@Capture" + 1);
    if (iVar1 == 0) {
      iVar1 = core_charactr_cpp_FUN_004333e0(this_ptr,delta_time,this_ptr->patrol_name_pattern);
      return iVar1;
    }
  }
  iVar1 = core_charactr_cpp_FUN_004333e0(this_ptr,delta_time,0);
  return iVar1;
}
