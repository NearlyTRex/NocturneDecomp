// Name: shape_design.c_qsortByOriginalIndex_FUN_004677c0
// Address: 004677c0
// Address Range: [[004677c0, 00467841]]
// Convention: __cdecl
// Signature: int shape_design.c_qsortByOriginalIndex_FUN_004677c0(SVertexPair * vertex_pair1, SVertexPair * vertex_pair2)
// Cross-references:
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467cf5 [DATA]
// Globals:
//   TerminatedCString s_shape_design_c_0061c9ef
//   TerminatedCString s_Hell_froze_0061ca01
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
shape_design_c_qsortByOriginalIndex_FUN_004677c0
          (SVertexPair *vertex_pair1,SVertexPair *vertex_pair2)

{
  int local_1c;
  
  if (vertex_pair1 == vertex_pair2) {
    local_1c = 0;
  }
  else if (vertex_pair1->original_index < vertex_pair2->original_index) {
    local_1c = -1;
  }
  else if (vertex_pair2->original_index < vertex_pair1->original_index) {
    local_1c = 1;
  }
  else {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x2078;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
    local_1c = 0;
  }
  return local_1c;
}


// Assembly code:
// 004677c0: PUSH EBX
//   Label: shape_design.c_qsortByOriginalIndex_FUN_004677c0
// 004677c1: PUSH ESI
// 004677c2: PUSH EDI
// 004677c3: PUSH EBP
// 004677c4: MOV EBP,ESP
// 004677c6: SUB ESP,0xc
// 004677cc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004677cf: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004677d2: JNZ 0x004677dd
//   XREF to: 004677dd (CONDITIONAL_JUMP)
// 004677d4: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 004677db: JMP 0x00467838
//   XREF to: 00467838 (UNCONDITIONAL_JUMP)
// 004677dd: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004677dd
//   XREF to: Stack[0x4] (READ)
// 004677e0: MOV EAX,dword ptr [EAX]
// 004677e2: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004677e5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004677e8: MOV EAX,dword ptr [EAX]
// 004677ea: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004677ed: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004677f0: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004677f3: JGE 0x004677fe
//   XREF to: 004677fe (CONDITIONAL_JUMP)
// 004677f5: MOV dword ptr [EBP + -0xc],0xffffffff
//   XREF to: Stack[-0x1c] (WRITE)
// 004677fc: JMP 0x00467838
//   XREF to: 00467838 (UNCONDITIONAL_JUMP)
// 004677fe: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004677fe
//   XREF to: Stack[-0x18] (READ)
// 00467801: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467804: JLE 0x0046780f
//   XREF to: 0046780f (CONDITIONAL_JUMP)
// 00467806: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 0046780d: JMP 0x00467838
//   XREF to: 00467838 (UNCONDITIONAL_JUMP)
// 0046780f: MOV dword ptr [0x02f0ca48],0x61c9ef
//   Label: LAB_0046780f
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061c9ef (DATA)
// 00467819: MOV dword ptr [0x02f0ca4c],0x2078
//   XREF to: 02f0ca4c (WRITE)
// 00467823: MOV EAX,0x61ca01
//   XREF to: 0061ca01 (PARAM)
// 00467828: PUSH EAX
//   XREF to: 0061ca01 (DATA)
// 00467829: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046782e: ADD ESP,0x4
// 00467831: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00467838: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00467838
//   XREF to: Stack[-0x1c] (READ)
// 0046783b: MOV ESP,EBP
// 0046783d: POP EBP
// 0046783e: POP EDI
// 0046783f: POP ESI
// 00467840: POP EBX
// 00467841: RET
