// Name: wincore_windll.cpp_renderScanline_FUN_005b5710
// Address: 005b5710
// Address Range: [[005b5710, 005b5715]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderScanline_FUN_005b5710(void * left_data, void * right_data, int scanline_y)
// Cross-references:
//   engine_3d.c_rasterizePolygon_FUN_004d1340 (004d1340) at 004d163f [UNCONDITIONAL_CALL]
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 (005fcfc0) at 005fd45a [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 (004839f0) at 00483ce6 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleTextured_FUN_00483370 (00483370) at 00483624 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553f14 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 (00552a40) at 00552cb6 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 0055296b [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 00553a1f [UNCONDITIONAL_CALL]
// Globals:
//   RenderScanlineFunc* g_ScanlineRenderFunc

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderScanline_FUN_005b5710(void *left_data,void *right_data,int scanline_y)

{
                    /* WARNING: Could not recover jumptable at 0x005b5710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_ScanlineRenderFunc)(left_data,right_data,scanline_y);
  return;
}


// Assembly code:
// 005b5710: JMP dword ptr [0x02d0257c]
//   Label: wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 02d0257c (INDIRECTION)
