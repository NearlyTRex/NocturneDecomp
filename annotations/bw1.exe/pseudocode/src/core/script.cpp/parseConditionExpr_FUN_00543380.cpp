// Name: core_script.cpp_parseConditionExpr_FUN_00543380
// Address: 00543380
// Address Range: [[00543380, 005433ba]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_parseConditionExpr_FUN_00543380(char **cursor,char *out_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_script_cpp_parseConditionExpr_FUN_00543380(char **cursor,char *out_buffer)

{
  char *pcVar1;
  
  pcVar1 = core_script_cpp_parseArgument_FUN_005432d0(cursor,out_buffer,100);
  if ((pcVar1 == (char *)0x0) && (_DAT_01e810a8 != 0)) {
    pcVar1 = core_event_cpp_CEventList_validateCondition_FUN_004a6c90(0x01C51D80,out_buffer);
    return pcVar1;
  }
  return pcVar1;
}
