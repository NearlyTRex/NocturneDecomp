// Name: core_script.cpp_CScript_ReallocSomething_FUN_00567510
// Address: 00567510
// Address Range: [[00567510, 00567595]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_ReallocSomething_FUN_00567510(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_ReallocSomething(CScript* param_1, uint
   param_2) */

void core_script_cpp_CScript_ReallocSomething_FUN_00567510(void)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  bVar4 = 0;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x2c),
                      (*(int *)(in_stack_00000004 + 0x28) + 1) * 0x114,"..\\core\\script.cpp",
                      0x1d37);
  *(void **)(in_stack_00000004 + 0x2c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d38;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  puVar3 = (uint *)
           (*(int *)(in_stack_00000004 + 0x2c) + *(int *)(in_stack_00000004 + 0x28) * 0x114);
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(int *)(in_stack_00000004 + 0x28) = *(int *)(in_stack_00000004 + 0x28) + 1;
  return;
}
