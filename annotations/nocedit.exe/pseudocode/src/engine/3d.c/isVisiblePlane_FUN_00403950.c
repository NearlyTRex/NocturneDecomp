// Name: engine_3d.c_isVisiblePlane_FUN_00403950
// Address: 00403950
// Address Range: [[00403950, 004039ba]]
// Convention: __cdecl
// Signature: int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
// Cross-references:
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 00482935 [UNCONDITIONAL_CALL]
//   engine_3d.c_addFaceIfVisible_FUN_004079c0 (004079c0) at 004079c8 [UNCONDITIONAL_CALL]
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407be0 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 0040762c [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 00407730 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404af5 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 (00405e20) at 00405e2e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 (00405d80) at 00405d8e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 (00406000) at 0040600e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 (00405960) at 0040596e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 004072a2 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 00407486 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406bee [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406c8d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 004057be [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 0040569e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406b4e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403ade [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 004066de [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0 (004052b0) at 004052be [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 00404232 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406a2d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60 (00405f60) at 00405f6e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 004067ae [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 004055f0 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404c6d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 00406870 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404a4e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00406f3a [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406dfa [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 00406444 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403cce [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0 (00404ee0) at 00404eee [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403f2d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0 (004044a0) at 004044ae [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 004060ae [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 004062a0 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 0040615e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 (00405b50) at 00405b64 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 (00405ce0) at 00405cee [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0 (00405ec0) at 00405ece [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 (00404d50) at 00404d5e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 0040517d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 00405390 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 00405470 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0 (004061f0) at 004061fe [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 0040551e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0 (004058d0) at 004058dd [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40 (00404e40) at 00404e4e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80 (00404f80) at 00404f8e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020 (00405020) at 0040502e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 0040412e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403bae [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 0040484d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 004046d4 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60 (00403d60) at 00403d6e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0 (0048d7a0) at 0048d7b9 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700 (0048d700) at 0048d716 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 (0048a950) at 0048aa16 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 (0048a8a0) at 0048a91a [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 (0048a820) at 0048a869 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 (0048bfe0) at 0048c096 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 (0048bf10) at 0048bf95 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 (0048c8d0) at 0048c8f5 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (0048b650) at 0048b6da [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 (0048bdc0) at 0048be76 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 (0048b730) at 0048b7f6 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 (0048bcf0) at 0048bd75 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 (0048bba0) at 0048bc56 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 (0048bad0) at 0048bb55 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 (0048b550) at 0048b602 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90 (0048ad90) at 0048add9 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (0048ae10) at 0048ae69 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150 (0048b150) at 0048b19b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (0048b1e0) at 0048b278 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 (0048b420) at 0048b4b9 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 (0048aa50) at 0048ab09 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 (0048ab50) at 0048abf7 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (0048ac40) at 0048ad09 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (0048b890) at 0048b91a [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 (0048b970) at 0048ba36 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (0048aeb0) at 0048af7e [UNCONDITIONAL_CALL]
//   shape_design.c_findClosestPolygonToMouse_FUN_00466250 (00466250) at 00466577 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470 (0045d470) at 0045d48c [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonWireframe_FUN_0045d300 (0045d300) at 0045d31c [UNCONDITIONAL_CALL]
// Globals:
//   int g_PlaneTestCount
//   int g_CullingMode
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ

#include "nocturne.h"

int __cdecl engine_3d_c_isVisiblePlane_FUN_00403950(SClipPlane *plane)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_PlaneTestCount = g_PlaneTestCount + 1;
  iVar4 = 1;
  if (((g_CullingMode == 0) &&
      (((plane->A != 0 || plane->B != 0) || plane->C != 0) || plane->D != 0)) &&
     (lVar3 = (longlong)plane->B * (longlong)g_RelativeY +
              (longlong)plane->A * (longlong)g_RelativeX +
              (longlong)plane->C * (longlong)g_RelativeZ, iVar5 = (int)((ulonglong)lVar3 >> 0x20),
     iVar6 = plane->D >> 0x1f, uVar1 = (uint)((uint)plane->D < (uint)lVar3), iVar2 = iVar6 - iVar5,
     iVar4 = 1, (SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0)) {
    iVar4 = 0;
  }
  return iVar4;
}


// Assembly code:
// 00403950: PUSH EBX
//   Label: engine_3d.c_isVisiblePlane_FUN_00403950
// 00403951: PUSH ESI
// 00403952: MOV EDX,dword ptr [0x00772a68]
//   XREF to: 00772a68 (READ)
// 00403958: INC EDX
// 00403959: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040395d: MOV dword ptr [0x00772a68],EDX
//   XREF to: 00772a68 (WRITE)
// 00403963: MOV EAX,0x1
// 00403968: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 0040396f: JNZ 0x004039b8
//   XREF to: 004039b8 (CONDITIONAL_JUMP)
// 00403971: MOV EBX,dword ptr [ESI]
// 00403973: OR EBX,dword ptr [ESI + 0x4]
// 00403976: OR EBX,dword ptr [ESI + 0x8]
// 00403979: OR EBX,dword ptr [ESI + 0xc]
// 0040397c: JZ 0x004039b8
//   XREF to: 004039b8 (CONDITIONAL_JUMP)
// 0040397e: MOV EAX,dword ptr [ESI]
// 00403980: IMUL dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 00403986: MOV EBX,EAX
// 00403988: MOV ECX,EDX
// 0040398a: MOV EAX,dword ptr [ESI + 0x4]
// 0040398d: IMUL dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 00403993: ADD EBX,EAX
// 00403995: ADC ECX,EDX
// 00403997: MOV EAX,dword ptr [ESI + 0x8]
// 0040399a: IMUL dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 004039a0: ADD EBX,EAX
// 004039a2: ADC ECX,EDX
// 004039a4: MOV EAX,dword ptr [ESI + 0xc]
// 004039a7: CDQ
// 004039a8: SUB EAX,EBX
// 004039aa: SBB EDX,ECX
// 004039ac: MOV EAX,0x1
// 004039b1: JL 0x004039b8
//   XREF to: 004039b8 (CONDITIONAL_JUMP)
// 004039b3: MOV EAX,0x0
// 004039b8: POP ESI
//   Label: LAB_004039b8
// 004039b9: POP EBX
// 004039ba: RET
