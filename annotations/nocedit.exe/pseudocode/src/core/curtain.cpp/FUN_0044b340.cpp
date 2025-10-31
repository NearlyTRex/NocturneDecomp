// Name: core_curtain.cpp_FUN_0044b340
// Address: 0044b340
// Address Range: [[0044b340, 0044b35c]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b340()
// Function calls:
//   core_curtain.cpp_FUN_0044b060

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b340(undefined4 param_1) */

undefined4 core_curtain_cpp_FUN_0044b340(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x17c) < 0xfde9) {
    return 0;
  }
  uVar1 = core_curtain_cpp_FUN_0044b060();
  return uVar1;
}


// Assembly code:
// 0044b340: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_curtain.cpp_FUN_0044b340
//   XREF to: Stack[0x4] (READ)
// 0044b344: CMP dword ptr [EAX + 0x17c],0xfde8
// 0044b34e: JG 0x0044b353
//   XREF to: 0044b353 (CONDITIONAL_JUMP)
// 0044b350: XOR EAX,EAX
// 0044b352: RET
// 0044b353: PUSH EAX
//   Label: LAB_0044b353
// 0044b354: CALL core_curtain.cpp_FUN_0044b060
//   XREF to: 0044b060 (UNCONDITIONAL_CALL)
// 0044b359: ADD ESP,0x4
// 0044b35c: RET
