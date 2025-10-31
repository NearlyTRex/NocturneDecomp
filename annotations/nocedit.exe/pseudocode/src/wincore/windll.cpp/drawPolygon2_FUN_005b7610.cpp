// Name: wincore_windll.cpp_drawPolygon2_FUN_005b7610
// Address: 005b7610
// Address Range: [[005b7610, 005b7638]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
// Cross-references:
//   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 (00437ca0) at 00437dde [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436880 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 00438564 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 (004839f0) at 00483a6d [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleTextured_FUN_00483370 (00483370) at 004833f1 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553bd0 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 (00552a40) at 00552b16 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolygon2_FUN_005b7610
          (SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_drawPolygon2)(vertex_array,vertex_count,render_flags);
  return iVar1;
}


// Assembly code:
// 005b7610: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 02d03e94 (READ)
// 005b7617: JNZ 0x005b761c
//   XREF to: 005b761c (CONDITIONAL_JUMP)
// 005b7619: XOR EAX,EAX
// 005b761b: RET
// 005b761c: PUSH ESI
//   Label: LAB_005b761c
// 005b761d: PUSH EBX
// 005b761e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005b7622: PUSH ECX
// 005b7623: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b7627: PUSH EBX
// 005b7628: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b762c: PUSH ESI
// 005b762d: CALL dword ptr [g_APIDLL_drawPolygon2]
//   XREF to: 03f6b8cc (READ)
// 005b7633: ADD ESP,0xc
// 005b7636: POP EBX
// 005b7637: POP ESI
// 005b7638: RET
