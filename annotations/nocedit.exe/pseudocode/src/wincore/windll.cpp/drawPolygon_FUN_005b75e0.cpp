// Name: wincore_windll.cpp_drawPolygon_FUN_005b75e0
// Address: 005b75e0
// Address Range: [[005b75e0, 005b7608]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)
// Cross-references:
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 (005fcfc0) at 005fd2b0 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 005526fe [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 00553748 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580 (005dd580) at 005dd664 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50 (005b7a50) at 005b7aed [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_drawPolygon* g_APIDLL_drawPolygon

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolygon_FUN_005b75e0
          (SRenderVertex *vertices,int vertex_count,int render_flags)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_drawPolygon)(vertices,vertex_count,render_flags);
  return iVar1;
}


// Assembly code:
// 005b75e0: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   XREF to: 02d03e94 (READ)
// 005b75e7: JNZ 0x005b75ec
//   XREF to: 005b75ec (CONDITIONAL_JUMP)
// 005b75e9: XOR EAX,EAX
// 005b75eb: RET
// 005b75ec: PUSH ESI
//   Label: LAB_005b75ec
// 005b75ed: PUSH EBX
// 005b75ee: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005b75f2: PUSH ECX
// 005b75f3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b75f7: PUSH EBX
// 005b75f8: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b75fc: PUSH ESI
// 005b75fd: CALL dword ptr [g_APIDLL_drawPolygon]
//   XREF to: 03f6b8c8 (READ)
// 005b7603: ADD ESP,0xc
// 005b7606: POP EBX
// 005b7607: POP ESI
// 005b7608: RET
