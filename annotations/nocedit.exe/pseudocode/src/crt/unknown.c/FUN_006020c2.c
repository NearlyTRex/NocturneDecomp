// Name: crt_unknown.c_FUN_006020c2
// Address: 006020c2
// Address Range: [[006020c2, 006020fa]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006020c2()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051b570 (0051b570) at 0051b6c1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051bf63 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051efe0 (0051efe0) at 0051f04a [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7b27 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 FUN_006020c2(undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, undefined4 param_5) */

undefined4 crt_unknown_c_FUN_006020c2(void)

{
  undefined4 in_stack_00000004;
  int in_stack_0000000c;
  code *in_stack_00000014;
  
  for (; in_stack_0000000c != 0; in_stack_0000000c = in_stack_0000000c + -1) {
    (*in_stack_00000014)();
  }
  return in_stack_00000004;
}


// Assembly code:
// 006020c2: PUSH EBX
//   Label: crt_unknown.c_FUN_006020c2
// 006020c3: PUSH ESI
// 006020c4: PUSH EDI
// 006020c5: PUSH EBP
// 006020c6: SUB ESP,0x4
// 006020c9: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 006020cd: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 006020d1: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 006020d5: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 006020d9: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 006020dc: TEST EDI,EDI
//   Label: LAB_006020dc
// 006020de: JA 0x006020eb
//   XREF to: 006020eb (CONDITIONAL_JUMP)
// 006020e0: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 006020e3: ADD ESP,0x4
// 006020e6: POP EBP
// 006020e7: POP EDI
// 006020e8: POP ESI
// 006020e9: POP EBX
// 006020ea: RET
// 006020eb: PUSH ESI
//   Label: LAB_006020eb
// 006020ec: PUSH EBX
// 006020ed: DEC EDI
// 006020ee: CALL dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 006020f2: ADD ESI,EBP
// 006020f4: ADD ESP,0x8
// 006020f7: ADD EBX,EBP
// 006020f9: JMP 0x006020dc
//   XREF to: 006020dc (UNCONDITIONAL_JUMP)
