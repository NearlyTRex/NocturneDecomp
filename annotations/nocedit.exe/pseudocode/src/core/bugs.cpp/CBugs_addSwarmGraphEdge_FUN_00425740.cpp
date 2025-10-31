// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
// Address: 00425740
// Address Range: [[00425740, 004257e7]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
// Cross-references:
//   core_bugs.cpp_FUN_00425660 (00425660) at 004256c1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_bugs_cpp_00616d92
//   TerminatedCString s_CBugs_addSwarmGraphEdge__00616da3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_CBugs_addSwarmGraphEdge(CBugs* param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  
  if (*(int *)(in_stack_00000004 + 0x12b34) <= in_stack_00000008) {
    *(int *)(in_stack_00000004 + 0x12b34) = in_stack_00000008 + 1;
  }
  if (700 < *(int *)(in_stack_00000004 + 0x12b34)) {
    g_CurrentFilename = "..\\core\\bugs.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (int *)(in_stack_00000004 + 0x12b38 + in_stack_00000008 * 0x28);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar3[1] = in_stack_00000014;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    piVar4 = piVar3;
    if (0 < iVar1) {
      do {
        if (in_stack_0000000c == piVar4[2]) {
          return;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < *piVar3);
      piVar3[*piVar3 + 2] = in_stack_0000000c;
      *piVar3 = *piVar3 + 1;
      return;
    }
  }
  piVar3[*piVar3 + 2] = in_stack_0000000c;
  *piVar3 = *piVar3 + 1;
  return;
}


// Assembly code:
// 00425740: PUSH EBX
//   Label: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
// 00425741: PUSH ESI
// 00425742: PUSH EDI
// 00425743: PUSH EBP
// 00425744: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00425748: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042574c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00425750: CMP EDI,dword ptr [ESI + 0x12b34]
// 00425756: JGE 0x004257b4
//   XREF to: 004257b4 (CONDITIONAL_JUMP)
// 00425758: CMP dword ptr [ESI + 0x12b34],0x2bc
//   Label: LAB_00425758
// 00425762: JLE 0x00425786
//   XREF to: 00425786 (CONDITIONAL_JUMP)
// 00425764: MOV EBP,0x616d92
//   XREF to: 00616d92 (DATA)
// 00425769: MOV EAX,0x1b8
// 0042576e: PUSH 0x616da3
//   XREF to: 00616da3 (DATA)
// 00425773: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00425779: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0042577e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00425783: ADD ESP,0x4
// 00425786: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_00425786
// 0042578d: ADD EAX,EDI
// 0042578f: LEA ECX,[ESI + 0x12b38]
// 00425795: SHL EAX,0x3
// 00425798: ADD ECX,EAX
// 0042579a: MOV EDX,dword ptr [ECX]
// 0042579c: TEST EDX,EDX
// 0042579e: JNZ 0x004257bf
//   XREF to: 004257bf (CONDITIONAL_JUMP)
// 004257a0: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004257a4: MOV dword ptr [ECX + 0x4],EAX
// 004257a7: MOV EAX,dword ptr [ECX]
//   Label: LAB_004257a7
// 004257a9: MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX
// 004257ad: INC dword ptr [ECX]
// 004257af: POP EBP
//   Label: LAB_004257af
// 004257b0: POP EDI
// 004257b1: POP ESI
// 004257b2: POP EBX
// 004257b3: RET
// 004257b4: LEA EAX,[EDI + 0x1]
//   Label: LAB_004257b4
// 004257b7: MOV dword ptr [ESI + 0x12b34],EAX
// 004257bd: JMP 0x00425758
//   XREF to: 00425758 (UNCONDITIONAL_JUMP)
// 004257bf: CMP EDX,0x8
//   Label: LAB_004257bf
// 004257c2: JGE 0x004257af
//   XREF to: 004257af (CONDITIONAL_JUMP)
// 004257c4: XOR EAX,EAX
// 004257c6: TEST EDX,EDX
// 004257c8: JLE 0x004257a7
//   XREF to: 004257a7 (CONDITIONAL_JUMP)
// 004257ca: MOV EDX,ECX
// 004257cc: CMP EBX,dword ptr [EDX + 0x8]
//   Label: LAB_004257cc
// 004257cf: JZ 0x004257af
//   XREF to: 004257af (CONDITIONAL_JUMP)
// 004257d1: INC EAX
// 004257d2: MOV EBP,dword ptr [ECX]
// 004257d4: ADD EDX,0x4
// 004257d7: CMP EAX,EBP
// 004257d9: JL 0x004257cc
//   XREF to: 004257cc (CONDITIONAL_JUMP)
// 004257db: MOV EAX,dword ptr [ECX]
// 004257dd: MOV dword ptr [ECX + EAX*0x4 + 0x8],EBX
// 004257e1: INC dword ptr [ECX]
// 004257e3: POP EBP
// 004257e4: POP EDI
// 004257e5: POP ESI
// 004257e6: POP EBX
// 004257e7: RET
