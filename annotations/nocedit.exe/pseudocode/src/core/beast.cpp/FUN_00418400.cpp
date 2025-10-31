// Name: core_beast.cpp_FUN_00418400
// Address: 00418400
// Address Range: [[00418400, 0041841e]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_00418400()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_00418400(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_beast_cpp_FUN_00418400(void)

{
  int in_stack_00000004;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 1) {
    return 0;
  }
  in_stack_00000008[8] = in_stack_00000004 + 0x158;
  return 1;
}


// Assembly code:
// 00418400: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_beast.cpp_FUN_00418400
//   XREF to: Stack[0x8] (READ)
// 00418404: CMP dword ptr [EAX],0x1
// 00418407: JZ 0x0041840c
//   XREF to: 0041840c (CONDITIONAL_JUMP)
// 00418409: XOR EAX,EAX
// 0041840b: RET
// 0041840c: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0041840c
//   XREF to: Stack[0x4] (READ)
// 00418410: ADD EDX,0x158
// 00418416: MOV dword ptr [EAX + 0x20],EDX
// 00418419: MOV EAX,0x1
// 0041841e: RET
