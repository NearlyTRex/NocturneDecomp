// Name: core_script.cpp_FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00504d81]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00504d60(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00504d60(CScript *param_1)

{
  core_script_cpp_CScript_setSpeaker_FUN_00504bf0(param_1,param_1->who_is_speaking);
  param_1->cmd_timer = 0.0;
  param_1->dialog_wav_time = 0.0;
  return;
}
