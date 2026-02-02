// Name: core_script.cpp_parseConditionExpr_FUN_005594a0
// Address: 005594a0
// Address Range: [[005594a0, 005594da]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_parseConditionExpr_FUN_005594a0(char **cursor,char *out_buffer)

#include "nocturne.h"

void __cdecl core_script_cpp_parseConditionExpr_FUN_005594a0(char **cursor,char *out_buffer)

{
  char *pcVar1;
  
  pcVar1 = core_script_cpp_parseArgument_FUN_005593f0(cursor,out_buffer,100);
  if ((pcVar1 == (char *)0x0) && (g_ScriptEventsEnabled != 0)) {
    core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
    return;
  }
  return;
}
