// Name: shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
// Address: 0048f660
// Address Range: [[0048f660, 0048f6ed]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel * this_ptr, int vertex_id)
// Cross-references:
//   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770 (0048f770) at 0048f884 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_dsemodel_cpp_00622462
//   TerminatedCString s_CDSEModel_logVertex_Rich_00622478
//   int[5000] g_VertexIdRegistry
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel *this_ptr,int vertex_id)

{
  int local_14;
  
  for (local_14 = 0;
      (local_14 < this_ptr->vertex_count && (g_VertexIdRegistry[local_14] != vertex_id));
      local_14 = local_14 + 1) {
  }
  if (local_14 == this_ptr->vertex_count) {
    g_VertexIdRegistry[this_ptr->vertex_count] = vertex_id;
    this_ptr->vertex_count = this_ptr->vertex_count + 1;
    if (4999 < this_ptr->vertex_count) {
      g_CurrentFilename = "..\\shape\\dsemodel.cpp";
      g_CurrentLineNumber = 0x4a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDSEModel::logVertex - Rich, you need to increase MAX_DSE_POINTS");
    }
  }
  return;
}


// Assembly code:
// 0048f660: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
// 0048f661: PUSH ESI
// 0048f662: PUSH EDI
// 0048f663: PUSH EBP
// 0048f664: MOV EBP,ESP
// 0048f666: SUB ESP,0x4
// 0048f66c: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048f673: JMP 0x0048f67b
//   XREF to: 0048f67b (UNCONDITIONAL_JUMP)
// 0048f675: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f675
//   XREF to: Stack[-0x14] (READ)
// 0048f678: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048f67b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f67b
//   XREF to: Stack[-0x14] (READ)
// 0048f67e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f681: CMP EAX,dword ptr [EDX]
// 0048f683: JGE 0x0048f69a
//   XREF to: 0048f69a (CONDITIONAL_JUMP)
// 0048f685: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f688: SHL EAX,0x2
// 0048f68b: MOV EAX,dword ptr [EAX + 0x2c9b328]
//   XREF to: 02c9b328 (DATA)
// 0048f691: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048f694: JNZ 0x0048f698
//   XREF to: 0048f698 (CONDITIONAL_JUMP)
// 0048f696: JMP 0x0048f69a
//   XREF to: 0048f69a (UNCONDITIONAL_JUMP)
// 0048f698: JMP 0x0048f675
//   Label: LAB_0048f698
//   XREF to: 0048f675 (UNCONDITIONAL_JUMP)
// 0048f69a: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f69a
//   XREF to: Stack[-0x14] (READ)
// 0048f69d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f6a0: CMP EAX,dword ptr [EDX]
// 0048f6a2: JNZ 0x0048f6e7
//   XREF to: 0048f6e7 (CONDITIONAL_JUMP)
// 0048f6a4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f6a7: MOV EDX,dword ptr [EAX]
// 0048f6a9: SHL EDX,0x2
// 0048f6ac: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048f6af: MOV dword ptr [EDX + 0x2c9b328],EAX
//   XREF to: 02c9b328 (DATA)
// 0048f6b5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f6b8: INC dword ptr [EAX]
// 0048f6ba: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f6bd: CMP dword ptr [EAX],0x1388
// 0048f6c3: JL 0x0048f6e7
//   XREF to: 0048f6e7 (CONDITIONAL_JUMP)
// 0048f6c5: MOV dword ptr [0x02f0ca48],0x622462
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 00622462 (DATA)
// 0048f6cf: MOV dword ptr [0x02f0ca4c],0x4a
//   XREF to: 02f0ca4c (WRITE)
// 0048f6d9: MOV EAX,0x622478
//   XREF to: 00622478 (PARAM)
// 0048f6de: PUSH EAX
//   XREF to: 00622478 (DATA)
// 0048f6df: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048f6e4: ADD ESP,0x4
// 0048f6e7: MOV ESP,EBP
//   Label: LAB_0048f6e7
// 0048f6e9: POP EBP
// 0048f6ea: POP EDI
// 0048f6eb: POP ESI
// 0048f6ec: POP EBX
// 0048f6ed: RET
