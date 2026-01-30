// Name: core_script.cpp_CScript_processTimer_FUN_005600c0
// Address: 005600c0
// Address Range: [[005600c0, 0056013f]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_processTimer_FUN_005600c0(CScript *this_ptr,float param_2,float *param_3)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_processTimer_FUN_005600c0(CScript *this_ptr,float param_2,float *param_3)

{
  if (param_2 < 0.0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xdf7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::processTimer - invalidTimeToWait");
  }
  if (this_ptr->cmd_timer < 0.0) {
    this_ptr->cmd_timer = param_2;
  }
  if (this_ptr->cmd_timer <= *param_3) {
    *param_3 = *param_3 - this_ptr->cmd_timer;
    this_ptr->cmd_timer = 0.0;
    return 1;
  }
  this_ptr->cmd_timer = this_ptr->cmd_timer - *param_3;
  *param_3 = 0.0;
  return 0;
}
