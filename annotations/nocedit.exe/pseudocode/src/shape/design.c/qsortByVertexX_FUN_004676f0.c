// Name: shape_design.c_qsortByVertexX_FUN_004676f0
// Address: 004676f0
// Address Range: [[004676f0, 004677b6]]
// Convention: __cdecl
// Signature: int shape_design.c_qsortByVertexX_FUN_004676f0(SVertexPair * a, SVertexPair * b)
// Cross-references:
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467a58 [DATA]
// Globals:
//   TerminatedCString s_shape_design_c_0061c9d1
//   TerminatedCString s_Hell_froze_0061c9e3
//   SVertexData[20000] g_LoadedVertices
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl shape_design_c_qsortByVertexX_FUN_004676f0(SVertexPair *a,SVertexPair *b)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int local_24;
  
  if (a == b) {
    local_24 = 0;
  }
  else {
    iVar1 = a->original_index;
    iVar2 = b->original_index;
    fVar3 = g_LoadedVertices[iVar1].vertex.x;
    fVar4 = g_LoadedVertices[iVar2].vertex.x;
    if (fVar4 <= fVar3) {
      if (fVar3 <= fVar4) {
        if (iVar1 < iVar2) {
          local_24 = -1;
        }
        else if (iVar2 < iVar1) {
          local_24 = 1;
        }
        else {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2062;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
          local_24 = 0;
        }
      }
      else {
        local_24 = 1;
      }
    }
    else {
      local_24 = -1;
    }
  }
  return local_24;
}


// Assembly code:
// 004676f0: PUSH EBX
//   Label: shape_design.c_qsortByVertexX_FUN_004676f0
// 004676f1: PUSH ESI
// 004676f2: PUSH EDI
// 004676f3: PUSH EBP
// 004676f4: MOV EBP,ESP
// 004676f6: SUB ESP,0x14
// 004676fc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004676ff: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00467702: JNZ 0x00467710
//   XREF to: 00467710 (CONDITIONAL_JUMP)
// 00467704: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 0046770b: JMP 0x004677ad
//   XREF to: 004677ad (UNCONDITIONAL_JUMP)
// 00467710: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00467710
//   XREF to: Stack[0x4] (READ)
// 00467713: MOV EAX,dword ptr [EAX]
// 00467715: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00467718: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046771b: MOV EAX,dword ptr [EAX]
// 0046771d: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00467720: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00467724: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046772a: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046772d: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00467731: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467737: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046773a: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046773d: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467740: FNSTSW AX
// 00467742: SAHF
// 00467743: JNC 0x0046774e
//   XREF to: 0046774e (CONDITIONAL_JUMP)
// 00467745: MOV dword ptr [EBP + -0x14],0xffffffff
//   XREF to: Stack[-0x24] (WRITE)
// 0046774c: JMP 0x004677ad
//   XREF to: 004677ad (UNCONDITIONAL_JUMP)
// 0046774e: FLD float ptr [EBP + -0x8]
//   Label: LAB_0046774e
//   XREF to: Stack[-0x18] (READ)
// 00467751: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467754: FNSTSW AX
// 00467756: SAHF
// 00467757: JBE 0x00467762
//   XREF to: 00467762 (CONDITIONAL_JUMP)
// 00467759: MOV dword ptr [EBP + -0x14],0x1
//   XREF to: Stack[-0x24] (WRITE)
// 00467760: JMP 0x004677ad
//   XREF to: 004677ad (UNCONDITIONAL_JUMP)
// 00467762: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00467762
//   XREF to: Stack[-0x20] (READ)
// 00467765: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00467768: JGE 0x00467773
//   XREF to: 00467773 (CONDITIONAL_JUMP)
// 0046776a: MOV dword ptr [EBP + -0x14],0xffffffff
//   XREF to: Stack[-0x24] (WRITE)
// 00467771: JMP 0x004677ad
//   XREF to: 004677ad (UNCONDITIONAL_JUMP)
// 00467773: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00467773
//   XREF to: Stack[-0x20] (READ)
// 00467776: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00467779: JLE 0x00467784
//   XREF to: 00467784 (CONDITIONAL_JUMP)
// 0046777b: MOV dword ptr [EBP + -0x14],0x1
//   XREF to: Stack[-0x24] (WRITE)
// 00467782: JMP 0x004677ad
//   XREF to: 004677ad (UNCONDITIONAL_JUMP)
// 00467784: MOV dword ptr [0x02f0ca48],0x61c9d1
//   Label: LAB_00467784
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061c9d1 (DATA)
// 0046778e: MOV dword ptr [0x02f0ca4c],0x2062
//   XREF to: 02f0ca4c (WRITE)
// 00467798: MOV EAX,0x61c9e3
//   XREF to: 0061c9e3 (PARAM)
// 0046779d: PUSH EAX
//   XREF to: 0061c9e3 (DATA)
// 0046779e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004677a3: ADD ESP,0x4
// 004677a6: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 004677ad: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_004677ad
//   XREF to: Stack[-0x24] (READ)
// 004677b0: MOV ESP,EBP
// 004677b2: POP EBP
// 004677b3: POP EDI
// 004677b4: POP ESI
// 004677b5: POP EBX
// 004677b6: RET
