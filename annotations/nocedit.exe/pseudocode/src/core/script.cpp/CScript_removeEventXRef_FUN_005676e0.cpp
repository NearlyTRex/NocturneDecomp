// Name: core_script.cpp_CScript_removeEventXRef_FUN_005676e0
// Address: 005676e0
// Address Range: [[005676e0, 0056776b]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_removeEventXRef_FUN_005676e0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_removeEventXRef(CScript* param_1, uint
   param_2) */

void core_script_cpp_CScript_removeEventXRef_FUN_005676e0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x28) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d77;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::removeEventXRef - invalid index");
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x28) + -1;
  *(int *)(in_stack_00000004 + 0x28) = iVar1;
  memmove
            ((void *)(in_stack_00000008 * 0x114 + *(int *)(in_stack_00000004 + 0x2c)),
             (void *)((in_stack_00000008 + 1) * 0x114 + *(int *)(in_stack_00000004 + 0x2c)),
             (iVar1 - in_stack_00000008) * 0x114);
  return;
}
