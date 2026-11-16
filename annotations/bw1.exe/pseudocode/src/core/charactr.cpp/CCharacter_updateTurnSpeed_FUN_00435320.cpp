// Name: core_charactr.cpp_CCharacter_updateTurnSpeed_FUN_00435320
// Address: 00435320
// Address Range: [[00435320, 0043537a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  
  if (g_CGamePtr->letterbox_mode == 0) {
    fVar1 = this_ptr->turn_rate;
  }
  else {
    fVar1 = this_ptr->cutscene_turn_rate;
  }
  this_ptr->turn_speed = fVar1 * delta_time;
  iVar2 = _strnicmp((this_ptr->model).model_name,"ghost",5);
  if (iVar2 != 0) {
    return;
  }
  this_ptr->turn_speed = this_ptr->ghost_turn_rate * delta_time;
  return;
}
