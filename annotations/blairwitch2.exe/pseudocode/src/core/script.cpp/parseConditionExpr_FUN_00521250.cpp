// Name: core_script.cpp_parseConditionExpr_FUN_00521250
// Address: 00521250
// Address Range: [[00521250, 0052128a]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_parseConditionExpr_FUN_00521250(char **cursor,char *out_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_script_cpp_parseConditionExpr_FUN_00521250(char **cursor,char *out_buffer)

{
  char *pcVar1;
  
  pcVar1 = core_script_cpp_parseArgument_FUN_005211a0(cursor,out_buffer,100);
  if ((pcVar1 == (char *)0x0) && (_DAT_01e650f8 != 0)) {
    pcVar1 = core_event_cpp_CEventList_validateCondition_FUN_0048e3a0(0x01C38BC0,out_buffer);
    return pcVar1;
  }
  return pcVar1;
}
