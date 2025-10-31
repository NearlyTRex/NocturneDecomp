// Name: shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
// Address: 0048f6f0
// Address Range: [[0048f6f0, 0048f762]]
// Convention: __cdecl
// Signature: int shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel * this_ptr, int vertex_id)
// Cross-references:
//   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770 (0048f770) at 0048f8ef [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_dsemodel_cpp_006224b9
//   TerminatedCString s_CDSEModel_convertVertex__006224cf
//   int[5000] g_VertexIdRegistry
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel *this_ptr,int vertex_id)

{
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (this_ptr->vertex_count <= local_14) {
      g_CurrentFilename = "..\\shape\\dsemodel.cpp";
      g_CurrentLineNumber = 0x5a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDSEModel::convertVertex - Vertex not found");
      return -1;
    }
    if (g_VertexIdRegistry[local_14] == vertex_id) break;
    local_14 = local_14 + 1;
  }
  return local_14;
}


// Assembly code:
// 0048f6f0: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
// 0048f6f1: PUSH ESI
// 0048f6f2: PUSH EDI
// 0048f6f3: PUSH EBP
// 0048f6f4: MOV EBP,ESP
// 0048f6f6: SUB ESP,0x8
// 0048f6fc: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048f703: JMP 0x0048f70b
//   XREF to: 0048f70b (UNCONDITIONAL_JUMP)
// 0048f705: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f705
//   XREF to: Stack[-0x14] (READ)
// 0048f708: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048f70b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f70b
//   XREF to: Stack[-0x14] (READ)
// 0048f70e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f711: CMP EAX,dword ptr [EDX]
// 0048f713: JGE 0x0048f730
//   XREF to: 0048f730 (CONDITIONAL_JUMP)
// 0048f715: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f718: SHL EAX,0x2
// 0048f71b: MOV EAX,dword ptr [EAX + 0x2c9b328]
//   XREF to: 02c9b328 (DATA)
// 0048f721: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048f724: JNZ 0x0048f72e
//   XREF to: 0048f72e (CONDITIONAL_JUMP)
// 0048f726: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f729: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048f72c: JMP 0x0048f759
//   XREF to: 0048f759 (UNCONDITIONAL_JUMP)
// 0048f72e: JMP 0x0048f705
//   Label: LAB_0048f72e
//   XREF to: 0048f705 (UNCONDITIONAL_JUMP)
// 0048f730: MOV dword ptr [0x02f0ca48],0x6224b9
//   Label: LAB_0048f730
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 006224b9 (DATA)
// 0048f73a: MOV dword ptr [0x02f0ca4c],0x5a
//   XREF to: 02f0ca4c (WRITE)
// 0048f744: MOV EAX,0x6224cf
//   XREF to: 006224cf (PARAM)
// 0048f749: PUSH EAX
//   XREF to: 006224cf (DATA)
// 0048f74a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048f74f: ADD ESP,0x4
// 0048f752: MOV dword ptr [EBP + -0x8],0xffffffff
//   XREF to: Stack[-0x18] (WRITE)
// 0048f759: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f759
//   XREF to: Stack[-0x18] (READ)
// 0048f75c: MOV ESP,EBP
// 0048f75e: POP EBP
// 0048f75f: POP EDI
// 0048f760: POP ESI
// 0048f761: POP EBX
// 0048f762: RET
