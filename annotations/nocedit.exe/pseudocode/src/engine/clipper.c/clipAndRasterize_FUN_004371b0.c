// Name: engine_clipper.c_clipAndRasterize_FUN_004371b0
// Address: 004371b0
// Address Range: [[004371b0, 004371f8]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
// Cross-references:
//   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 (00404020) at 004040f3 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 004076a9 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 004077f2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404b70 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 (00405e20) at 00405e72 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 (00405d80) at 00405dd2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 (00406000) at 00406052 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 (00405960) at 004059b2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 00407202 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 00407464 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 0040760f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406c3b [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406cf0 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 0040580d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 004056ed [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406b9b [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b51 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 00406751 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0 (004052b0) at 004052ff [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 004043f6 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406b13 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60 (00405f60) at 00405faf [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 00406817 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 0040563c [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404cc6 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 004069e8 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404a9b [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00406f89 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406e49 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 0040669d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403d18 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0 (00404ee0) at 00404f32 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403ff2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0 (004044a0) at 004044f2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 00406108 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 004063fa [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 004061ab [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 (00405b50) at 00405cad [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 (00405ce0) at 00405d32 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0 (00405ec0) at 00405f0f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 (00404d50) at 00404da2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 0040523f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 004053d9 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00 (00405a00) at 00405a8c [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 004054bc [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0 (004061f0) at 00406242 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 0040556b [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405b3a [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0 (004058d0) at 0040591c [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40 (00404e40) at 00404e92 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80 (00404f80) at 00404fd2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020 (00405020) at 00405072 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 0040417c [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403bfa [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 00404a15 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 00404824 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60 (00403d60) at 00403db2 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a80b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d659 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_VertexProcessingEnabled = 0x1
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
// Function calls:
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
//   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
//   engine_prim.c_renderPolygonSoftware_FUN_00552510

#include "nocturne.h"

void __cdecl engine_clipper_c_clipAndRasterize_FUN_004371b0(int vertex_count,int *vertex_indices)

{
  int iVar1;
  
  if (g_VertexProcessingEnabled == 0) {
    engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(vertex_indices,vertex_count);
    return;
  }
  iVar1 = engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(vertex_count,vertex_indices);
  if ((iVar1 == 0) && (2 < g_ClippedVertexCount)) {
    engine_prim_c_renderPolygonSoftware_FUN_00552510(g_ClippedVertexBuffer,g_ClippedVertexCount);
    return;
  }
  return;
}


// Assembly code:
// 004371b0: PUSH EBX
//   Label: engine_clipper.c_clipAndRasterize_FUN_004371b0
// 004371b1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004371b5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004371b9: CMP dword ptr [0x006793bc],0x0
//   XREF to: 006793bc (READ)
// 004371c0: JZ 0x004371dd
//   XREF to: 004371dd (CONDITIONAL_JUMP)
// 004371c2: PUSH EDX
// 004371c3: PUSH EAX
// 004371c4: CALL engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
//   XREF to: 004366e0 (UNCONDITIONAL_CALL)
// 004371c9: ADD ESP,0x8
// 004371cc: TEST EAX,EAX
// 004371ce: JNZ 0x004371db
//   XREF to: 004371db (CONDITIONAL_JUMP)
// 004371d0: MOV EBX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 004371d6: CMP EBX,0x2
// 004371d9: JG 0x004371e9
//   XREF to: 004371e9 (CONDITIONAL_JUMP)
// 004371db: POP EBX
//   Label: LAB_004371db
// 004371dc: RET
// 004371dd: PUSH EAX
//   Label: LAB_004371dd
// 004371de: PUSH EDX
// 004371df: CALL engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
//   XREF to: 00552a40 (UNCONDITIONAL_CALL)
// 004371e4: ADD ESP,0x8
// 004371e7: POP EBX
// 004371e8: RET
// 004371e9: PUSH EBX
//   Label: LAB_004371e9
// 004371ea: PUSH 0x824e28
//   XREF to: 00824e28 (DATA)
// 004371ef: CALL engine_prim.c_renderPolygonSoftware_FUN_00552510
//   XREF to: 00552510 (UNCONDITIONAL_CALL)
// 004371f4: ADD ESP,0x8
// 004371f7: POP EBX
// 004371f8: RET
