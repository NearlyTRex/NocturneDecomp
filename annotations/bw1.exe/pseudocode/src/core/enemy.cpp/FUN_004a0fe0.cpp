// Name: core_enemy.cpp_FUN_004a0fe0
// Address: 004a0fe0
// Address Range: [[004a0fe0, 004a1031]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_FUN_004a0fe0(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_enemy_cpp_FUN_004a0fe0(CEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x1f0 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"Capture");
    if (iVar1 == 0) {
      iVar1 = core_charactr_cpp_FUN_00433f10(this_ptr,delta_time,&this_ptr->field_0xc1f4);
      return iVar1;
    }
  }
  iVar1 = core_charactr_cpp_FUN_00433f10(this_ptr,delta_time,0);
  return iVar1;
}
