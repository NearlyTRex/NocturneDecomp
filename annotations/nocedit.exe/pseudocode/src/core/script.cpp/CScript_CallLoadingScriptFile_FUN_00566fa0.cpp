// Name: core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
// Address: 00566fa0
// Address Range: [[00566fa0, 0056700c]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_CallLoadingScriptFile(CScript* param_1, uint
   param_2) */

void core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int in_stack_00000004;
  CStrList *in_stack_00000008;
  char acStack_d0 [192];
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    iVar3 = 0;
    do {
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c
                        (*(char **)(iVar3 + 4 + *(int *)(in_stack_00000004 + 0x34)),": %s",
                         &stack0xffffff2c);
      if (iVar1 == 1) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000008,acStack_d0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
  }
  return;
}
