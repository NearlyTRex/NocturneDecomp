// Name: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// Address: 005b4823
// Address Range: [[005b4823, 005b507e] [005b5085, 005b50eb]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y)
// Cross-references:
//   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 (00404020) at 004040db [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 004076d7 [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 00407826 [DATA]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404c01 [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 (00405e20) at 00405eab [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 (00405d80) at 00405e0b [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 (00406000) at 0040608b [DATA]
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 (00405960) at 004059eb [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 00407272 [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 0040735a [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 004075f7 [DATA]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406c74 [DATA]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406d28 [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 00405845 [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 00405725 [DATA]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406bd4 [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b8a [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 0040678a [DATA]
//   engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0 (004052b0) at 00405338 [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 00404350 [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406af2 [DATA]
//   engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60 (00405f60) at 00405fe8 [DATA]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 00406850 [DATA]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 00405678 [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404cfd [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 00406985 [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404ad4 [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00406fc0 [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406e80 [DATA]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 00406688 [DATA]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403d51 [DATA]
//   engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0 (00404ee0) at 00404f6b [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403fdd [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0 (004044a0) at 0040452b [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 00406141 [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 004063a3 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 004061e4 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 (00405b50) at 00405c31 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 (00405ce0) at 00405d6b [DATA]
//   engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0 (00405ec0) at 00405f48 [DATA]
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 (00404d50) at 00404ddb [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 0040522a [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 00405415 [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00 (00405a00) at 00405a7b [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 004054f8 [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0 (004061f0) at 0040627b [DATA]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 004055a4 [DATA]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405b29 [DATA]
//   engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0 (004058d0) at 00405954 [DATA]
//   engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40 (00404e40) at 00404ecb [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80 (00404f80) at 0040500b [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020 (00405020) at 004050ab [DATA]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 004041b5 [DATA]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403ca9 [DATA]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 00404a03 [DATA]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 004047c8 [DATA]
//   engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60 (00403d60) at 00403deb [DATA]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 (0048bfe0) at 0048c116 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 (0048bf10) at 0048bfcb [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (0048b650) at 0048b716 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 (0048bdc0) at 0048bef9 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 (0048b730) at 0048b879 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 (0048bcf0) at 0048bdae [DATA]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d366 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d601 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 (0048bba0) at 0048bcd9 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 (0048bad0) at 0048bb8e [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 (0048b550) at 0048b63e [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (0048ae10) at 0048ae9d [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150 (0048b150) at 0048b1d4 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320 (0048b320) at 0048b406 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (0048b1e0) at 0048b310 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048d0c0 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (0048b890) at 0048b956 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 (0048b970) at 0048bab9 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (0048b030) at 0048b13a [DATA]
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (0048aeb0) at 0048b016 [DATA]
// Globals:
//   int g_CurrentAlphaValue = 0xff
//   int g_ScanlinePixelCount = 0x0
//   int g_StartTextureU = 0x0
//   int g_StartTextureV = 0x0
//   int g_StartDepthW = 0x0
//   int* g_CurrentScreenPtr = 00000000
//   int* g_CurrentZBufferPtr = 00000000
//   int g_DeltaTextureU = 0x0
//   int g_DeltaTextureV = 0x0
//   int g_DeltaDepthW = 0x0
//   double g_SelectedClearColor = 0.0
//   int g_VertexRedStart = 0x0
//   int g_VertexGreenStart = 0x0
//   int g_VertexBlueStart = 0x0
//   int g_VertexRedDelta = 0x0
//   int g_VertexGreenDelta = 0x0
//   int g_VertexBlueDelta = 0x0
//   int g_VertexAlphaStart = 0x0
//   int g_VertexAlphaDelta = 0x0
//   ulonglong g_TextureShift1 = 0x10
//   ulonglong g_TextureShift2 = 0x8
//   ulonglong g_TextureMask1 = 0xff
//   ulonglong g_TextureMask2 = 0xff00
//   uint g_RedMask16 = 0xf800
//   uint g_GreenMask16 = 0x7e0
//   uint g_BlueMask16 = 0x1f
//   ulonglong g_RedMask32 = 0xf80000
//   ulonglong g_GreenMask32 = 0xfc00
//   ulonglong g_BlueMask32 = 0xf8
//   ulonglong g_TotalColorBits = 0x8
//   ulonglong g_GreenBlueBits = 0x5
//   ulonglong g_BlueBitShift = 0x3
//   int g_SpecialColor = 0xffffff
//   SAlphaEntry[256] g_AlphaTable
//   undefined4 g_AlphaTable[255].red
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   uint[256] g_Hardware32BitPalette
//   int g_ActiveRenderColor
//   int g_CurrentLightingValue
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_BlendMode
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   int g_SolidColorMode

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823
          (STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

{
  SAlphaEntry SVar1;
  bool bVar2;
  byte bVar3;
  uint3 uVar7;
  undefined5 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  STexturedVertex *pSVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  ushort uVar21;
  undefined2 uVar22;
  ushort uVar24;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  undefined8 uVar23;
  ushort uVar29;
  ushort uVar30;
  uint5 uVar25;
  ushort uVar31;
  ushort uVar32;
  byte bVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint7 uVar36;
  short sVar37;
  ushort uVar38;
  short sVar40;
  short sVar41;
  ulonglong uVar39;
  short sVar42;
  short sVar43;
  short sVar45;
  short sVar46;
  ulonglong uVar44;
  short sVar47;
  ushort uVar48;
  ushort uVar49;
  char cVar4;
  char cVar5;
  char cVar6;
  
  uVar20 = left_vertex->screen_x;
  uVar12 = right_vertex->screen_x;
  uVar9 = uVar20;
  pSVar17 = left_vertex;
  if (uVar12 < uVar20) {
    uVar9 = uVar12;
    uVar12 = uVar20;
    pSVar17 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar9 = uVar9 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar9;
  if (iVar11 != 0 && uVar9 <= uVar12 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar9 * 2);
    g_ScanlinePixelCount = iVar11 * 4;
    puVar19 = g_ZBufferScanlineArray[scanline_y] + uVar9;
    g_CurrentZBufferPtr = (int *)puVar19;
    if (g_RenderStateFlags == 0x80) {
      uVar20 = pSVar17->perspective_w;
      iVar18 = (int)((ulonglong)
                     ((longlong)(int)(right_vertex->perspective_w - uVar20) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      iVar11 = g_ScanlinePixelCount;
      g_StartDepthW = uVar20;
      g_DeltaDepthW = iVar18;
      do {
        *puVar19 = uVar20;
        uVar20 = uVar20 + iVar18;
        puVar19 = puVar19 + 1;
        iVar13 = iVar11 + -4;
        bVar2 = 3 < iVar11;
        iVar11 = iVar13;
      } while (iVar13 != 0 && bVar2);
      return;
    }
    if (g_RenderStateFlag2 == PREPROCESS_TEXTURE_NORMALIZE_ALT) {
      uVar20 = pSVar17->texture_u;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                (longlong)pSVar17->perspective_w);
      uVar20 = right_vertex->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      uVar20 = pSVar17->texture_v;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                (longlong)pSVar17->perspective_w);
      uVar20 = right_vertex->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = pSVar17->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_u - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_StartTextureV = pSVar17->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_v - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    iVar18 = pSVar17->perspective_w;
    g_DeltaDepthW =
         (int)((ulonglong)
               ((longlong)(right_vertex->perspective_w - iVar18) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    g_VertexAlphaStart = pSVar17->vertex_alpha;
    g_VertexAlphaDelta =
         (int)((ulonglong)
               ((longlong)(right_vertex->vertex_alpha - g_VertexAlphaStart) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    if ((g_RenderStateFlags & 0x200U) == 0) {
      if ((g_RenderStateFlags & 4U) == 0) {
        if ((g_RenderStateFlags & 0x10U) == 0) {
          uVar39 = psllw(g_AlphaTable[0xff],7);
          uVar44 = 0;
        }
        else {
          uVar20 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar20) {
            uVar20 = 0xff;
          }
          uVar39 = psllw(g_AlphaTable[uVar20],7);
          uVar44 = 0;
        }
      }
      else {
        uVar20 = right_vertex->vertex_red - 0x100;
        uVar12 = pSVar17->vertex_red - 0x100;
        if (0xfff < uVar20) {
          uVar20 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar9 = uVar12 * 8;
        uVar20 = (uint)((ulonglong)
                        ((longlong)(int)(uVar20 * 8 + uVar12 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
        g_VertexRedStart = uVar9 & 0xffff;
        g_VertexRedDelta = uVar20 & 0xffff;
        uVar39 = ((CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff;
        uVar44 = ((CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar10 = (uint)pSVar17->vertex_red >> 1;
      uVar20 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_red >> 1) - uVar10) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexRedStart = uVar10 & 0xffff;
      g_VertexRedDelta = uVar20 & 0xffff;
      uVar15 = (uint)pSVar17->vertex_green >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_green >> 1) - uVar15) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexGreenStart = uVar15 & 0xffff;
      g_VertexGreenDelta = uVar12 & 0xffff;
      uVar14 = (uint)pSVar17->vertex_blue >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)right_vertex->vertex_blue >> 1) - uVar14) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexBlueStart = uVar14 & 0xffff;
      g_VertexBlueDelta = uVar9 & 0xffff;
      uVar39 = ((CONCAT44(uRam00682694,uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0068269c,uVar15) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826a4,uVar14) & 0xffffffff0000ffff;
      uVar44 = ((CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826bc,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826c4,uVar9) & 0xffffffff0000ffff;
    }
    uVar20 = 0;
    sVar43 = (short)uVar44;
    sVar45 = (short)(uVar44 >> 0x10);
    sVar46 = (short)(uVar44 >> 0x20);
    sVar47 = (short)(uVar44 >> 0x30);
    g_StartDepthW = iVar18;
    if ((g_CurrentTextureOpacityData == (void *)0x0) && ((g_RenderStateFlags & 2U) == 0)) {
      uVar35 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar38 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar44 = (ulonglong)_g_SolidColorMode >> 8;
      bVar33 = (byte)_g_SolidColorMode;
      uVar12 = g_StartTextureU;
      uVar9 = g_StartTextureV;
      iVar11 = g_VertexAlphaStart;
      if ((g_RenderStateFlags & 8U) == 0) {
        iVar11 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar48 = (ushort)(uVar39 >> 0x10);
        uVar49 = (ushort)(uVar39 >> 0x20);
        uVar21 = (ushort)(uVar39 >> 0x30);
        if (((g_RenderStateFlags & 0x40U) == 0) ||
           (*(int *)(uVar20 + (int)g_CurrentZBufferPtr) <= iVar18)) {
          if ((g_RenderStateFlags & 1U) == 0) {
            uVar10 = g_SpecialColor;
            if ((g_RenderStateFlags & 0x200U) == 0) {
              uVar10 = g_ActiveRenderColor;
            }
          }
          else {
            uVar10 = g_Hardware32BitPalette
                     [*(byte *)((uVar12 >> g_TextureShift1 & (uint)g_TextureMask1) +
                                (uVar9 >> g_TextureShift2 & (uint)g_TextureMask2) +
                               (int)g_CurrentTextureData)];
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar10 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar10 >> 8),(short)uVar10)) >>
                                        0x10),(short)uVar10) & 0xffffffff00ff00ff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar21 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar48 >> 3,(ushort)uVar39 >> 3))));
          sVar37 = (short)uVar23;
          bVar3 = (0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 - (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar23 >> 0x10);
          cVar4 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar23 >> 0x10) -
                  (0xff < sVar37);
          uVar22 = CONCAT11(cVar4,bVar3);
          sVar37 = (short)((ulonglong)uVar23 >> 0x20);
          cVar5 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                  (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar23 >> 0x30);
          cVar6 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar37);
          uVar10 = CONCAT13(cVar6,CONCAT12(cVar5,uVar22));
          uVar34 = (ulonglong)(uint6)uVar10;
          if ((g_RenderStateFlags & 8U) != 0) {
            SVar1 = g_AlphaTable[iVar11 >> 8];
            uVar34 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
            uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar6,(uint6)uVar10) >> 0x28),
                                                     CONCAT14(cVar5,uVar10)) >> 0x20),uVar10) >>
                           0x18);
            uVar25 = (uint5)uVar10 & 0xffff00ff00;
            uVar24 = (ushort)bVar3 * (short)uVar34 + (ushort)bVar33 * SVar1.red;
            uVar29 = ((ushort)(CONCAT43(uVar10,CONCAT12(cVar4,uVar22)) >> 0x10) & 0xff) *
                     (short)(uVar34 >> 0x10) + (ushort)(byte)uVar44 * SVar1.green;
            uVar27 = (short)(uVar25 >> 8) * (short)(uVar34 >> 0x20) +
                     (short)CONCAT21(uVar38,(char)uVar35) * SVar1.blue;
            uVar31 = (short)(uVar25 >> 0x18) * (short)(uVar34 >> 0x30) + (uVar38 >> 8) * SVar1.pad;
            uVar26 = uVar24 >> 8;
            uVar30 = uVar29 >> 8;
            uVar28 = uVar27 >> 8;
            uVar32 = uVar31 >> 8;
            uVar34 = (ulonglong)
                     CONCAT13((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                              (0xff < uVar32),
                              CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                       (0xff < uVar28),
                                       CONCAT11((uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar30),
                                                (uVar26 != 0) * (uVar26 < 0x100) *
                                                (char)(uVar24 >> 8) - (0xff < uVar26))));
          }
          *(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar34 & g_BlueMask32) >> g_BlueBitShift) |
               (ushort)((uVar34 & g_GreenMask32) >> g_GreenBlueBits) |
               (ushort)((uVar34 & g_RedMask32) >> g_TotalColorBits);
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar20) = iVar18;
          }
        }
        uVar20 = uVar20 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar20) break;
        uVar12 = uVar12 + g_DeltaTextureU;
        sVar37 = (ushort)uVar39 + sVar43;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar21 + sVar47;
        uVar9 = uVar9 + g_DeltaTextureV;
        iVar18 = iVar18 + g_DeltaDepthW;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                            sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                             0x10) < sVar40),
                                            -(ushort)(SUB82(g_SelectedClearColor,0) < sVar37)))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar37)));
      }
    }
    else {
      iVar11 = g_VertexAlphaStart;
      if ((g_RenderStateFlags & 0x100U) == 0) {
        iVar11 = g_CurrentAlphaValue << 8;
        g_VertexAlphaDelta = 0;
      }
      uVar12 = g_StartTextureU;
      uVar9 = g_StartTextureV;
      if (g_CurrentTextureOpacityData != (void *)0x0) {
        while( true ) {
          uVar38 = (ushort)uVar39;
          uVar48 = (ushort)(uVar39 >> 0x10);
          uVar49 = (ushort)(uVar39 >> 0x20);
          uVar21 = (ushort)(uVar39 >> 0x30);
          if (((g_RenderStateFlags & 0x40U) == 0) ||
             (*(int *)(uVar20 + (int)g_CurrentZBufferPtr) <= iVar18)) {
            pbVar16 = (byte *)((uVar12 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar9 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData);
            uVar10 = g_Hardware32BitPalette[*pbVar16];
            uVar39 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar10 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                              (ushort)(byte)uVar10) & 0xffffffff00ffffff;
            uVar10 = (uint)*(byte *)(((int)pbVar16 - (int)g_CurrentTextureData) +
                                    (int)g_CurrentTextureOpacityData);
            if (uVar10 != 0) {
              if ((((iVar11 < 0xff01) || (uVar10 < 0xff)) || (iVar11 < 0xff)) || (g_BlendMode != 0))
              {
                uVar15 = (uint)*(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr);
                uVar36 = (uint7)((uVar15 & _g_BlueMask16) << g_BlueBitShift) |
                         (uint7)((uVar15 & _g_GreenMask16) << g_GreenBlueBits) |
                         (uint7)((uVar15 & _g_RedMask16) << g_TotalColorBits);
                uVar24 = (ushort)(((uVar36 >> 0x18) << 0x30) >> 0x28);
                uVar7 = CONCAT21(uVar24,(char)(uVar36 >> 0x10));
                uVar8 = CONCAT41((int)(((uint7)uVar7 << 0x20) >> 0x18),(char)(uVar36 >> 8));
                uVar23 = psllw(uVar39,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar49 >> 3,
                                                         CONCAT22(uVar48 >> 3,uVar38 >> 3))));
                SVar1 = g_AlphaTable[uVar10 * iVar11 >> 0x10];
                sVar37 = (short)uVar23;
                sVar40 = (short)((ulonglong)uVar23 >> 0x10);
                sVar41 = (short)((ulonglong)uVar23 >> 0x20);
                sVar42 = (short)((ulonglong)uVar23 >> 0x30);
                uVar39 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
                uVar29 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                                 (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar42)
                                                ) << 0x30) >> 0x28);
                uVar26 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 -
                                       (0xff < sVar37));
                uVar30 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                        (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar40));
                sVar37 = (short)CONCAT21(uVar29,(0 < sVar41) * (sVar41 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar41))
                ;
                uVar29 = uVar29 >> 8;
                if (g_BlendMode == 0) {
                  uVar23 = paddusw(CONCAT26(uVar29 * SVar1.pad,
                                            CONCAT24(sVar37 * SVar1.blue,
                                                     CONCAT22(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),
                                   CONCAT26((uVar24 >> 8) * (short)(uVar39 >> 0x30),
                                            CONCAT24((short)uVar7 * (short)(uVar39 >> 0x20),
                                                     CONCAT22((short)uVar8 * (short)(uVar39 >> 0x10)
                                                              ,(ushort)(byte)uVar36 * (short)uVar39)
                                                    )));
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar39 = (ulonglong)
                           CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                    CONCAT12((uVar29 != 0) * (uVar29 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar29),
                                             CONCAT11((uVar26 != 0) * (uVar26 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x18) -
                                                      (0xff < uVar26),
                                                      (uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 8) -
                                                      (0xff < uVar24))));
                }
                else {
                  uVar23 = psllw((ulonglong)CONCAT52(uVar8,(ushort)(byte)uVar36),8);
                  uVar23 = paddusw(CONCAT26(uVar29 * SVar1.pad,
                                            CONCAT24(sVar37 * SVar1.blue,
                                                     CONCAT22(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),uVar23);
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar39 = (ulonglong)
                           CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                    CONCAT12((uVar29 != 0) * (uVar29 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar29),
                                             CONCAT11((uVar26 != 0) * (uVar26 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x18) -
                                                      (0xff < uVar26),
                                                      (uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 8) -
                                                      (0xff < uVar24))));
                }
              }
              else {
                uVar23 = psllw(uVar39,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar49 >> 3,
                                                         CONCAT22(uVar48 >> 3,uVar38 >> 3))));
                sVar37 = (short)uVar23;
                sVar40 = (short)((ulonglong)uVar23 >> 0x10);
                sVar41 = (short)((ulonglong)uVar23 >> 0x20);
                sVar42 = (short)((ulonglong)uVar23 >> 0x30);
                uVar39 = (ulonglong)
                         CONCAT13((0 < sVar42) * (sVar42 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar42),
                                  CONCAT12((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar41),
                                           CONCAT11((0 < sVar40) * (sVar40 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x10) -
                                                    (0xff < sVar40),
                                                    (0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 -
                                                    (0xff < sVar37))));
              }
              *(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr) =
                   (ushort)((uVar39 & g_BlueMask32) >> g_BlueBitShift) |
                   (ushort)((uVar39 & g_GreenMask32) >> g_GreenBlueBits) |
                   (ushort)((uVar39 & g_RedMask32) >> g_TotalColorBits);
              if ((g_RenderStateFlags & 0x80U) != 0) {
                *(int *)(uVar20 + (int)g_CurrentZBufferPtr) = iVar18;
              }
            }
          }
          uVar20 = uVar20 + 4;
          if ((uint)g_ScanlinePixelCount <= uVar20) break;
          uVar12 = uVar12 + g_DeltaTextureU;
          uVar9 = uVar9 + g_DeltaTextureV;
          iVar18 = iVar18 + g_DeltaDepthW;
          iVar11 = iVar11 + g_VertexAlphaDelta;
          uVar39 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) <
                                     (short)(uVar21 + sVar47)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                              (short)(uVar49 + sVar46)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                               0x10) < (short)(uVar48 + sVar45)),
                                              -(ushort)(SUB82(g_SelectedClearColor,0) <
                                                       (short)(uVar38 + sVar43))))) &
                   CONCAT26(uVar21 + sVar47,
                            CONCAT24(uVar49 + sVar46,CONCAT22(uVar48 + sVar45,uVar38 + sVar43)));
        }
        return;
      }
      while( true ) {
        uVar38 = (ushort)(uVar39 >> 0x10);
        uVar48 = (ushort)(uVar39 >> 0x20);
        uVar49 = (ushort)(uVar39 >> 0x30);
        if ((((g_RenderStateFlags & 0x40U) == 0) ||
            (*(int *)(uVar20 + (int)g_CurrentZBufferPtr) <= iVar18)) &&
           (uVar10 = g_Hardware32BitPalette
                     [*(byte *)((uVar12 >> g_TextureShift1 & (uint)g_TextureMask1) +
                                (uVar9 >> g_TextureShift2 & (uint)g_TextureMask2) +
                               (int)g_CurrentTextureData)], uVar10 != 0)) {
          uVar44 = 0;
          if ((g_RenderStateFlags & 0x20U) != 0) {
            uVar15 = (uint)*(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr);
            uVar36 = (uint7)((uVar15 & _g_BlueMask16) << g_BlueBitShift) |
                     (uint7)((uVar15 & _g_GreenMask16) << g_GreenBlueBits) |
                     (uint7)((uVar15 & _g_RedMask16) << g_TotalColorBits);
            uVar44 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar36 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar36 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar36 >> 8)),
                              (ushort)(byte)uVar36);
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                                  (ushort)(byte)uVar10) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar49 >> 3,
                                          CONCAT24(uVar48 >> 3,
                                                   CONCAT22(uVar38 >> 3,(ushort)uVar39 >> 3))));
          SVar1 = g_AlphaTable[iVar11 >> 8];
          sVar37 = (short)uVar23;
          sVar40 = (short)((ulonglong)uVar23 >> 0x10);
          sVar41 = (short)((ulonglong)uVar23 >> 0x20);
          sVar42 = (short)((ulonglong)uVar23 >> 0x30);
          uVar35 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
          uVar24 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar42)) <<
                            0x30) >> 0x28);
          uVar21 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 - (0xff < sVar37));
          uVar26 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar40));
          sVar37 = (short)CONCAT21(uVar24,(0 < sVar41) * (sVar41 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar41));
          uVar24 = uVar24 >> 8;
          if (g_BlendMode == 0) {
            uVar23 = paddusw(CONCAT26(uVar24 * SVar1.pad,
                                      CONCAT24(sVar37 * SVar1.blue,
                                               CONCAT22(uVar26 * SVar1.green,uVar21 * SVar1.red))),
                             CONCAT26((short)(uVar44 >> 0x30) * (short)(uVar35 >> 0x30),
                                      CONCAT24((short)(uVar44 >> 0x20) * (short)(uVar35 >> 0x20),
                                               CONCAT22((short)(uVar44 >> 0x10) *
                                                        (short)(uVar35 >> 0x10),
                                                        (short)uVar44 * (short)uVar35))));
            uVar21 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar10 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar21 != 0) * (uVar21 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar21))));
          }
          else {
            uVar23 = psllw(uVar44,8);
            uVar23 = paddusw(CONCAT26(uVar24 * SVar1.pad,
                                      CONCAT24(sVar37 * SVar1.blue,
                                               CONCAT22(uVar26 * SVar1.green,uVar21 * SVar1.red))),
                             uVar23);
            uVar21 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar10 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar21 != 0) * (uVar21 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar21))));
          }
          uVar44 = (ulonglong)uVar10;
          *(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar44 & g_BlueMask32) >> g_BlueBitShift) |
               (ushort)((uVar44 & g_GreenMask32) >> g_GreenBlueBits) |
               (ushort)((uVar44 & g_RedMask32) >> g_TotalColorBits);
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)(uVar20 + (int)g_CurrentZBufferPtr) = iVar18;
          }
        }
        uVar20 = uVar20 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar20) break;
        uVar12 = uVar12 + g_DeltaTextureU;
        sVar37 = (ushort)uVar39 + sVar43;
        sVar40 = uVar38 + sVar45;
        sVar41 = uVar48 + sVar46;
        sVar42 = uVar49 + sVar47;
        uVar9 = uVar9 + g_DeltaTextureV;
        iVar18 = iVar18 + g_DeltaDepthW;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                            sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                             0x10) < sVar40),
                                            -(ushort)(SUB82(g_SelectedClearColor,0) < sVar37)))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar37)));
      }
    }
  }
  return;
}


// Assembly code:
// 005b4823: PUSH ESI
//   Label: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// 005b4824: PUSH EDI
// 005b4825: PUSH EBP
// 005b4826: MOV EAX,dword ptr [ESI + 0x8]
// 005b4829: MOV ECX,dword ptr [EDI + 0x8]
// 005b482c: CMP EAX,ECX
// 005b482e: JBE 0x005b4833
//   XREF to: 005b4833 (CONDITIONAL_JUMP)
// 005b4830: XCHG EAX,ECX
// 005b4831: XCHG EDI,ESI
// 005b4833: SHR ECX,0x10
//   Label: LAB_005b4833
// 005b4836: SHR EAX,0x10
// 005b4839: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 005b4840: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 005b4847: SUB ECX,EAX
// 005b4849: JLE 0x005b4d1c
//   XREF to: 005b4d1c (CONDITIONAL_JUMP)
// 005b484f: LEA EBX,[EBX + EAX*0x2]
// 005b4852: SHL ECX,0x2
// 005b4855: LEA EBP,[EBP + EAX*0x4]
// 005b4859: MOV dword ptr [0x006821a4],ECX
//   XREF to: 006821a4 (WRITE)
// 005b485f: MOV dword ptr [0x00682208],EBX
//   XREF to: 00682208 (WRITE)
// 005b4865: MOV dword ptr [0x0068220c],EBP
//   XREF to: 0068220c (WRITE)
// 005b486b: CMP dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4875: JZ 0x005b50a9
//   XREF to: 005b50a9 (CONDITIONAL_JUMP)
// 005b487b: CMP dword ptr [0x02d052a4],0x5
//   XREF to: 02d052a4 (READ)
// 005b4882: JNZ 0x005b48f4
//   XREF to: 005b48f4 (CONDITIONAL_JUMP)
// 005b4884: MOV EAX,dword ptr [ESI + 0x18]
// 005b4887: MOV EBX,dword ptr [ESI + 0x28]
// 005b488a: CDQ
// 005b488b: SHLD EDX,EAX,0x18
// 005b488f: SHL EAX,0x18
// 005b4892: IDIV EBX
// 005b4894: MOV [0x006821e0],EAX
//   XREF to: 006821e0 (WRITE)
// 005b4899: MOV EAX,dword ptr [EDI + 0x18]
// 005b489c: MOV EBX,dword ptr [EDI + 0x28]
// 005b489f: CDQ
// 005b48a0: SHLD EDX,EAX,0x18
// 005b48a4: SHL EAX,0x18
// 005b48a7: IDIV EBX
// 005b48a9: SUB EAX,dword ptr [0x006821e0]
//   XREF to: 006821e0 (READ)
// 005b48af: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b48b5: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b48bb: MOV EAX,dword ptr [ESI + 0x20]
// 005b48be: MOV EBX,dword ptr [ESI + 0x28]
// 005b48c1: CDQ
// 005b48c2: SHLD EDX,EAX,0x18
// 005b48c6: SHL EAX,0x18
// 005b48c9: IDIV EBX
// 005b48cb: MOV [0x006821e4],EAX
//   XREF to: 006821e4 (WRITE)
// 005b48d0: MOV EAX,dword ptr [EDI + 0x20]
// 005b48d3: MOV EBX,dword ptr [EDI + 0x28]
// 005b48d6: CDQ
// 005b48d7: SHLD EDX,EAX,0x18
// 005b48db: SHL EAX,0x18
// 005b48de: IDIV EBX
// 005b48e0: SUB EAX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b48e6: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b48ec: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b48f2: JMP 0x005b4928
//   XREF to: 005b4928 (UNCONDITIONAL_JUMP)
// 005b48f4: MOV EAX,dword ptr [EDI + 0x18]
//   Label: LAB_005b48f4
// 005b48f7: MOV EBX,dword ptr [ESI + 0x18]
// 005b48fa: SUB EAX,EBX
// 005b48fc: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4902: MOV dword ptr [0x006821e0],EBX
//   XREF to: 006821e0 (WRITE)
// 005b4908: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b490e: MOV EAX,dword ptr [EDI + 0x20]
// 005b4911: MOV EBX,dword ptr [ESI + 0x20]
// 005b4914: SUB EAX,EBX
// 005b4916: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b491c: MOV dword ptr [0x006821e4],EBX
//   XREF to: 006821e4 (WRITE)
// 005b4922: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b4928: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b4928
// 005b492b: MOV EBX,dword ptr [ESI + 0x28]
// 005b492e: SUB EAX,EBX
// 005b4930: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4936: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b493c: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b4942: MOV EAX,dword ptr [EDI + 0x30]
// 005b4945: MOV EBX,dword ptr [ESI + 0x30]
// 005b4948: SUB EAX,EBX
// 005b494a: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4950: MOV dword ptr [0x006826d0],EBX
//   XREF to: 006826d0 (WRITE)
// 005b4956: MOV dword ptr [0x006826d8],EDX
//   XREF to: 006826d8 (WRITE)
// 005b495c: MOV EBP,dword ptr [0x006826d0]
//   XREF to: 006826d0 (READ)
// 005b4962: PXOR MM7,MM7
// 005b4965: TEST dword ptr [0x02d052a0],0x200
//   XREF to: 02d052a0 (READ)
// 005b496f: JNZ 0x005b49a4
//   XREF to: 005b49a4 (CONDITIONAL_JUMP)
// 005b4971: TEST dword ptr [0x02d052a0],0x4
//   XREF to: 02d052a0 (READ)
// 005b497b: JNZ 0x005b4a61
//   XREF to: 005b4a61 (CONDITIONAL_JUMP)
// 005b4981: TEST dword ptr [0x02d052a0],0x10
//   XREF to: 02d052a0 (READ)
// 005b498b: JNZ 0x005b4aed
//   XREF to: 005b4aed (CONDITIONAL_JUMP)
// 005b4991: MOVQ MM5,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b4998: PSLLW MM5,0x7
// 005b499c: PXOR MM6,MM6
// 005b499f: JMP 0x005b4b17
//   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)
// 005b49a4: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005b49a4
// 005b49a7: MOV EBX,dword ptr [ESI + 0x10]
// 005b49aa: SHR EAX,0x1
// 005b49ac: SHR EBX,0x1
// 005b49ae: SUB EAX,EBX
// 005b49b0: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b49b6: AND EBX,0xffff
// 005b49bc: AND EDX,0xffff
// 005b49c2: MOV dword ptr [0x00682690],EBX
//   XREF to: 00682690 (WRITE)
// 005b49c8: MOV dword ptr [0x006826b0],EDX
//   XREF to: 006826b0 (WRITE)
// 005b49ce: MOV EAX,dword ptr [EDI + 0x38]
// 005b49d1: MOV EBX,dword ptr [ESI + 0x38]
// 005b49d4: SHR EAX,0x1
// 005b49d6: SHR EBX,0x1
// 005b49d8: SUB EAX,EBX
// 005b49da: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b49e0: AND EBX,0xffff
// 005b49e6: AND EDX,0xffff
// 005b49ec: MOV dword ptr [0x00682698],EBX
//   XREF to: 00682698 (WRITE)
// 005b49f2: MOV dword ptr [0x006826b8],EDX
//   XREF to: 006826b8 (WRITE)
// 005b49f8: MOV EAX,dword ptr [EDI + 0x40]
// 005b49fb: MOV EBX,dword ptr [ESI + 0x40]
// 005b49fe: SHR EAX,0x1
// 005b4a00: SHR EBX,0x1
// 005b4a02: SUB EAX,EBX
// 005b4a04: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4a0a: AND EBX,0xffff
// 005b4a10: AND EDX,0xffff
// 005b4a16: MOV dword ptr [0x006826a0],EBX
//   XREF to: 006826a0 (WRITE)
// 005b4a1c: MOV dword ptr [0x006826c0],EDX
//   XREF to: 006826c0 (WRITE)
// 005b4a22: MOVQ MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b4a29: MOVQ MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b4a30: PSLLQ MM5,0x10
// 005b4a34: PSLLQ MM6,0x10
// 005b4a38: POR MM5,qword ptr [0x00682698]
//   XREF to: 00682698 (READ)
// 005b4a3f: POR MM6,qword ptr [0x006826b8]
//   XREF to: 006826b8 (READ)
// 005b4a46: PSLLQ MM5,0x10
// 005b4a4a: PSLLQ MM6,0x10
// 005b4a4e: POR MM5,qword ptr [0x006826a0]
//   XREF to: 006826a0 (READ)
// 005b4a55: POR MM6,qword ptr [0x006826c0]
//   XREF to: 006826c0 (READ)
// 005b4a5c: JMP 0x005b4b17
//   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)
// 005b4a61: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005b4a61
// 005b4a64: MOV EBX,dword ptr [ESI + 0x10]
// 005b4a67: SUB EAX,0x100
// 005b4a6c: SUB EBX,0x100
// 005b4a72: CMP EAX,0xfff
// 005b4a77: JBE 0x005b4a7e
//   XREF to: 005b4a7e (CONDITIONAL_JUMP)
// 005b4a79: MOV EAX,0xfff
// 005b4a7e: CMP EBX,0xfff
//   Label: LAB_005b4a7e
// 005b4a84: JBE 0x005b4a8b
//   XREF to: 005b4a8b (CONDITIONAL_JUMP)
// 005b4a86: MOV EBX,0xfff
// 005b4a8b: SHL EAX,0x3
//   Label: LAB_005b4a8b
// 005b4a8e: SHL EBX,0x3
// 005b4a91: SUB EAX,EBX
// 005b4a93: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4a99: AND EBX,0xffff
// 005b4a9f: AND EDX,0xffff
// 005b4aa5: MOV dword ptr [0x00682690],EBX
//   XREF to: 00682690 (WRITE)
// 005b4aab: MOV dword ptr [0x006826b0],EDX
//   XREF to: 006826b0 (WRITE)
// 005b4ab1: MOVQ MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b4ab8: MOVQ MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b4abf: PSLLQ MM5,0x10
// 005b4ac3: PSLLQ MM6,0x10
// 005b4ac7: POR MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b4ace: POR MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b4ad5: PSLLQ MM5,0x10
// 005b4ad9: PSLLQ MM6,0x10
// 005b4add: POR MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b4ae4: POR MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b4aeb: JMP 0x005b4b17
//   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)
// 005b4aed: MOV EAX,[0x02d02574]
//   Label: LAB_005b4aed
//   XREF to: 02d02574 (READ)
// 005b4af2: SUB EAX,0x100
// 005b4af7: SHR EAX,0x4
// 005b4afa: CMP EAX,0xff
// 005b4aff: JC 0x005b4b06
//   XREF to: 005b4b06 (CONDITIONAL_JUMP)
// 005b4b01: MOV EAX,0xff
// 005b4b06: MOVQ MM5,qword ptr [EAX*0x8 + 0x683000]
//   Label: LAB_005b4b06
//   XREF to: 00683000 (DATA)
//   XREF to: 006837f8 (READ)
// 005b4b0e: PSLLW MM5,0x7
// 005b4b12: PXOR MM6,MM6
// 005b4b15: JMP 0x005b4b17
//   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)
// 005b4b17: MOV ECX,dword ptr [0x006821e0]
//   Label: LAB_005b4b17
//   XREF to: 006821e0 (READ)
// 005b4b1d: MOV EDX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b4b23: MOV ESI,dword ptr [0x006821ec]
//   XREF to: 006821ec (READ)
// 005b4b29: MOV EDI,0x0
// 005b4b2e: CMP dword ptr [0x02d03e84],0x0
//   XREF to: 02d03e84 (READ)
// 005b4b35: JNZ 0x005b4b47
//   XREF to: 005b4b47 (CONDITIONAL_JUMP)
// 005b4b37: TEST dword ptr [0x02d052a0],0x2
//   XREF to: 02d052a0 (READ)
// 005b4b41: JZ 0x005b4f11
//   XREF to: 005b4f11 (CONDITIONAL_JUMP)
// 005b4b47: TEST dword ptr [0x02d052a0],0x100
//   Label: LAB_005b4b47
//   XREF to: 02d052a0 (READ)
// 005b4b51: JNZ 0x005b4b66
//   XREF to: 005b4b66 (CONDITIONAL_JUMP)
// 005b4b53: MOV EBP,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 005b4b59: SHL EBP,0x8
// 005b4b5c: MOV dword ptr [0x006826d8],0x0
//   XREF to: 006826d8 (WRITE)
// 005b4b66: CMP dword ptr [0x02d03e84],0x0
//   Label: LAB_005b4b66
//   XREF to: 02d03e84 (READ)
// 005b4b6d: JNZ 0x005b4d22
//   XREF to: 005b4d22 (CONDITIONAL_JUMP)
// 005b4b73: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b4b73
//   XREF to: 02d052a0 (READ)
// 005b4b7d: JZ 0x005b4b8f
//   XREF to: 005b4b8f (CONDITIONAL_JUMP)
// 005b4b7f: LEA EAX,[EDI]
// 005b4b81: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4b87: CMP ESI,dword ptr [EAX]
// 005b4b89: JL 0x005b4ce4
//   XREF to: 005b4ce4 (CONDITIONAL_JUMP)
// 005b4b8f: MOVD MM0,ECX
//   Label: LAB_005b4b8f
// 005b4b92: MOVD MM2,EDX
// 005b4b95: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b4b9c: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b4ba3: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b4baa: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b4bb1: PADDD MM0,MM2
// 005b4bb4: MOVD EBX,MM0
// 005b4bb7: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b4bbd: MOVZX EAX,byte ptr [EBX]
// 005b4bc0: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b4bc7: CMP EAX,0x0
// 005b4bca: JZ 0x005b4ce4
//   XREF to: 005b4ce4 (CONDITIONAL_JUMP)
// 005b4bd0: MOVD MM0,EAX
// 005b4bd3: PUNPCKLBW MM0,MM7
// 005b4bd6: PXOR MM4,MM4
// 005b4bd9: TEST dword ptr [0x02d052a0],0x20
//   XREF to: 02d052a0 (READ)
// 005b4be3: JZ 0x005b4c2e
//   XREF to: 005b4c2e (CONDITIONAL_JUMP)
// 005b4be5: MOV EBX,EDI
// 005b4be7: SHR EBX,0x1
// 005b4be9: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4bef: MOVZX EBX,word ptr [EBX]
// 005b4bf2: MOVD MM4,EBX
// 005b4bf5: PAND MM4,qword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 005b4bfc: PSLLQ MM4,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b4c03: MOVD MM2,EBX
// 005b4c06: PAND MM2,qword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 005b4c0d: PSLLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b4c14: POR MM4,MM2
// 005b4c17: MOVD MM2,EBX
// 005b4c1a: PAND MM2,qword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 005b4c21: PSLLQ MM2,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b4c28: POR MM4,MM2
// 005b4c2b: PUNPCKLBW MM4,MM7
// 005b4c2e: PSLLW MM0,0x4
//   Label: LAB_005b4c2e
// 005b4c32: MOVQ MM7,MM5
// 005b4c35: MOV EAX,EBP
// 005b4c37: PSRLW MM7,0x3
// 005b4c3b: SAR EAX,0x8
// 005b4c3e: PMULHW MM0,MM7
// 005b4c41: MOVQ MM2,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 006837f8 (READ)
// 005b4c49: PXOR MM7,MM7
// 005b4c4c: MOVQ MM3,MM2
// 005b4c4f: PACKUSWB MM0,MM7
// 005b4c52: PXOR MM3,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b4c59: PUNPCKLBW MM0,MM7
// 005b4c5c: CMP dword ptr [0x02d05298],0x0
//   XREF to: 02d05298 (READ)
// 005b4c63: JNZ 0x005b4c77
//   XREF to: 005b4c77 (CONDITIONAL_JUMP)
// 005b4c65: PMULLW MM4,MM3
// 005b4c68: PMULLW MM0,MM2
// 005b4c6b: PADDUSW MM0,MM4
// 005b4c6e: PSRLW MM0,0x8
// 005b4c72: PACKUSWB MM0,MM7
// 005b4c75: JMP 0x005b4c88
//   XREF to: 005b4c88 (UNCONDITIONAL_JUMP)
// 005b4c77: PSLLW MM4,0x8
//   Label: LAB_005b4c77
// 005b4c7b: PMULLW MM0,MM2
// 005b4c7e: PADDUSW MM0,MM4
// 005b4c81: PSRLW MM0,0x8
// 005b4c85: PACKUSWB MM0,MM7
// 005b4c88: MOV EBX,EDI
//   Label: LAB_005b4c88
// 005b4c8a: SHR EBX,0x1
// 005b4c8c: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4c92: MOVQ MM2,MM0
// 005b4c95: MOVQ MM4,MM0
// 005b4c98: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 005b4c9f: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 005b4ca6: PAND MM4,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 005b4cad: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b4cb4: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b4cbb: PSRLQ MM4,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b4cc2: POR MM0,MM2
// 005b4cc5: POR MM0,MM4
// 005b4cc8: MOVD EAX,MM0
// 005b4ccb: MOV word ptr [EBX],AX
// 005b4cce: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4cd8: JZ 0x005b4ce4
//   XREF to: 005b4ce4 (CONDITIONAL_JUMP)
// 005b4cda: MOV EAX,EDI
// 005b4cdc: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4ce2: MOV dword ptr [EAX],ESI
// 005b4ce4: ADD EDI,0x4
//   Label: LAB_005b4ce4
// 005b4ce7: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b4ced: JNC 0x005b4d1c
//   XREF to: 005b4d1c (CONDITIONAL_JUMP)
// 005b4cef: ADD ECX,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b4cf5: PADDW MM5,MM6
// 005b4cf8: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b4cfe: MOVQ MM0,MM5
// 005b4d01: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b4d07: PCMPGTW MM5,qword ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b4d0e: ADD EBP,dword ptr [0x006826d8]
//   XREF to: 006826d8 (READ)
// 005b4d14: PAND MM5,MM0
// 005b4d17: JMP 0x005b4b73
//   XREF to: 005b4b73 (UNCONDITIONAL_JUMP)
// 005b4d1c: POP EBP
//   Label: LAB_005b4d1c
// 005b4d1d: EMMS
// 005b4d1f: POP EDI
// 005b4d20: POP ESI
// 005b4d21: RET
// 005b4d22: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b4d22
//   XREF to: 02d052a0 (READ)
// 005b4d2c: JZ 0x005b4d3e
//   XREF to: 005b4d3e (CONDITIONAL_JUMP)
// 005b4d2e: LEA EAX,[EDI]
// 005b4d30: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4d36: CMP ESI,dword ptr [EAX]
// 005b4d38: JL 0x005b4ed3
//   XREF to: 005b4ed3 (CONDITIONAL_JUMP)
// 005b4d3e: MOVD MM0,ECX
//   Label: LAB_005b4d3e
// 005b4d41: MOVD MM2,EDX
// 005b4d44: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b4d4b: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b4d52: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b4d59: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b4d60: PADDD MM0,MM2
// 005b4d63: MOVD EBX,MM0
// 005b4d66: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b4d6c: MOVZX EAX,byte ptr [EBX]
// 005b4d6f: MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b4d77: PUNPCKLBW MM0,MM7
// 005b4d7a: SUB EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b4d80: ADD EBX,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 005b4d86: MOVZX EAX,byte ptr [EBX]
// 005b4d89: TEST EAX,0xffffffff
// 005b4d8e: JZ 0x005b4ed3
//   XREF to: 005b4ed3 (CONDITIONAL_JUMP)
// 005b4d94: CMP EBP,0xff00
// 005b4d9a: JLE 0x005b4da7
//   XREF to: 005b4da7 (CONDITIONAL_JUMP)
// 005b4d9c: CMP EAX,0xff
// 005b4da1: JGE 0x005b4e3a
//   XREF to: 005b4e3a (CONDITIONAL_JUMP)
// 005b4da7: MOV EBX,EDI
//   Label: LAB_005b4da7
// 005b4da9: SHR EBX,0x1
// 005b4dab: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4db1: MOVZX EBX,word ptr [EBX]
// 005b4db4: MOVD MM4,EBX
// 005b4db7: PAND MM4,qword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 005b4dbe: PSLLQ MM4,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b4dc5: MOVD MM2,EBX
// 005b4dc8: PAND MM2,qword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 005b4dcf: PSLLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b4dd6: POR MM4,MM2
// 005b4dd9: MOVD MM2,EBX
// 005b4ddc: PAND MM2,qword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 005b4de3: PSLLQ MM2,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b4dea: POR MM4,MM2
// 005b4ded: PUNPCKLBW MM4,MM7
// 005b4df0: PSLLW MM0,0x4
// 005b4df4: MOVQ MM7,MM5
// 005b4df7: IMUL EAX,EBP
// 005b4dfa: PSRLW MM7,0x3
// 005b4dfe: SHR EAX,0x10
// 005b4e01: PMULHW MM0,MM7
// 005b4e04: MOVQ MM2,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 00683000 (DATA)
// 005b4e0c: PXOR MM7,MM7
// 005b4e0f: MOVQ MM3,MM2
// 005b4e12: PACKUSWB MM0,MM7
// 005b4e15: PXOR MM3,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b4e1c: PUNPCKLBW MM0,MM7
// 005b4e1f: CMP dword ptr [0x02d05298],0x0
//   XREF to: 02d05298 (READ)
// 005b4e26: JNZ 0x005b4e66
//   XREF to: 005b4e66 (CONDITIONAL_JUMP)
// 005b4e28: PMULLW MM4,MM3
// 005b4e2b: PMULLW MM0,MM2
// 005b4e2e: PADDUSW MM0,MM4
// 005b4e31: PSRLW MM0,0x8
// 005b4e35: PACKUSWB MM0,MM7
// 005b4e38: JMP 0x005b4e77
//   XREF to: 005b4e77 (UNCONDITIONAL_JUMP)
// 005b4e3a: CMP EBP,0xff
//   Label: LAB_005b4e3a
// 005b4e40: JL 0x005b4da7
//   XREF to: 005b4da7 (CONDITIONAL_JUMP)
// 005b4e46: CMP dword ptr [0x02d05298],0x0
//   XREF to: 02d05298 (READ)
// 005b4e4d: JNZ 0x005b4da7
//   XREF to: 005b4da7 (CONDITIONAL_JUMP)
// 005b4e53: MOVQ MM3,MM5
// 005b4e56: PSRLW MM3,0x3
// 005b4e5a: PSLLW MM0,0x4
// 005b4e5e: PMULHW MM0,MM3
// 005b4e61: PACKUSWB MM0,MM7
// 005b4e64: JMP 0x005b4e77
//   XREF to: 005b4e77 (UNCONDITIONAL_JUMP)
// 005b4e66: PSLLW MM4,0x8
//   Label: LAB_005b4e66
// 005b4e6a: PMULLW MM0,MM2
// 005b4e6d: PADDUSW MM0,MM4
// 005b4e70: PSRLW MM0,0x8
// 005b4e74: PACKUSWB MM0,MM7
// 005b4e77: MOV EBX,EDI
//   Label: LAB_005b4e77
// 005b4e79: SHR EBX,0x1
// 005b4e7b: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4e81: MOVQ MM2,MM0
// 005b4e84: MOVQ MM4,MM0
// 005b4e87: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 005b4e8e: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 005b4e95: PAND MM4,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 005b4e9c: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b4ea3: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b4eaa: PSRLQ MM4,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b4eb1: POR MM0,MM2
// 005b4eb4: POR MM0,MM4
// 005b4eb7: MOVD EAX,MM0
// 005b4eba: MOV word ptr [EBX],AX
// 005b4ebd: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4ec7: JZ 0x005b4ed3
//   XREF to: 005b4ed3 (CONDITIONAL_JUMP)
// 005b4ec9: MOV EAX,EDI
// 005b4ecb: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4ed1: MOV dword ptr [EAX],ESI
// 005b4ed3: ADD EDI,0x4
//   Label: LAB_005b4ed3
// 005b4ed6: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b4edc: JNC 0x005b4f0b
//   XREF to: 005b4f0b (CONDITIONAL_JUMP)
// 005b4ede: ADD ECX,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b4ee4: PADDW MM5,MM6
// 005b4ee7: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b4eed: MOVQ MM0,MM5
// 005b4ef0: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b4ef6: PCMPGTW MM5,qword ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b4efd: ADD EBP,dword ptr [0x006826d8]
//   XREF to: 006826d8 (READ)
// 005b4f03: PAND MM5,MM0
// 005b4f06: JMP 0x005b4d22
//   XREF to: 005b4d22 (UNCONDITIONAL_JUMP)
// 005b4f0b: POP EBP
//   Label: LAB_005b4f0b
// 005b4f0c: EMMS
// 005b4f0e: POP EDI
// 005b4f0f: POP ESI
// 005b4f10: RET
// 005b4f11: MOVQ MM1,qword ptr [0x02d052a8]
//   Label: LAB_005b4f11
//   XREF to: 02d052a8 (READ)
// 005b4f18: PUNPCKLBW MM1,MM7
// 005b4f1b: TEST dword ptr [0x02d052a0],0x8
//   XREF to: 02d052a0 (READ)
// 005b4f25: JNZ 0x005b4f36
//   XREF to: 005b4f36 (CONDITIONAL_JUMP)
// 005b4f27: MOV EBP,0x0
// 005b4f2c: MOV dword ptr [0x006826d8],0x0
//   XREF to: 006826d8 (WRITE)
// 005b4f36: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b4f36
//   XREF to: 02d052a0 (READ)
// 005b4f40: JZ 0x005b4f52
//   XREF to: 005b4f52 (CONDITIONAL_JUMP)
// 005b4f42: LEA EAX,[EDI]
// 005b4f44: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4f4a: CMP ESI,dword ptr [EAX]
// 005b4f4c: JL 0x005b5043
//   XREF to: 005b5043 (CONDITIONAL_JUMP)
// 005b4f52: TEST dword ptr [0x02d052a0],0x1
//   Label: LAB_005b4f52
//   XREF to: 02d052a0 (READ)
// 005b4f5c: JZ 0x005b5085
//   XREF to: 005b5085 (CONDITIONAL_JUMP)
// 005b4f62: MOVD MM0,ECX
// 005b4f65: MOVD MM2,EDX
// 005b4f68: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b4f6f: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b4f76: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b4f7d: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b4f84: PADDD MM0,MM2
// 005b4f87: MOVD EBX,MM0
// 005b4f8a: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b4f90: MOVZX EAX,byte ptr [EBX]
// 005b4f93: MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b4f9b: MOVQ MM3,MM5
//   Label: LAB_005b4f9b
// 005b4f9e: PUNPCKLBW MM0,MM7
// 005b4fa1: PSRLW MM3,0x3
// 005b4fa5: PSLLW MM0,0x4
// 005b4fa9: PMULHW MM0,MM3
// 005b4fac: PACKUSWB MM0,MM7
// 005b4faf: TEST dword ptr [0x02d052a0],0x8
//   XREF to: 02d052a0 (READ)
// 005b4fb9: JZ 0x005b4fe8
//   XREF to: 005b4fe8 (CONDITIONAL_JUMP)
// 005b4fbb: MOV EAX,EBP
// 005b4fbd: SAR EAX,0x8
// 005b4fc0: MOVQ MM3,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 00683000 (DATA)
// 005b4fc8: MOVQ MM4,MM1
// 005b4fcb: MOVQ MM2,MM3
// 005b4fce: PMULLW MM4,MM3
// 005b4fd1: PXOR MM2,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b4fd8: PUNPCKLBW MM0,MM7
// 005b4fdb: PMULLW MM0,MM2
// 005b4fde: PADDW MM0,MM4
// 005b4fe1: PSRLW MM0,0x8
// 005b4fe5: PACKUSWB MM0,MM7
// 005b4fe8: MOV EBX,EDI
//   Label: LAB_005b4fe8
// 005b4fea: SHR EBX,0x1
// 005b4fec: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4ff2: MOVQ MM2,MM0
// 005b4ff5: MOVQ MM4,MM0
// 005b4ff8: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 005b4fff: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 005b5006: PAND MM4,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 005b500d: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b5014: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b501b: PSRLQ MM4,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b5022: POR MM0,MM2
// 005b5025: POR MM0,MM4
// 005b5028: MOVD EAX,MM0
// 005b502b: MOV word ptr [EBX],AX
// 005b502e: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b5038: JZ 0x005b5043
//   XREF to: 005b5043 (CONDITIONAL_JUMP)
// 005b503a: MOV EAX,[0x0068220c]
//   XREF to: 0068220c (READ)
// 005b503f: ADD EAX,EDI
// 005b5041: MOV dword ptr [EAX],ESI
// 005b5043: ADD EDI,0x4
//   Label: LAB_005b5043
// 005b5046: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b504c: JNC 0x005b4d1c
//   XREF to: 005b4d1c (CONDITIONAL_JUMP)
// 005b5052: ADD ECX,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b5058: PADDW MM5,MM6
// 005b505b: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b5061: MOVQ MM0,MM5
// 005b5064: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b506a: PCMPGTW MM5,qword ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b5071: ADD EBP,dword ptr [0x006826d8]
//   XREF to: 006826d8 (READ)
// 005b5077: PAND MM5,MM0
// 005b507a: JMP 0x005b4f36
//   XREF to: 005b4f36 (UNCONDITIONAL_JUMP)
// 005b5085: TEST dword ptr [0x02d052a0],0x200
//   Label: LAB_005b5085
//   XREF to: 02d052a0 (READ)
// 005b508f: JNZ 0x005b509d
//   XREF to: 005b509d (CONDITIONAL_JUMP)
// 005b5091: MOVD MM0,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 005b5098: JMP 0x005b4f9b
//   XREF to: 005b4f9b (UNCONDITIONAL_JUMP)
// 005b509d: MOVD MM0,dword ptr [0x006827f0]
//   Label: LAB_005b509d
//   XREF to: 006827f0 (READ)
// 005b50a4: JMP 0x005b4f9b
//   XREF to: 005b4f9b (UNCONDITIONAL_JUMP)
// 005b50a9: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b50a9
// 005b50ac: MOV EBX,dword ptr [ESI + 0x28]
// 005b50af: SUB EAX,EBX
// 005b50b1: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b50b7: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b50bd: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b50c3: MOV EAX,[0x006821ec]
//   XREF to: 006821ec (READ)
// 005b50c8: MOV EBX,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b50ce: MOV ESI,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b50d4: MOV ECX,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b50da: MOV dword ptr [ESI],EAX
//   Label: LAB_005b50da
// 005b50dc: ADD EAX,EBX
// 005b50de: ADD ESI,0x4
// 005b50e1: SUB ECX,0x4
// 005b50e4: JG 0x005b50da
//   XREF to: 005b50da (CONDITIONAL_JUMP)
// 005b50e6: POP EBP
// 005b50e7: EMMS
// 005b50e9: POP EDI
// 005b50ea: POP ESI
// 005b50eb: RET
