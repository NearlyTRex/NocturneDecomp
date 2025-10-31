// Name: core_bugs.cpp_FUN_00425660
// Address: 00425660
// Address Range: [[00425660, 00425736]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425660()
// Cross-references:
//   core_bugs.cpp_FUN_00427400 (00427400) at 00427519 [UNCONDITIONAL_CALL]
// Function calls:
//   core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00425660(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_bugs_cpp_FUN_00425660(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x12b34) = 0;
  iVar1 = 0;
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0x12b38),0,28000);
  if (0 < in_stack_00000008) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
      iVar1 = iVar1 + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740();
    } while (iVar1 < in_stack_00000008);
  }
  return;
}


// Assembly code:
// 00425660: PUSH ESI
//   Label: core_bugs.cpp_FUN_00425660
// 00425661: PUSH EDI
// 00425662: PUSH EBP
// 00425663: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00425667: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042566b: PUSH 0x6d60
// 00425670: PUSH 0x0
// 00425672: LEA EAX,[EDI + 0x12b38]
// 00425678: PUSH EAX
// 00425679: MOV dword ptr [EDI + 0x12b34],0x0
// 00425683: XOR ESI,ESI
// 00425685: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0042568a: ADD ESP,0xc
// 0042568d: TEST EBP,EBP
// 0042568f: JLE 0x00425733
//   XREF to: 00425733 (CONDITIONAL_JUMP)
// 00425695: PUSH EBX
// 00425696: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042569a: XOR EAX,EAX
//   Label: LAB_0042569a
// 0042569c: PUSH ESI
// 0042569d: MOV AX,word ptr [EBX + 0x2]
// 004256a1: PUSH EAX
// 004256a2: XOR EAX,EAX
// 004256a4: MOV AX,word ptr [EBX]
// 004256a7: PUSH EAX
// 004256a8: PUSH EDI
// 004256a9: CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   XREF to: 00425740 (UNCONDITIONAL_CALL)
// 004256ae: ADD ESP,0x10
// 004256b1: XOR EAX,EAX
// 004256b3: PUSH ESI
// 004256b4: MOV AX,word ptr [EBX + 0x4]
// 004256b8: PUSH EAX
// 004256b9: XOR EAX,EAX
// 004256bb: MOV AX,word ptr [EBX + 0x2]
// 004256bf: PUSH EAX
// 004256c0: PUSH EDI
// 004256c1: CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   XREF to: 00425740 (UNCONDITIONAL_CALL)
// 004256c6: ADD ESP,0x10
// 004256c9: XOR EAX,EAX
// 004256cb: PUSH ESI
// 004256cc: MOV AX,word ptr [EBX]
// 004256cf: PUSH EAX
// 004256d0: XOR EAX,EAX
// 004256d2: MOV AX,word ptr [EBX + 0x4]
// 004256d6: PUSH EAX
// 004256d7: PUSH EDI
// 004256d8: CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   XREF to: 00425740 (UNCONDITIONAL_CALL)
// 004256dd: ADD ESP,0x10
// 004256e0: XOR EAX,EAX
// 004256e2: PUSH ESI
// 004256e3: MOV AX,word ptr [EBX]
// 004256e6: PUSH EAX
// 004256e7: XOR EAX,EAX
// 004256e9: MOV AX,word ptr [EBX + 0x2]
// 004256ed: PUSH EAX
// 004256ee: PUSH EDI
// 004256ef: CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   XREF to: 00425740 (UNCONDITIONAL_CALL)
// 004256f4: ADD ESP,0x10
// 004256f7: XOR EAX,EAX
// 004256f9: PUSH ESI
// 004256fa: MOV AX,word ptr [EBX + 0x2]
// 004256fe: PUSH EAX
// 004256ff: XOR EAX,EAX
// 00425701: MOV AX,word ptr [EBX + 0x4]
// 00425705: PUSH EAX
// 00425706: PUSH EDI
// 00425707: CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   XREF to: 00425740 (UNCONDITIONAL_CALL)
// 0042570c: ADD ESP,0x10
// 0042570f: XOR EAX,EAX
// 00425711: PUSH ESI
// 00425712: MOV AX,word ptr [EBX + 0x4]
// 00425716: PUSH EAX
// 00425717: XOR EAX,EAX
// 00425719: MOV AX,word ptr [EBX]
// 0042571c: PUSH EAX
// 0042571d: PUSH EDI
// 0042571e: ADD EBX,0x12
// 00425721: INC ESI
// 00425722: CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
//   XREF to: 00425740 (UNCONDITIONAL_CALL)
// 00425727: ADD ESP,0x10
// 0042572a: CMP ESI,EBP
// 0042572c: JL 0x0042569a
//   XREF to: 0042569a (CONDITIONAL_JUMP)
// 00425732: POP EBX
// 00425733: POP EBP
//   Label: LAB_00425733
// 00425734: POP EDI
// 00425735: POP ESI
// 00425736: RET
