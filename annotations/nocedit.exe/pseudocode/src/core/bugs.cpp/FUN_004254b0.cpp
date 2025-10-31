// Name: core_bugs.cpp_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004254ee]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004254b0()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004254b0(undefined4 param_1, undefined4 param_2)
    */

undefined4 * core_bugs_cpp_FUN_004254b0(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = *(undefined4 *)(in_stack_00000004 + 0x199cc);
  in_stack_00000008[1] = *(undefined4 *)(in_stack_00000004 + 0x199d0);
  in_stack_00000008[2] = *(undefined4 *)(in_stack_00000004 + 0x199d4);
  in_stack_00000008[3] = *(undefined4 *)(in_stack_00000004 + 0x199d8);
  in_stack_00000008[4] = *(undefined4 *)(in_stack_00000004 + 0x199dc);
  in_stack_00000008[5] = *(undefined4 *)(in_stack_00000004 + 0x199e0);
  return in_stack_00000008;
}


// Assembly code:
// 004254b0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004254b0
// 004254b1: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004254b5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004254b9: ADD EAX,0x199cc
// 004254be: MOV EDX,dword ptr [EAX]
// 004254c0: LEA EBX,[EAX + 0x4]
// 004254c3: MOV dword ptr [ECX],EDX
// 004254c5: LEA EDX,[ECX + 0x4]
// 004254c8: MOV EBX,dword ptr [EBX]
// 004254ca: MOV dword ptr [EDX],EBX
// 004254cc: LEA EBX,[EAX + 0x8]
// 004254cf: MOV EBX,dword ptr [EBX]
// 004254d1: MOV dword ptr [EDX + 0x4],EBX
// 004254d4: MOV EBX,dword ptr [EAX + 0xc]
// 004254d7: ADD EAX,0xc
// 004254da: MOV dword ptr [EDX + 0x8],EBX
// 004254dd: LEA EBX,[EAX + 0x4]
// 004254e0: MOV EBX,dword ptr [EBX]
// 004254e2: MOV dword ptr [EDX + 0xc],EBX
// 004254e5: MOV EAX,dword ptr [EAX + 0x8]
// 004254e8: MOV dword ptr [EDX + 0x10],EAX
// 004254eb: MOV EAX,ECX
// 004254ed: POP EBX
// 004254ee: RET
