// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
// Address: 0050ce60
// Address Range: [[0050ce60, 0050ced6]]
// Convention: __cdecl
// Signature: void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cacheIndex)
// Cross-references:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 (00407d70) at 00407fa5 [UNCONDITIONAL_CALL]
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 004082af [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cd82 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cacheIndex)

{
  g_RenderVertexBuffer[cacheIndex].projected_vertex.inv_z =
       (int)(0x7fffffff / (longlong)g_RenderVertexBuffer[cacheIndex].projected_vertex.transformed_z)
  ;
  g_RenderVertexBuffer[cacheIndex].projected_vertex.screen_x =
       (int)(((longlong)g_RenderVertexBuffer[cacheIndex].projected_vertex.transformed_x *
             (longlong)g_ViewportCenterXFixed) /
            (longlong)g_RenderVertexBuffer[cacheIndex].projected_vertex.transformed_z) +
       g_ViewportRightFixed;
  g_RenderVertexBuffer[cacheIndex].projected_vertex.screen_y =
       (int)(((longlong)g_RenderVertexBuffer[cacheIndex].projected_vertex.transformed_y *
             (longlong)g_ViewportCenterYFixed) /
            (longlong)g_RenderVertexBuffer[cacheIndex].projected_vertex.transformed_z) +
       g_ViewportBottomFixed;
  return;
}


// Assembly code:
// 0050ce60: PUSH EBX
//   Label: engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
// 0050ce61: PUSH ESI
// 0050ce62: PUSH EDI
// 0050ce63: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050ce67: LEA ECX,[EAX*0x4 + 0x0]
// 0050ce6e: SUB ECX,EAX
// 0050ce70: MOV EAX,0x7fffffff
// 0050ce75: SHL ECX,0x4
// 0050ce78: MOV EDX,EAX
// 0050ce7a: MOV EBX,dword ptr [ECX + 0x68801c]
//   XREF to: 0068801c (DATA)
// 0050ce80: SAR EDX,0x1f
// 0050ce83: IDIV EBX
// 0050ce85: MOV dword ptr [ECX + 0x688020],EAX
//   XREF to: 00688020 (DATA)
// 0050ce8b: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0050ce91: MOV EBX,dword ptr [ECX + 0x68801c]
//   XREF to: 0068801c (DATA)
// 0050ce97: MOV EAX,dword ptr [ECX + 0x688014]
//   XREF to: 00688014 (DATA)
// 0050ce9d: IMUL EDX
// 0050ce9f: IDIV EBX
// 0050cea1: MOV ESI,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0050cea7: ADD EAX,ESI
// 0050cea9: MOV dword ptr [ECX + 0x688024],EAX
//   XREF to: 00688024 (DATA)
// 0050ceaf: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0050ceb5: MOV EBX,dword ptr [ECX + 0x68801c]
//   XREF to: 0068801c (DATA)
// 0050cebb: MOV EAX,dword ptr [ECX + 0x688018]
//   XREF to: 00688018 (DATA)
// 0050cec1: IMUL EDX
// 0050cec3: IDIV EBX
// 0050cec5: MOV EDI,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0050cecb: ADD EAX,EDI
// 0050cecd: MOV dword ptr [ECX + 0x688028],EAX
//   XREF to: 00688028 (DATA)
// 0050ced3: POP EDI
// 0050ced4: POP ESI
// 0050ced5: POP EBX
// 0050ced6: RET
