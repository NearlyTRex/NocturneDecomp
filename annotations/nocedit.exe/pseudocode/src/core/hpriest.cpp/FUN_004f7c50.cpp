// Name: core_hpriest.cpp_FUN_004f7c50
// Address: 004f7c50
// Address Range: [[004f7c50, 004f7c62]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_FUN_004f7c50()

#include "nocturne.h"

/* Signature: undefined1 actors_npc_highpriestg.cpp_FUN_004f7c50(undefined1 param_1, undefined4
   param_2) */

void core_hpriest_cpp_FUN_004f7c50(void)

{
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000008 + 0x30) = 100;
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
  return;
}


// Assembly code:
// 004f7c50: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_hpriest.cpp_FUN_004f7c50
//   XREF to: Stack[0x8] (READ)
// 004f7c54: MOV dword ptr [EAX + 0x30],0x64
// 004f7c5b: MOV dword ptr [EAX + 0x4],0x0
// 004f7c62: RET
