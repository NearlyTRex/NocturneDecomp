// Name: core_script.cpp_CScript_resetDialogState_FUN_00529b00
// Address: 00529b00
// Address Range: [[00529b00, 00529b21]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_resetDialogState_FUN_00529b00(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_resetDialogState_FUN_00529b00(CScript *this_ptr)

{
  core_script_cpp_CScript_setSpeaker_FUN_00529990(this_ptr,this_ptr->who_is_speaking);
  this_ptr->cmd_timer = 0.0;
  this_ptr->dialog_wav_time = 0.0;
  return;
}
