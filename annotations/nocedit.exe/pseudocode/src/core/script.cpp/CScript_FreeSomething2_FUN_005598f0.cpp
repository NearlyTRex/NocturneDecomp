// Name: core_script.cpp_CScript_FreeSomething2_FUN_005598f0
// Address: 005598f0
// Address Range: [[005598f0, 0055995b]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_FreeSomething2_FUN_005598f0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_FreeSomething2(CScript* param_1) */

void core_script_cpp_CScript_FreeSomething2_FUN_005598f0(void)

{
  void *ptr;
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x34) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x30)) {
      iVar1 = 0;
      do {
        ptr = *(void **)(*(int *)(in_stack_00000004 + 0x34) + iVar1 + 4);
        if (ptr != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\script.cpp",0x1ce);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x34),"..\\core\\script.cpp",0x1d0);
    *(uint *)(in_stack_00000004 + 0x34) = 0;
  }
  *(uint *)(in_stack_00000004 + 0x30) = 0;
  return;
}
