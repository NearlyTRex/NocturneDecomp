// Name: core_script.cpp_CScript_processTimer_FUN_00530310
// Address: 00530310
// Address Range: [[00530310, 0053038f]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_processTimer_FUN_00530310(CScript *this_ptr,float delta_time,float *timer_value)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_processTimer_FUN_00530310(CScript *this_ptr,float delta_time,float *timer_value)

{
  if (delta_time < 0.0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\script.cpp";
    g_INT_01d71de4 = 0xf83;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CScript::processTimer - invalidTimeToWait");
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
