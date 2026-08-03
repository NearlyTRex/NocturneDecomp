// Name: core_script.cpp_CScript_processTimer_FUN_00504b70
// Address: 00504b70
// Address Range: [[00504b70, 00504bef]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(CScript *this_ptr,float delta_time,float *timer_value)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(CScript *this_ptr,float delta_time,float *timer_value)

{
  if (delta_time < 0.0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\script.cpp";
    g_INT_01cc4804 = 0xdf7;
    core_main_c_FUN_004c8440("CScript::processTimer - invalidTimeToWait");
  }
  if (this_ptr->cmd_timer < 0.0) {
    this_ptr->cmd_timer = delta_time;
  }
  if (this_ptr->cmd_timer <= *timer_value) {
    *timer_value = *timer_value - this_ptr->cmd_timer;
    this_ptr->cmd_timer = 0.0;
    return 1;
  }
  this_ptr->cmd_timer = this_ptr->cmd_timer - *timer_value;
  *timer_value = 0.0;
  return 0;
}
