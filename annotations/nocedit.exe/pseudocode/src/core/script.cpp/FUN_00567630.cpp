// Name: core_script.cpp_FUN_00567630
// Address: 00567630
// Address Range: [[00567630, 005676d3]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567630()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567630(uint param_1) */

void core_script_cpp_FUN_00567630(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x28) = 0;
  iVar1 = core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    do {
      iVar2 = iVar2 + 1;
      core_script_cpp_FUN_00567080();
      iVar1 = *(int *)(in_stack_00000004 + 0x30);
    } while (iVar2 < iVar1);
  }
  core_msnedit_cpp_FUN_0053ea30(iVar1);
  crt_stdlib_c_qsort_FUN_005fdf38
            (*(void **)(in_stack_00000004 + 0x2c),*(SIZE_T *)(in_stack_00000004 + 0x28),0x114,
             core_script_cpp_FUN_005675a0);
  return;
}
