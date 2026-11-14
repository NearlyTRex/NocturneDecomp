// Name: core_script.cpp_CScript_resetDialogState_FUN_0054ae10
// Address: 0054ae10
// Address Range: [[0054ae10, 0054ae31]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_resetDialogState_FUN_0054ae10(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_resetDialogState_FUN_0054ae10(CScript *this_ptr)

{
  core_script_cpp_CScript_setSpeaker_FUN_0054aca0(this_ptr,this_ptr->who_is_speaking);
  this_ptr->cmd_timer = 0.0;
  this_ptr->dialog_wav_time = 0.0;
  return;
}
