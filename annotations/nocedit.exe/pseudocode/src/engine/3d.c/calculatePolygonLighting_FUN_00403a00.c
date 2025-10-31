// Name: engine_3d.c_calculatePolygonLighting_FUN_00403a00
// Address: 00403a00
// Address Range: [[00403a00, 00403a1f]]
// Convention: __cdecl
// Signature: void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 (00404020) at 00404067 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406c2e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406cd8 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406b8e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 0040427d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406a6f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 0040680a [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 0040562f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404cb9 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 004068b7 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404a8e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403d0b [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403f76 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 004060fb [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 0040619e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 004051c3 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 004053cc [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 004054af [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 0040555e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 00404944 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 00404703 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentLightingValue
// Function calls:
//   engine_light.cpp_calculateLighting_FUN_00505780

#include "nocturne.h"

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive *polygon_info)

{
  g_CurrentLightingValue =
       engine_light_cpp_calculateLighting_FUN_00505780
                 ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                  (polygon_info->surface_normal).C);
  return;
}


// Assembly code:
// 00403a00: PUSH EBX
//   Label: engine_3d.c_calculatePolygonLighting_FUN_00403a00
// 00403a01: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00403a05: MOV EDX,dword ptr [EAX + 0x10]
// 00403a08: PUSH EDX
// 00403a09: MOV ECX,dword ptr [EAX + 0xc]
// 00403a0c: PUSH ECX
// 00403a0d: MOV EBX,dword ptr [EAX + 0x8]
// 00403a10: PUSH EBX
// 00403a11: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 00403a16: ADD ESP,0xc
// 00403a19: MOV [0x02d02574],EAX
//   XREF to: 02d02574 (WRITE)
// 00403a1e: POP EBX
// 00403a1f: RET
