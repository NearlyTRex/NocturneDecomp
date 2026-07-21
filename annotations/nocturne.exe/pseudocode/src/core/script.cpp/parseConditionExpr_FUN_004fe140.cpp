// Name: core_script.cpp_parseConditionExpr_FUN_004fe140
// Address: 004fe140
// Address Range: [[004fe140, 004fe17a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_parseConditionExpr_FUN_004fe140(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_parseConditionExpr_FUN_004fe140(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_script_cpp_parseArgument_FUN_004fe090(param_1,param_2,100);
  if ((iVar1 == 0) && (_DAT_01e56418 != 0)) {
    core_event_cpp_CEventList_validateCondition_FUN_0047dc90(0x01C03A10,param_2);
    return;
  }
  return;
}
