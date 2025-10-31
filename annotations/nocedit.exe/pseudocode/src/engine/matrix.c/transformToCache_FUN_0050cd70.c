// Name: engine_matrix.c_transformToCache_FUN_0050cd70
// Address: 0050cd70
// Address Range: [[0050cd70, 0050cd95]]
// Convention: __cdecl
// Signature: void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
// Cross-references:
//   shape_design.c_findClosestPolygonToMouse_FUN_00466250 (00466250) at 004662e7 [UNCONDITIONAL_CALL]
//   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 (0045d5d0) at 0045d646 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0 (0045c2f0) at 0045c3cb [UNCONDITIONAL_CALL]
//   shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 (0045bff0) at 0045c096 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (004a1ca0) at 004a1d24 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 (004a2050) at 004a2289 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40 (004a1f40) at 004a1f7d [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl engine_matrix_c_transformToCache_FUN_0050cd70(int cacheIndex,CVector3i *inputPoint)

{
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_RenderVertexBuffer[cacheIndex].projected_vertex,inputPoint);
  return;
}


// Assembly code:
// 0050cd70: PUSH EBX
//   Label: engine_matrix.c_transformToCache_FUN_0050cd70
// 0050cd71: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050cd75: PUSH EDX
// 0050cd76: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050cd7a: LEA EAX,[EDX*0x4 + 0x0]
// 0050cd81: SUB EAX,EDX
// 0050cd83: SHL EAX,0x4
// 0050cd86: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 0050cd8b: PUSH EAX
// 0050cd8c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0050cd91: ADD ESP,0x8
// 0050cd94: POP EBX
// 0050cd95: RET
