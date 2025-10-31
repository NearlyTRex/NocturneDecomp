// Name: wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
// Address: 005b4031
// Address Range: [[005b4031, 005b41b1] [005b41c0, 005b427c] [005b4280, 005b430b] [005b4310, 005b4339] [005b4340, 005b4464] [005b4470, 005b44d9] [005b44e0, 005b44e5] [005b44f0, 005b45c8] [005b45d0, 005b45f3] [005b4600, 005b4669] [005b4670, 005b47a8] [005b47b6, 005b47cd] [005b47d0, 005b47db] [005b47e0, 005b4822]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y)
// Cross-references:
//   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 (00404020) at 004040cc [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 004076cb [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 00407817 [DATA]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404c47 [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 (00405e20) at 00405e9f [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 (00405d80) at 00405dff [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 (00406000) at 0040607f [DATA]
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 (00405960) at 004059df [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 00407263 [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 0040734b [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 004075e8 [DATA]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406c68 [DATA]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406d1c [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 004058b3 [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 00405790 [DATA]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406bc8 [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b7e [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 0040677e [DATA]
//   engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0 (004052b0) at 0040532c [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 00404341 [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406ae3 [DATA]
//   engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60 (00405f60) at 00405fdc [DATA]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 00406844 [DATA]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 0040566c [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404cf1 [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 00406976 [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404ac8 [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 0040702d [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406eea [DATA]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 004065a3 [DATA]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403d45 [DATA]
//   engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0 (00404ee0) at 00404f5f [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403fd1 [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0 (004044a0) at 0040451f [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 00406135 [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 00406394 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 004061d8 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 (00405b50) at 00405c22 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 (00405ce0) at 00405d5f [DATA]
//   engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0 (00405ec0) at 00405f3c [DATA]
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 (00404d50) at 00404dcf [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 0040521e [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 00405409 [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00 (00405a00) at 00405a6f [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 004054ec [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0 (004061f0) at 0040626f [DATA]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 00405598 [DATA]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405b1d [DATA]
//   engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0 (004058d0) at 00405948 [DATA]
//   engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40 (00404e40) at 00404ebf [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80 (00404f80) at 00404fff [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020 (00405020) at 0040509f [DATA]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 004041a9 [DATA]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403c26 [DATA]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 00404966 [DATA]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 0040480c [DATA]
//   engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60 (00403d60) at 00403ddf [DATA]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 (0048bfe0) at 0048c0b0 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 (0048bf10) at 0048bfac [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (0048b650) at 0048b6f4 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 (0048bdc0) at 0048be90 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 (0048b730) at 0048b810 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 (0048bcf0) at 0048bd8c [DATA]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d214 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d5f2 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 (0048bba0) at 0048bc70 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 (0048bad0) at 0048bb6c [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 (0048b550) at 0048b61c [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (0048ae10) at 0048ae80 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150 (0048b150) at 0048b1b2 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320 (0048b320) at 0048b379 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (0048b1e0) at 0048b2eb [DATA]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048cfc8 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (0048b890) at 0048b934 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 (0048b970) at 0048ba50 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (0048b030) at 0048b10a [DATA]
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (0048aeb0) at 0048aff3 [DATA]
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
wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031
          (STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

{
  SAlphaEntry SVar1;
  bool bVar2;
  byte bVar3;
  undefined6 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  STexturedVertex *pSVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  ushort uVar20;
  undefined2 uVar21;
  ushort uVar24;
  undefined4 uVar22;
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
  short sVar36;
  ushort uVar37;
  short sVar39;
  short sVar40;
  ulonglong uVar38;
  short sVar41;
  short sVar42;
  short sVar44;
  short sVar45;
  ulonglong uVar43;
  short sVar46;
  ushort uVar47;
  ushort uVar48;
  char cVar4;
  char cVar5;
  byte bVar6;
  
  uVar19 = left_vertex->screen_x;
  uVar11 = right_vertex->screen_x;
  uVar8 = uVar19;
  pSVar16 = left_vertex;
  if (uVar11 < uVar19) {
    uVar8 = uVar11;
    uVar11 = uVar19;
    pSVar16 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar8 = uVar8 >> 0x10;
  iVar10 = (uVar11 >> 0x10) - uVar8;
  if (iVar10 != 0 && uVar8 <= uVar11 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar8 * 4);
    g_ScanlinePixelCount = iVar10 * 4;
    puVar18 = g_ZBufferScanlineArray[scanline_y] + uVar8;
    g_CurrentZBufferPtr = (int *)puVar18;
    if (g_RenderStateFlags == 0x80) {
      uVar19 = pSVar16->perspective_w;
      iVar17 = (int)((ulonglong)
                     ((longlong)(int)(right_vertex->perspective_w - uVar19) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      iVar10 = g_ScanlinePixelCount;
      g_StartDepthW = uVar19;
      g_DeltaDepthW = iVar17;
      do {
        *puVar18 = uVar19;
        uVar19 = uVar19 + iVar17;
        puVar18 = puVar18 + 1;
        iVar12 = iVar10 + -4;
        bVar2 = 3 < iVar10;
        iVar10 = iVar12;
      } while (iVar12 != 0 && bVar2);
      return;
    }
    if (g_RenderStateFlag2 == PREPROCESS_TEXTURE_NORMALIZE_ALT) {
      uVar19 = pSVar16->texture_u;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)pSVar16->perspective_w);
      uVar19 = right_vertex->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      uVar19 = pSVar16->texture_v;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)pSVar16->perspective_w);
      uVar19 = right_vertex->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = pSVar16->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_u - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_StartTextureV = pSVar16->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_v - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    iVar17 = pSVar16->perspective_w;
    g_DeltaDepthW =
         (int)((ulonglong)
               ((longlong)(right_vertex->perspective_w - iVar17) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    g_VertexAlphaStart = pSVar16->vertex_alpha;
    g_VertexAlphaDelta =
         (int)((ulonglong)
               ((longlong)(right_vertex->vertex_alpha - g_VertexAlphaStart) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    if ((g_RenderStateFlags & 0x200U) == 0) {
      if ((g_RenderStateFlags & 4U) == 0) {
        if ((g_RenderStateFlags & 0x10U) == 0) {
          uVar38 = psllw(g_AlphaTable[0xff],7);
          uVar43 = 0;
        }
        else {
          uVar19 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          uVar38 = psllw(g_AlphaTable[uVar19],7);
          uVar43 = 0;
        }
      }
      else {
        uVar19 = right_vertex->vertex_red - 0x100;
        uVar11 = pSVar16->vertex_red - 0x100;
        if (0xfff < uVar19) {
          uVar19 = 0xfff;
        }
        if (0xfff < uVar11) {
          uVar11 = 0xfff;
        }
        uVar8 = uVar11 * 8;
        uVar19 = (uint)((ulonglong)
                        ((longlong)(int)(uVar19 * 8 + uVar11 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
        g_VertexRedStart = uVar8 & 0xffff;
        g_VertexRedDelta = uVar19 & 0xffff;
        uVar38 = ((CONCAT44(uRam00682694,uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam00682694,uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam00682694,uVar8) & 0xffffffff0000ffff;
        uVar43 = ((CONCAT44(uRam006826b4,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam006826b4,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam006826b4,uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar9 = (uint)pSVar16->vertex_red >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_red >> 1) - uVar9) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexRedStart = uVar9 & 0xffff;
      g_VertexRedDelta = uVar19 & 0xffff;
      uVar13 = (uint)pSVar16->vertex_green >> 1;
      uVar11 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_green >> 1) - uVar13) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexGreenStart = uVar13 & 0xffff;
      g_VertexGreenDelta = uVar11 & 0xffff;
      uVar14 = (uint)pSVar16->vertex_blue >> 1;
      uVar8 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)right_vertex->vertex_blue >> 1) - uVar14) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexBlueStart = uVar14 & 0xffff;
      g_VertexBlueDelta = uVar8 & 0xffff;
      uVar38 = ((CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0068269c,uVar13) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826a4,uVar14) & 0xffffffff0000ffff;
      uVar43 = ((CONCAT44(uRam006826b4,uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826bc,uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826c4,uVar8) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar42 = (short)uVar43;
    sVar44 = (short)(uVar43 >> 0x10);
    sVar45 = (short)(uVar43 >> 0x20);
    sVar46 = (short)(uVar43 >> 0x30);
    g_StartDepthW = iVar17;
    if ((g_CurrentTextureOpacityData == (void *)0x0) && ((g_RenderStateFlags & 2U) == 0)) {
      uVar35 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar37 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar43 = (ulonglong)_g_SolidColorMode >> 8;
      bVar33 = (byte)_g_SolidColorMode;
      uVar11 = g_StartTextureU;
      uVar8 = g_StartTextureV;
      iVar10 = g_VertexAlphaStart;
      if ((g_RenderStateFlags & 8U) == 0) {
        iVar10 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar47 = (ushort)(uVar38 >> 0x10);
        uVar48 = (ushort)(uVar38 >> 0x20);
        uVar20 = (ushort)(uVar38 >> 0x30);
        if (((g_RenderStateFlags & 0x40U) == 0) ||
           (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) {
          if ((g_RenderStateFlags & 1U) == 0) {
            uVar9 = g_SpecialColor;
            if ((g_RenderStateFlags & 0x200U) == 0) {
              uVar9 = g_ActiveRenderColor;
            }
          }
          else {
            uVar9 = g_Hardware32BitPalette
                    [*(byte *)((uVar11 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar8 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData)];
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar9 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar9 >> 8),(short)uVar9)) >> 0x10
                                        ),(short)uVar9) & 0xffffffff00ff00ff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                          CONCAT24(uVar48 >> 3,
                                                   CONCAT22(uVar47 >> 3,(ushort)uVar38 >> 3))));
          sVar36 = (short)uVar23;
          bVar3 = (0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 - (0xff < sVar36);
          sVar36 = (short)((ulonglong)uVar23 >> 0x10);
          cVar4 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar23 >> 0x10) -
                  (0xff < sVar36);
          uVar21 = CONCAT11(cVar4,bVar3);
          sVar36 = (short)((ulonglong)uVar23 >> 0x20);
          cVar5 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                  (0xff < sVar36);
          sVar36 = (short)((ulonglong)uVar23 >> 0x30);
          bVar6 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar36);
          uVar22 = CONCAT13(bVar6,CONCAT12(cVar5,uVar21));
          if ((g_RenderStateFlags & 8U) != 0) {
            SVar1 = g_AlphaTable[iVar10 >> 8];
            uVar34 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
            uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar6 << 0x30) >> 0x28),
                                                    CONCAT14(cVar5,uVar22)) >> 0x20),uVar22) >> 0x18
                          );
            uVar25 = (uint5)uVar9 & 0xffffffff00;
            uVar24 = (ushort)bVar3 * (short)uVar34 + (ushort)bVar33 * SVar1.red;
            uVar29 = ((ushort)(CONCAT43(uVar9,CONCAT12(cVar4,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar34 >> 0x10) + (ushort)(byte)uVar43 * SVar1.green;
            uVar27 = (short)(uVar25 >> 8) * (short)(uVar34 >> 0x20) +
                     (short)CONCAT21(uVar37,(char)uVar35) * SVar1.blue;
            uVar31 = (short)(uVar25 >> 0x18) * (short)(uVar34 >> 0x30) + (uVar37 >> 8) * SVar1.pad;
            uVar26 = uVar24 >> 8;
            uVar30 = uVar29 >> 8;
            uVar28 = uVar27 >> 8;
            uVar32 = uVar31 >> 8;
            uVar22 = CONCAT13((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                              (0xff < uVar32),
                              CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                       (0xff < uVar28),
                                       CONCAT11((uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar30),
                                                (uVar26 != 0) * (uVar26 < 0x100) *
                                                (char)(uVar24 >> 8) - (0xff < uVar26))));
          }
          *(undefined4 *)((int)g_CurrentScreenPtr + uVar19) = uVar22;
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar19) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar19) break;
        uVar11 = uVar11 + g_DeltaTextureU;
        sVar36 = (ushort)uVar38 + sVar42;
        sVar39 = uVar47 + sVar44;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar20 + sVar46;
        uVar8 = uVar8 + g_DeltaTextureV;
        iVar17 = iVar17 + g_DeltaDepthW;
        iVar10 = iVar10 + g_VertexAlphaDelta;
        uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) < sVar41),
                          CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                            sVar40),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                             0x10) < sVar39),
                                            -(ushort)(SUB82(g_SelectedClearColor,0) < sVar36)))) &
                 CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar36)));
      }
    }
    else {
      iVar10 = g_VertexAlphaStart;
      if ((g_RenderStateFlags & 0x100U) == 0) {
        iVar10 = g_CurrentAlphaValue << 8;
        g_VertexAlphaDelta = 0;
      }
      uVar11 = g_StartTextureU;
      uVar8 = g_StartTextureV;
      if (g_CurrentTextureOpacityData != (void *)0x0) {
        while( true ) {
          uVar37 = (ushort)uVar38;
          uVar47 = (ushort)(uVar38 >> 0x10);
          uVar48 = (ushort)(uVar38 >> 0x20);
          uVar20 = (ushort)(uVar38 >> 0x30);
          if (((g_RenderStateFlags & 0x40U) == 0) ||
             (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) {
            pbVar15 = (byte *)((uVar11 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar8 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData);
            uVar9 = g_Hardware32BitPalette[*pbVar15];
            uVar38 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar9 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar9 >> 0x10),uVar9)) >> 0x20),
                                                  uVar9) >> 0x18),(char)(uVar9 >> 8)),
                              (ushort)(byte)uVar9) & 0xffffffff00ffffff;
            uVar9 = (uint)*(byte *)(((int)pbVar15 - (int)g_CurrentTextureData) +
                                   (int)g_CurrentTextureOpacityData);
            if (uVar9 != 0) {
              if ((((iVar10 < 0xff01) || (uVar9 < 0xff)) || (iVar10 < 0xff)) || (g_BlendMode != 0))
              {
                uVar22 = *(undefined4 *)(uVar19 + (int)g_CurrentScreenPtr);
                uVar24 = (ushort)(((uint7)(byte)((uint)uVar22 >> 0x18) << 0x30) >> 0x28);
                uVar43 = (ulonglong)
                         CONCAT34((int3)(CONCAT25(uVar24,CONCAT14((char)((uint)uVar22 >> 0x10),
                                                                  uVar22)) >> 0x20),uVar22) &
                         0xffffffff00ffffff;
                uVar7 = CONCAT51((int5)(uVar43 >> 0x18),(char)((uint)uVar22 >> 8));
                uVar23 = psllw(uVar38,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar48 >> 3,
                                                         CONCAT22(uVar47 >> 3,uVar37 >> 3))));
                SVar1 = g_AlphaTable[uVar9 * iVar10 >> 0x10];
                sVar36 = (short)uVar23;
                sVar39 = (short)((ulonglong)uVar23 >> 0x10);
                sVar40 = (short)((ulonglong)uVar23 >> 0x20);
                sVar41 = (short)((ulonglong)uVar23 >> 0x30);
                uVar38 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
                uVar29 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                                 (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar41)
                                                ) << 0x30) >> 0x28);
                uVar26 = (ushort)(byte)((0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 -
                                       (0xff < sVar36));
                uVar30 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                        (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar39));
                sVar36 = (short)CONCAT21(uVar29,(0 < sVar40) * (sVar40 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar40))
                ;
                uVar29 = uVar29 >> 8;
                if (g_BlendMode == 0) {
                  uVar23 = paddusw(CONCAT26(uVar29 * SVar1.pad,
                                            CONCAT24(sVar36 * SVar1.blue,
                                                     CONCAT22(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),
                                   CONCAT26((uVar24 >> 8) * (short)(uVar38 >> 0x30),
                                            CONCAT24((short)(uVar43 >> 0x20) *
                                                     (short)(uVar38 >> 0x20),
                                                     CONCAT22((short)uVar7 * (short)(uVar38 >> 0x10)
                                                              ,(ushort)(byte)uVar22 * (short)uVar38)
                                                    )));
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar22 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
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
                  uVar23 = psllw(CONCAT62(uVar7,(ushort)(byte)uVar22),8);
                  uVar23 = paddusw(CONCAT26(uVar29 * SVar1.pad,
                                            CONCAT24(sVar36 * SVar1.blue,
                                                     CONCAT22(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),uVar23);
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar22 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
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
                uVar23 = psllw(uVar38,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar48 >> 3,
                                                         CONCAT22(uVar47 >> 3,uVar37 >> 3))));
                sVar36 = (short)uVar23;
                sVar39 = (short)((ulonglong)uVar23 >> 0x10);
                sVar40 = (short)((ulonglong)uVar23 >> 0x20);
                sVar41 = (short)((ulonglong)uVar23 >> 0x30);
                uVar22 = CONCAT13((0 < sVar41) * (sVar41 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar41),
                                  CONCAT12((0 < sVar40) * (sVar40 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar40),
                                           CONCAT11((0 < sVar39) * (sVar39 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x10) -
                                                    (0xff < sVar39),
                                                    (0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 -
                                                    (0xff < sVar36))));
              }
              *(undefined4 *)(uVar19 + (int)g_CurrentScreenPtr) = uVar22;
              if ((g_RenderStateFlags & 0x80U) != 0) {
                *(int *)(uVar19 + (int)g_CurrentZBufferPtr) = iVar17;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if ((uint)g_ScanlinePixelCount <= uVar19) break;
          uVar11 = uVar11 + g_DeltaTextureU;
          uVar8 = uVar8 + g_DeltaTextureV;
          iVar17 = iVar17 + g_DeltaDepthW;
          iVar10 = iVar10 + g_VertexAlphaDelta;
          uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) <
                                     (short)(uVar20 + sVar46)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                              (short)(uVar48 + sVar45)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                               0x10) < (short)(uVar47 + sVar44)),
                                              -(ushort)(SUB82(g_SelectedClearColor,0) <
                                                       (short)(uVar37 + sVar42))))) &
                   CONCAT26(uVar20 + sVar46,
                            CONCAT24(uVar48 + sVar45,CONCAT22(uVar47 + sVar44,uVar37 + sVar42)));
        }
        return;
      }
      while( true ) {
        uVar37 = (ushort)(uVar38 >> 0x10);
        uVar47 = (ushort)(uVar38 >> 0x20);
        uVar48 = (ushort)(uVar38 >> 0x30);
        if ((((g_RenderStateFlags & 0x40U) == 0) ||
            (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) &&
           (uVar9 = g_Hardware32BitPalette
                    [*(byte *)((uVar11 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar8 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData)], uVar9 != 0)) {
          uVar43 = 0;
          if ((g_RenderStateFlags & 0x20U) != 0) {
            uVar22 = *(undefined4 *)(uVar19 + (int)g_CurrentScreenPtr);
            uVar43 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar22 >> 0x10),uVar22)) >>
                                                  0x20),uVar22) >> 0x18),(char)((uint)uVar22 >> 8)),
                              (ushort)(byte)uVar22) & 0xffffffff00ffffff;
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar9 >> 0x10),uVar9)) >> 0x20),
                                                  uVar9) >> 0x18),(char)(uVar9 >> 8)),
                                  (ushort)(byte)uVar9) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar48 >> 3,
                                          CONCAT24(uVar47 >> 3,
                                                   CONCAT22(uVar37 >> 3,(ushort)uVar38 >> 3))));
          SVar1 = g_AlphaTable[iVar10 >> 8];
          sVar36 = (short)uVar23;
          sVar39 = (short)((ulonglong)uVar23 >> 0x10);
          sVar40 = (short)((ulonglong)uVar23 >> 0x20);
          sVar41 = (short)((ulonglong)uVar23 >> 0x30);
          uVar35 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
          uVar24 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar41)) <<
                            0x30) >> 0x28);
          uVar20 = (ushort)(byte)((0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 - (0xff < sVar36));
          uVar26 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar39));
          sVar36 = (short)CONCAT21(uVar24,(0 < sVar40) * (sVar40 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar40));
          uVar24 = uVar24 >> 8;
          if (g_BlendMode == 0) {
            uVar23 = paddusw(CONCAT26(uVar24 * SVar1.pad,
                                      CONCAT24(sVar36 * SVar1.blue,
                                               CONCAT22(uVar26 * SVar1.green,uVar20 * SVar1.red))),
                             CONCAT26((short)(uVar43 >> 0x30) * (short)(uVar35 >> 0x30),
                                      CONCAT24((short)(uVar43 >> 0x20) * (short)(uVar35 >> 0x20),
                                               CONCAT22((short)(uVar43 >> 0x10) *
                                                        (short)(uVar35 >> 0x10),
                                                        (short)uVar43 * (short)uVar35))));
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar22 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          else {
            uVar23 = psllw(uVar43,8);
            uVar23 = paddusw(CONCAT26(uVar24 * SVar1.pad,
                                      CONCAT24(sVar36 * SVar1.blue,
                                               CONCAT22(uVar26 * SVar1.green,uVar20 * SVar1.red))),
                             uVar23);
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar22 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          *(undefined4 *)(uVar19 + (int)g_CurrentScreenPtr) = uVar22;
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)(uVar19 + (int)g_CurrentZBufferPtr) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar19) break;
        uVar11 = uVar11 + g_DeltaTextureU;
        sVar36 = (ushort)uVar38 + sVar42;
        sVar39 = uVar37 + sVar44;
        sVar40 = uVar47 + sVar45;
        sVar41 = uVar48 + sVar46;
        uVar8 = uVar8 + g_DeltaTextureV;
        iVar17 = iVar17 + g_DeltaDepthW;
        iVar10 = iVar10 + g_VertexAlphaDelta;
        uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) < sVar41),
                          CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                            sVar40),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                             0x10) < sVar39),
                                            -(ushort)(SUB82(g_SelectedClearColor,0) < sVar36)))) &
                 CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar36)));
      }
    }
  }
  return;
}


// Assembly code:
// 005b4031: PUSH ESI
//   Label: wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
// 005b4032: PUSH EDI
// 005b4033: PUSH EBP
// 005b4034: MOV EAX,dword ptr [ESI + 0x8]
// 005b4037: MOV ECX,dword ptr [EDI + 0x8]
// 005b403a: CMP EAX,ECX
// 005b403c: JBE 0x005b4041
//   XREF to: 005b4041 (CONDITIONAL_JUMP)
// 005b403e: XCHG EAX,ECX
// 005b403f: XCHG EDI,ESI
// 005b4041: SHR ECX,0x10
//   Label: LAB_005b4041
// 005b4044: SHR EAX,0x10
// 005b4047: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 005b404e: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 005b4055: SUB ECX,EAX
// 005b4057: JLE 0x005b44e0
//   XREF to: 005b44e0 (CONDITIONAL_JUMP)
// 005b405d: LEA EBX,[EBX + EAX*0x4]
// 005b4060: SHL ECX,0x2
// 005b4063: LEA EBP,[EBP + EAX*0x4]
// 005b4067: MOV dword ptr [0x006821a4],ECX
//   XREF to: 006821a4 (WRITE)
// 005b406d: MOV dword ptr [0x00682208],EBX
//   XREF to: 00682208 (WRITE)
// 005b4073: MOV dword ptr [0x0068220c],EBP
//   XREF to: 0068220c (WRITE)
// 005b4079: CMP dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4083: JZ 0x005b47e0
//   XREF to: 005b47e0 (CONDITIONAL_JUMP)
// 005b4089: CMP dword ptr [0x02d052a4],0x5
//   XREF to: 02d052a4 (READ)
// 005b4090: JNZ 0x005b4102
//   XREF to: 005b4102 (CONDITIONAL_JUMP)
// 005b4092: MOV EAX,dword ptr [ESI + 0x18]
// 005b4095: MOV EBX,dword ptr [ESI + 0x28]
// 005b4098: CDQ
// 005b4099: SHLD EDX,EAX,0x18
// 005b409d: SHL EAX,0x18
// 005b40a0: IDIV EBX
// 005b40a2: MOV [0x006821e0],EAX
//   XREF to: 006821e0 (WRITE)
// 005b40a7: MOV EAX,dword ptr [EDI + 0x18]
// 005b40aa: MOV EBX,dword ptr [EDI + 0x28]
// 005b40ad: CDQ
// 005b40ae: SHLD EDX,EAX,0x18
// 005b40b2: SHL EAX,0x18
// 005b40b5: IDIV EBX
// 005b40b7: SUB EAX,dword ptr [0x006821e0]
//   XREF to: 006821e0 (READ)
// 005b40bd: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b40c3: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b40c9: MOV EAX,dword ptr [ESI + 0x20]
// 005b40cc: MOV EBX,dword ptr [ESI + 0x28]
// 005b40cf: CDQ
// 005b40d0: SHLD EDX,EAX,0x18
// 005b40d4: SHL EAX,0x18
// 005b40d7: IDIV EBX
// 005b40d9: MOV [0x006821e4],EAX
//   XREF to: 006821e4 (WRITE)
// 005b40de: MOV EAX,dword ptr [EDI + 0x20]
// 005b40e1: MOV EBX,dword ptr [EDI + 0x28]
// 005b40e4: CDQ
// 005b40e5: SHLD EDX,EAX,0x18
// 005b40e9: SHL EAX,0x18
// 005b40ec: IDIV EBX
// 005b40ee: SUB EAX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b40f4: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b40fa: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b4100: JMP 0x005b4136
//   XREF to: 005b4136 (UNCONDITIONAL_JUMP)
// 005b4102: MOV EAX,dword ptr [EDI + 0x18]
//   Label: LAB_005b4102
// 005b4105: MOV EBX,dword ptr [ESI + 0x18]
// 005b4108: SUB EAX,EBX
// 005b410a: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4110: MOV dword ptr [0x006821e0],EBX
//   XREF to: 006821e0 (WRITE)
// 005b4116: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b411c: MOV EAX,dword ptr [EDI + 0x20]
// 005b411f: MOV EBX,dword ptr [ESI + 0x20]
// 005b4122: SUB EAX,EBX
// 005b4124: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b412a: MOV dword ptr [0x006821e4],EBX
//   XREF to: 006821e4 (WRITE)
// 005b4130: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b4136: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b4136
// 005b4139: MOV EBX,dword ptr [ESI + 0x28]
// 005b413c: SUB EAX,EBX
// 005b413e: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4144: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b414a: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b4150: MOV EAX,dword ptr [EDI + 0x30]
// 005b4153: MOV EBX,dword ptr [ESI + 0x30]
// 005b4156: SUB EAX,EBX
// 005b4158: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b415e: MOV dword ptr [0x006826d0],EBX
//   XREF to: 006826d0 (WRITE)
// 005b4164: MOV dword ptr [0x006826d8],EDX
//   XREF to: 006826d8 (WRITE)
// 005b416a: MOV EBP,dword ptr [0x006826d0]
//   XREF to: 006826d0 (READ)
// 005b4170: PXOR MM7,MM7
// 005b4173: TEST dword ptr [0x02d052a0],0x200
//   XREF to: 02d052a0 (READ)
// 005b417d: JNZ 0x005b41c0
//   XREF to: 005b41c0 (CONDITIONAL_JUMP)
// 005b417f: TEST dword ptr [0x02d052a0],0x4
//   XREF to: 02d052a0 (READ)
// 005b4189: JNZ 0x005b4280
//   XREF to: 005b4280 (CONDITIONAL_JUMP)
// 005b418f: TEST dword ptr [0x02d052a0],0x10
//   XREF to: 02d052a0 (READ)
// 005b4199: JNZ 0x005b4310
//   XREF to: 005b4310 (CONDITIONAL_JUMP)
// 005b419f: MOVQ MM5,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b41a6: PSLLW MM5,0x7
// 005b41aa: PXOR MM6,MM6
// 005b41ad: JMP 0x005b4340
//   XREF to: 005b4340 (UNCONDITIONAL_JUMP)
// 005b41c0: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005b41c0
// 005b41c3: MOV EBX,dword ptr [ESI + 0x10]
// 005b41c6: SHR EAX,0x1
// 005b41c8: SHR EBX,0x1
// 005b41ca: SUB EAX,EBX
// 005b41cc: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b41d2: AND EBX,0xffff
// 005b41d8: AND EDX,0xffff
// 005b41de: MOV dword ptr [0x00682690],EBX
//   XREF to: 00682690 (WRITE)
// 005b41e4: MOV dword ptr [0x006826b0],EDX
//   XREF to: 006826b0 (WRITE)
// 005b41ea: MOV EAX,dword ptr [EDI + 0x38]
// 005b41ed: MOV EBX,dword ptr [ESI + 0x38]
// 005b41f0: SHR EAX,0x1
// 005b41f2: SHR EBX,0x1
// 005b41f4: SUB EAX,EBX
// 005b41f6: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b41fc: AND EBX,0xffff
// 005b4202: AND EDX,0xffff
// 005b4208: MOV dword ptr [0x00682698],EBX
//   XREF to: 00682698 (WRITE)
// 005b420e: MOV dword ptr [0x006826b8],EDX
//   XREF to: 006826b8 (WRITE)
// 005b4214: MOV EAX,dword ptr [EDI + 0x40]
// 005b4217: MOV EBX,dword ptr [ESI + 0x40]
// 005b421a: SHR EAX,0x1
// 005b421c: SHR EBX,0x1
// 005b421e: SUB EAX,EBX
// 005b4220: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b4226: AND EBX,0xffff
// 005b422c: AND EDX,0xffff
// 005b4232: MOV dword ptr [0x006826a0],EBX
//   XREF to: 006826a0 (WRITE)
// 005b4238: MOV dword ptr [0x006826c0],EDX
//   XREF to: 006826c0 (WRITE)
// 005b423e: MOVQ MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b4245: MOVQ MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b424c: PSLLQ MM5,0x10
// 005b4250: PSLLQ MM6,0x10
// 005b4254: POR MM5,qword ptr [0x00682698]
//   XREF to: 00682698 (READ)
// 005b425b: POR MM6,qword ptr [0x006826b8]
//   XREF to: 006826b8 (READ)
// 005b4262: PSLLQ MM5,0x10
// 005b4266: PSLLQ MM6,0x10
// 005b426a: POR MM5,qword ptr [0x006826a0]
//   XREF to: 006826a0 (READ)
// 005b4271: POR MM6,qword ptr [0x006826c0]
//   XREF to: 006826c0 (READ)
// 005b4278: JMP 0x005b4340
//   XREF to: 005b4340 (UNCONDITIONAL_JUMP)
// 005b4280: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005b4280
// 005b4283: MOV EBX,dword ptr [ESI + 0x10]
// 005b4286: SUB EAX,0x100
// 005b428b: SUB EBX,0x100
// 005b4291: CMP EAX,0xfff
// 005b4296: JBE 0x005b429d
//   XREF to: 005b429d (CONDITIONAL_JUMP)
// 005b4298: MOV EAX,0xfff
// 005b429d: CMP EBX,0xfff
//   Label: LAB_005b429d
// 005b42a3: JBE 0x005b42aa
//   XREF to: 005b42aa (CONDITIONAL_JUMP)
// 005b42a5: MOV EBX,0xfff
// 005b42aa: SHL EAX,0x3
//   Label: LAB_005b42aa
// 005b42ad: SHL EBX,0x3
// 005b42b0: SUB EAX,EBX
// 005b42b2: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b42b8: AND EBX,0xffff
// 005b42be: AND EDX,0xffff
// 005b42c4: MOV dword ptr [0x00682690],EBX
//   XREF to: 00682690 (WRITE)
// 005b42ca: MOV dword ptr [0x006826b0],EDX
//   XREF to: 006826b0 (WRITE)
// 005b42d0: MOVQ MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b42d7: MOVQ MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b42de: PSLLQ MM5,0x10
// 005b42e2: PSLLQ MM6,0x10
// 005b42e6: POR MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b42ed: POR MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b42f4: PSLLQ MM5,0x10
// 005b42f8: PSLLQ MM6,0x10
// 005b42fc: POR MM5,qword ptr [0x00682690]
//   XREF to: 00682690 (READ)
// 005b4303: POR MM6,qword ptr [0x006826b0]
//   XREF to: 006826b0 (READ)
// 005b430a: JMP 0x005b4340
//   XREF to: 005b4340 (UNCONDITIONAL_JUMP)
// 005b4310: MOV EAX,[0x02d02574]
//   Label: LAB_005b4310
//   XREF to: 02d02574 (READ)
// 005b4315: SUB EAX,0x100
// 005b431a: SHR EAX,0x4
// 005b431d: CMP EAX,0xff
// 005b4322: JC 0x005b4329
//   XREF to: 005b4329 (CONDITIONAL_JUMP)
// 005b4324: MOV EAX,0xff
// 005b4329: MOVQ MM5,qword ptr [EAX*0x8 + 0x683000]
//   Label: LAB_005b4329
//   XREF to: 006837f8 (READ)
//   XREF to: 00683000 (DATA)
// 005b4331: PSLLW MM5,0x7
// 005b4335: PXOR MM6,MM6
// 005b4338: JMP 0x005b4340
//   XREF to: 005b4340 (UNCONDITIONAL_JUMP)
// 005b4340: MOV ECX,dword ptr [0x006821e0]
//   Label: LAB_005b4340
//   XREF to: 006821e0 (READ)
// 005b4346: MOV EDX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b434c: MOV ESI,dword ptr [0x006821ec]
//   XREF to: 006821ec (READ)
// 005b4352: MOV EDI,0x0
// 005b4357: CMP dword ptr [0x02d03e84],0x0
//   XREF to: 02d03e84 (READ)
// 005b435e: JNZ 0x005b4370
//   XREF to: 005b4370 (CONDITIONAL_JUMP)
// 005b4360: TEST dword ptr [0x02d052a0],0x2
//   XREF to: 02d052a0 (READ)
// 005b436a: JZ 0x005b4676
//   XREF to: 005b4676 (CONDITIONAL_JUMP)
// 005b4370: TEST dword ptr [0x02d052a0],0x100
//   Label: LAB_005b4370
//   XREF to: 02d052a0 (READ)
// 005b437a: JNZ 0x005b438f
//   XREF to: 005b438f (CONDITIONAL_JUMP)
// 005b437c: MOV EBP,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 005b4382: SHL EBP,0x8
// 005b4385: MOV dword ptr [0x006826d8],0x0
//   XREF to: 006826d8 (WRITE)
// 005b438f: CMP dword ptr [0x02d03e84],0x0
//   Label: LAB_005b438f
//   XREF to: 02d03e84 (READ)
// 005b4396: JNZ 0x005b44f0
//   XREF to: 005b44f0 (CONDITIONAL_JUMP)
// 005b439c: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b439c
//   XREF to: 02d052a0 (READ)
// 005b43a6: JZ 0x005b43b8
//   XREF to: 005b43b8 (CONDITIONAL_JUMP)
// 005b43a8: LEA EAX,[EDI]
// 005b43aa: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b43b0: CMP ESI,dword ptr [EAX]
// 005b43b2: JL 0x005b44a2
//   XREF to: 005b44a2 (CONDITIONAL_JUMP)
// 005b43b8: MOVD MM0,ECX
//   Label: LAB_005b43b8
// 005b43bb: MOVD MM2,EDX
// 005b43be: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b43c5: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b43cc: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b43d3: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b43da: PADDD MM0,MM2
// 005b43dd: MOVD EBX,MM0
// 005b43e0: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b43e6: MOVZX EAX,byte ptr [EBX]
// 005b43e9: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b43f0: CMP EAX,0x0
// 005b43f3: JZ 0x005b44a2
//   XREF to: 005b44a2 (CONDITIONAL_JUMP)
// 005b43f9: MOVD MM0,EAX
// 005b43fc: PUNPCKLBW MM0,MM7
// 005b43ff: PXOR MM4,MM4
// 005b4402: TEST dword ptr [0x02d052a0],0x20
//   XREF to: 02d052a0 (READ)
// 005b440c: JZ 0x005b441c
//   XREF to: 005b441c (CONDITIONAL_JUMP)
// 005b440e: MOV EBX,EDI
// 005b4410: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4416: MOVD MM4,dword ptr [EBX]
// 005b4419: PUNPCKLBW MM4,MM7
// 005b441c: PSLLW MM0,0x4
//   Label: LAB_005b441c
// 005b4420: MOVQ MM7,MM5
// 005b4423: MOV EAX,EBP
// 005b4425: PSRLW MM7,0x3
// 005b4429: SAR EAX,0x8
// 005b442c: PMULHW MM0,MM7
// 005b442f: MOVQ MM2,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 006837f8 (READ)
// 005b4437: PXOR MM7,MM7
// 005b443a: MOVQ MM3,MM2
// 005b443d: PACKUSWB MM0,MM7
// 005b4440: PXOR MM3,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b4447: PUNPCKLBW MM0,MM7
// 005b444a: CMP dword ptr [0x02d05298],0x0
//   XREF to: 02d05298 (READ)
// 005b4451: JNZ 0x005b4470
//   XREF to: 005b4470 (CONDITIONAL_JUMP)
// 005b4453: PMULLW MM4,MM3
// 005b4456: PMULLW MM0,MM2
// 005b4459: PADDUSW MM0,MM4
// 005b445c: PSRLW MM0,0x8
// 005b4460: PACKUSWB MM0,MM7
// 005b4463: JMP 0x005b4481
//   XREF to: 005b4481 (UNCONDITIONAL_JUMP)
// 005b4470: PSLLW MM4,0x8
//   Label: LAB_005b4470
// 005b4474: PMULLW MM0,MM2
// 005b4477: PADDUSW MM0,MM4
// 005b447a: PSRLW MM0,0x8
// 005b447e: PACKUSWB MM0,MM7
// 005b4481: MOV EBX,EDI
//   Label: LAB_005b4481
// 005b4483: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4489: MOVD dword ptr [EBX],MM0
// 005b448c: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4496: JZ 0x005b44a2
//   XREF to: 005b44a2 (CONDITIONAL_JUMP)
// 005b4498: MOV EAX,EDI
// 005b449a: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b44a0: MOV dword ptr [EAX],ESI
// 005b44a2: ADD EDI,0x4
//   Label: LAB_005b44a2
// 005b44a5: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b44ab: JNC 0x005b44e0
//   XREF to: 005b44e0 (CONDITIONAL_JUMP)
// 005b44ad: ADD ECX,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b44b3: PADDW MM5,MM6
// 005b44b6: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b44bc: MOVQ MM0,MM5
// 005b44bf: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b44c5: PCMPGTW MM5,qword ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b44cc: ADD EBP,dword ptr [0x006826d8]
//   XREF to: 006826d8 (READ)
// 005b44d2: PAND MM5,MM0
// 005b44d5: JMP 0x005b439c
//   XREF to: 005b439c (UNCONDITIONAL_JUMP)
// 005b44e0: POP EBP
//   Label: LAB_005b44e0
// 005b44e1: EMMS
// 005b44e3: POP EDI
// 005b44e4: POP ESI
// 005b44e5: RET
// 005b44f0: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b44f0
//   XREF to: 02d052a0 (READ)
// 005b44fa: JZ 0x005b450c
//   XREF to: 005b450c (CONDITIONAL_JUMP)
// 005b44fc: LEA EAX,[EDI]
// 005b44fe: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4504: CMP ESI,dword ptr [EAX]
// 005b4506: JL 0x005b4632
//   XREF to: 005b4632 (CONDITIONAL_JUMP)
// 005b450c: MOVD MM0,ECX
//   Label: LAB_005b450c
// 005b450f: MOVD MM2,EDX
// 005b4512: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b4519: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b4520: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b4527: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b452e: PADDD MM0,MM2
// 005b4531: MOVD EBX,MM0
// 005b4534: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b453a: MOVZX EAX,byte ptr [EBX]
// 005b453d: MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b4545: PUNPCKLBW MM0,MM7
// 005b4548: SUB EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b454e: ADD EBX,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 005b4554: MOVZX EAX,byte ptr [EBX]
// 005b4557: TEST EAX,0xffffffff
// 005b455c: JZ 0x005b4632
//   XREF to: 005b4632 (CONDITIONAL_JUMP)
// 005b4562: CMP EBP,0xff00
// 005b4568: JLE 0x005b4571
//   XREF to: 005b4571 (CONDITIONAL_JUMP)
// 005b456a: CMP EAX,0xff
// 005b456f: JGE 0x005b45d0
//   XREF to: 005b45d0 (CONDITIONAL_JUMP)
// 005b4571: MOV EBX,EDI
//   Label: LAB_005b4571
// 005b4573: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4579: MOVD MM4,dword ptr [EBX]
// 005b457c: PUNPCKLBW MM4,MM7
// 005b457f: PSLLW MM0,0x4
// 005b4583: MOVQ MM7,MM5
// 005b4586: IMUL EAX,EBP
// 005b4589: PSRLW MM7,0x3
// 005b458d: SHR EAX,0x10
// 005b4590: PMULHW MM0,MM7
// 005b4593: MOVQ MM2,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 00683000 (DATA)
// 005b459b: PXOR MM7,MM7
// 005b459e: MOVQ MM3,MM2
// 005b45a1: PACKUSWB MM0,MM7
// 005b45a4: PXOR MM3,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b45ab: PUNPCKLBW MM0,MM7
// 005b45ae: CMP dword ptr [0x02d05298],0x0
//   XREF to: 02d05298 (READ)
// 005b45b5: JNZ 0x005b4600
//   XREF to: 005b4600 (CONDITIONAL_JUMP)
// 005b45b7: PMULLW MM4,MM3
// 005b45ba: PMULLW MM0,MM2
// 005b45bd: PADDUSW MM0,MM4
// 005b45c0: PSRLW MM0,0x8
// 005b45c4: PACKUSWB MM0,MM7
// 005b45c7: JMP 0x005b4611
//   XREF to: 005b4611 (UNCONDITIONAL_JUMP)
// 005b45d0: CMP EBP,0xff
//   Label: LAB_005b45d0
// 005b45d6: JL 0x005b4571
//   XREF to: 005b4571 (CONDITIONAL_JUMP)
// 005b45d8: CMP dword ptr [0x02d05298],0x0
//   XREF to: 02d05298 (READ)
// 005b45df: JNZ 0x005b4571
//   XREF to: 005b4571 (CONDITIONAL_JUMP)
// 005b45e1: MOVQ MM3,MM5
// 005b45e4: PSRLW MM3,0x3
// 005b45e8: PSLLW MM0,0x4
// 005b45ec: PMULHW MM0,MM3
// 005b45ef: PACKUSWB MM0,MM7
// 005b45f2: JMP 0x005b4611
//   XREF to: 005b4611 (UNCONDITIONAL_JUMP)
// 005b4600: PSLLW MM4,0x8
//   Label: LAB_005b4600
// 005b4604: PMULLW MM0,MM2
// 005b4607: PADDUSW MM0,MM4
// 005b460a: PSRLW MM0,0x8
// 005b460e: PACKUSWB MM0,MM7
// 005b4611: MOV EBX,EDI
//   Label: LAB_005b4611
// 005b4613: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b4619: MOVD dword ptr [EBX],MM0
// 005b461c: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4626: JZ 0x005b4632
//   XREF to: 005b4632 (CONDITIONAL_JUMP)
// 005b4628: MOV EAX,EDI
// 005b462a: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4630: MOV dword ptr [EAX],ESI
// 005b4632: ADD EDI,0x4
//   Label: LAB_005b4632
// 005b4635: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b463b: JNC 0x005b4670
//   XREF to: 005b4670 (CONDITIONAL_JUMP)
// 005b463d: ADD ECX,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b4643: PADDW MM5,MM6
// 005b4646: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b464c: MOVQ MM0,MM5
// 005b464f: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b4655: PCMPGTW MM5,qword ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b465c: ADD EBP,dword ptr [0x006826d8]
//   XREF to: 006826d8 (READ)
// 005b4662: PAND MM5,MM0
// 005b4665: JMP 0x005b44f0
//   XREF to: 005b44f0 (UNCONDITIONAL_JUMP)
// 005b4670: POP EBP
//   Label: LAB_005b4670
// 005b4671: EMMS
// 005b4673: POP EDI
// 005b4674: POP ESI
// 005b4675: RET
// 005b4676: MOVQ MM1,qword ptr [0x02d052a8]
//   Label: LAB_005b4676
//   XREF to: 02d052a8 (READ)
// 005b467d: PUNPCKLBW MM1,MM7
// 005b4680: TEST dword ptr [0x02d052a0],0x8
//   XREF to: 02d052a0 (READ)
// 005b468a: JNZ 0x005b469b
//   XREF to: 005b469b (CONDITIONAL_JUMP)
// 005b468c: MOV EBP,0x0
// 005b4691: MOV dword ptr [0x006826d8],0x0
//   XREF to: 006826d8 (WRITE)
// 005b469b: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b469b
//   XREF to: 02d052a0 (READ)
// 005b46a5: JZ 0x005b46b7
//   XREF to: 005b46b7 (CONDITIONAL_JUMP)
// 005b46a7: LEA EAX,[EDI]
// 005b46a9: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b46af: CMP ESI,dword ptr [EAX]
// 005b46b1: JL 0x005b476d
//   XREF to: 005b476d (CONDITIONAL_JUMP)
// 005b46b7: TEST dword ptr [0x02d052a0],0x1
//   Label: LAB_005b46b7
//   XREF to: 02d052a0 (READ)
// 005b46c1: JZ 0x005b47b6
//   XREF to: 005b47b6 (CONDITIONAL_JUMP)
// 005b46c7: MOVD MM0,ECX
// 005b46ca: MOVD MM2,EDX
// 005b46cd: PSRLQ MM0,qword ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b46d4: PSRLQ MM2,qword ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b46db: PAND MM0,qword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b46e2: PAND MM2,qword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b46e9: PADDD MM0,MM2
// 005b46ec: MOVD EBX,MM0
// 005b46ef: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b46f5: MOVZX EAX,byte ptr [EBX]
// 005b46f8: MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b4700: MOVQ MM3,MM5
//   Label: LAB_005b4700
// 005b4703: PUNPCKLBW MM0,MM7
// 005b4706: PSRLW MM3,0x3
// 005b470a: PSLLW MM0,0x4
// 005b470e: PMULHW MM0,MM3
// 005b4711: PACKUSWB MM0,MM7
// 005b4714: TEST dword ptr [0x02d052a0],0x8
//   XREF to: 02d052a0 (READ)
// 005b471e: JZ 0x005b474d
//   XREF to: 005b474d (CONDITIONAL_JUMP)
// 005b4720: MOV EAX,EBP
// 005b4722: SAR EAX,0x8
// 005b4725: MOVQ MM3,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 00683000 (READ)
// 005b472d: MOVQ MM4,MM1
// 005b4730: MOVQ MM2,MM3
// 005b4733: PMULLW MM4,MM3
// 005b4736: PXOR MM2,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b473d: PUNPCKLBW MM0,MM7
// 005b4740: PMULLW MM0,MM2
// 005b4743: PADDW MM0,MM4
// 005b4746: PSRLW MM0,0x8
// 005b474a: PACKUSWB MM0,MM7
// 005b474d: MOV EBX,dword ptr [0x00682208]
//   Label: LAB_005b474d
//   XREF to: 00682208 (READ)
// 005b4753: ADD EBX,EDI
// 005b4755: MOVD dword ptr [EBX],MM0
// 005b4758: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b4762: JZ 0x005b476d
//   XREF to: 005b476d (CONDITIONAL_JUMP)
// 005b4764: MOV EAX,[0x0068220c]
//   XREF to: 0068220c (READ)
// 005b4769: ADD EAX,EDI
// 005b476b: MOV dword ptr [EAX],ESI
// 005b476d: ADD EDI,0x4
//   Label: LAB_005b476d
// 005b4770: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b4776: JNC 0x005b44e0
//   XREF to: 005b44e0 (CONDITIONAL_JUMP)
// 005b477c: ADD ECX,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b4782: PADDW MM5,MM6
// 005b4785: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b478b: MOVQ MM0,MM5
// 005b478e: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b4794: PCMPGTW MM5,qword ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b479b: ADD EBP,dword ptr [0x006826d8]
//   XREF to: 006826d8 (READ)
// 005b47a1: PAND MM5,MM0
// 005b47a4: JMP 0x005b469b
//   XREF to: 005b469b (UNCONDITIONAL_JUMP)
// 005b47b6: TEST dword ptr [0x02d052a0],0x200
//   Label: LAB_005b47b6
//   XREF to: 02d052a0 (READ)
// 005b47c0: JNZ 0x005b47d0
//   XREF to: 005b47d0 (CONDITIONAL_JUMP)
// 005b47c2: MOVD MM0,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 005b47c9: JMP 0x005b4700
//   XREF to: 005b4700 (UNCONDITIONAL_JUMP)
// 005b47d0: MOVD MM0,dword ptr [0x006827f0]
//   Label: LAB_005b47d0
//   XREF to: 006827f0 (READ)
// 005b47d7: JMP 0x005b4700
//   XREF to: 005b4700 (UNCONDITIONAL_JUMP)
// 005b47e0: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b47e0
// 005b47e3: MOV EBX,dword ptr [ESI + 0x28]
// 005b47e6: SUB EAX,EBX
// 005b47e8: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b47ee: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b47f4: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b47fa: MOV EAX,[0x006821ec]
//   XREF to: 006821ec (READ)
// 005b47ff: MOV EBX,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b4805: MOV ESI,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b480b: MOV ECX,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b4811: MOV dword ptr [ESI],EAX
//   Label: LAB_005b4811
// 005b4813: ADD EAX,EBX
// 005b4815: ADD ESI,0x4
// 005b4818: SUB ECX,0x4
// 005b481b: JG 0x005b4811
//   XREF to: 005b4811 (CONDITIONAL_JUMP)
// 005b481d: POP EBP
// 005b481e: EMMS
// 005b4820: POP EDI
// 005b4821: POP ESI
// 005b4822: RET
