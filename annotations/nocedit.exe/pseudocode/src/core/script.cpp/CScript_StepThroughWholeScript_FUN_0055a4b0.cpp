// Name: core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
// Address: 0055a4b0
// Address Range: [[0055a4b0, 0055a537]]
// Convention: unknown
// Signature: undefined1 * core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_StepThroughWholeScript(uint param_1,
   uint param_2) */

byte * core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  DAT_0310ec9c = 1;
  core_script_cpp_FUN_0055a540();
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&DAT_0310f4b0);
  if (*(int *)(in_stack_00000004 + 0x48) < *(int *)(in_stack_00000004 + 0x30)) {
    do {
      iVar2 = *(int *)(in_stack_00000004 + 0x48);
      iVar1 = core_script_cpp_CScript_step_FUN_0055a810();
      if (iVar1 < 0) {
        *in_stack_00000008 = *(int *)(*(int *)(in_stack_00000004 + 0x34) + iVar2 * 8) + -1;
        return &DAT_0310eca0;
      }
      iVar2 = iVar2 + 1;
      *(int *)(in_stack_00000004 + 0x48) = iVar2;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
  }
  DAT_0310ec9c = 0;
  return (byte *)0x0;
}
