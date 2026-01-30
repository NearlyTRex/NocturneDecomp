// Name: core_script.cpp_CScript_FUN_00560140
// Address: 00560140
// Address Range: [[00560140, 00560159]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00560140(CScript *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00560140(CScript *this_ptr,int param_2)

{
  if (param_2 != this_ptr->who_is_speaking) {
    return;
  }
  this_ptr->who_is_speaking = 0;
  this_ptr->current_message = '\0';
  return;
}
