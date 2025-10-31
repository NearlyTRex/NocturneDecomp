// Name: core_curtain.cpp_FUN_0044b360
// Address: 0044b360
// Address Range: [[0044b360, 0044b36f]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b360()

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b360(undefined4 param_1) */

undefined4 core_curtain_cpp_FUN_0044b360(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (65000 < *(int *)(in_stack_00000004 + 0x17c)) {
    return 0;
  }
  uVar1 = core_curtain_cpp_FUN_0044b060();
  return uVar1;
}


// Assembly code:
// 0044b360: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_curtain.cpp_FUN_0044b360
//   XREF to: Stack[0x4] (READ)
// 0044b364: CMP dword ptr [EAX + 0x17c],0xfde8
// 0044b36e: JLE 0x0044b353
//   XREF to: 0044b353 (CONDITIONAL_JUMP)
