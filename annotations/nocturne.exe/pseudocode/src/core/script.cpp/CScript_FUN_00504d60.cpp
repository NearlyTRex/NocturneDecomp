// Name: core_script.cpp_CScript_FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00504d81]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00504d60(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00504d60(CScript *this_ptr)

{
  core_script_cpp_CScript_setSpeaker_FUN_00504bf0(this_ptr,this_ptr->who_is_speaking);
  this_ptr->cmd_timer = 0.0;
  this_ptr->dialog_wav_time = 0.0;
  return;
}
