// Name: core_script.cpp_parseConditionExpr_FUN_00528970
// Address: 00528970
// Address Range: [[00528970, 005289aa]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_parseConditionExpr_FUN_00528970(char **cursor,char *out_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_script_cpp_parseConditionExpr_FUN_00528970(char **cursor,char *out_buffer)

{
  char *pcVar1;
  
  pcVar1 = core_script_cpp_parseArgument_FUN_005288c0(cursor,out_buffer,100);
  if ((pcVar1 == (char *)0x0) && (_DAT_01ed6808 != 0)) {
    pcVar1 = core_event_cpp_CEventList_validateCondition_FUN_00491b00(0x01C6E360,out_buffer);
    return pcVar1;
  }
  return pcVar1;
}
