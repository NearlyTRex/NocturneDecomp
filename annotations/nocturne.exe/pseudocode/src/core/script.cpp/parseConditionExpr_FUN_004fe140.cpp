// Name: core_script.cpp_parseConditionExpr_FUN_004fe140
// Address: 004fe140
// Address Range: [[004fe140, 004fe17a]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_parseConditionExpr_FUN_004fe140(char **cursor,char *out_buffer)

#include "nocturne.h"

char * __cdecl core_script_cpp_parseConditionExpr_FUN_004fe140(char **cursor,char *out_buffer)

{
  char *pcVar1;
  
  pcVar1 = core_script_cpp_parseArgument_FUN_004fe090(cursor,out_buffer,100);
  if ((pcVar1 == (char *)0x0) && (g_INT_01e56418 != 0)) {
    pcVar1 = core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                       (g_CEventList_PTR_005b7650,out_buffer);
    return pcVar1;
  }
  return pcVar1;
}
