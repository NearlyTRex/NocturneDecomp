// Name: core_script.cpp_CScript_FUN_005602b0
// Address: 005602b0
// Address Range: [[005602b0, 005602d1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005602b0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005602b0(CScript *this_ptr)

{
  core_script_cpp_CScript_FUN_00560140(this_ptr,this_ptr->who_is_speaking);
  this_ptr->cmd_timer = 0.0;
  this_ptr->dialog_wav_time = 0.0;
  return;
}
