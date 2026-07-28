// Name: core_script.cpp_FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00504d81]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00504d60(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00504d60(CScript *param_1)

{
  core_script_cpp_CScript_setSpeaker_FUN_00504bf0(param_1,param_1->who_is_speaking);
  (param_1->script_text).vtable = (CStrList_vtable *)0x0;
  param_1->next_cmd = 0;
  return;
}
