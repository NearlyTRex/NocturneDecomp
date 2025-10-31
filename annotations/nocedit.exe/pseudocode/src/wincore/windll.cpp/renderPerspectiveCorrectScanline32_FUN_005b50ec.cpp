// Name: wincore_windll.cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec
// Address: 005b50ec
// Address Range: [[005b50ec, 005b5321]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y)
// Cross-references:
//   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 (00404020) at 00404048 [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 00407652 [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 0040775a [DATA]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404b24 [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 (00405e20) at 00405e4c [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 (00405d80) at 00405dac [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 (00406000) at 0040602c [DATA]
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 (00405960) at 0040598c [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 00407136 [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 004072c8 [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 004074b0 [DATA]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406c0c [DATA]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406cab [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 00405863 [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 00405743 [DATA]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406b6c [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b00 [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 00406700 [DATA]
//   engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0 (004052b0) at 004052dc [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 00404269 [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406a57 [DATA]
//   engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60 (00405f60) at 00405f8c [DATA]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 004067d0 [DATA]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 0040560e [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404c98 [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 0040689a [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404a6c [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00406f65 [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406e25 [DATA]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 00406543 [DATA]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403cec [DATA]
//   engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0 (00404ee0) at 00404f0c [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403f53 [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0 (004044a0) at 004044cc [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 004060cc [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 004062ca [DATA]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 0040617c [DATA]
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 (00405b50) at 00405c52 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 (00405ce0) at 00405d0c [DATA]
//   engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0 (00405ec0) at 00405eec [DATA]
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 (00404d50) at 00404d7c [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 004051a3 [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 004053ae [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00 (00405a00) at 00405a1d [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 0040548e [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0 (004061f0) at 0040621c [DATA]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 0040553c [DATA]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405abe [DATA]
//   engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0 (004058d0) at 004058fb [DATA]
//   engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40 (00404e40) at 00404e6c [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80 (00404f80) at 00404fac [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020 (00405020) at 0040504c [DATA]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 0040414c [DATA]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403c50 [DATA]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 00404924 [DATA]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 00404736 [DATA]
//   engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60 (00403d60) at 00403d8c [DATA]
// Globals:
//   int g_ScanlinePixelCount = 0x0
//   int g_StartTextureU = 0x0
//   int g_StartTextureV = 0x0
//   int g_StartDepthW = 0x0
//   int* g_CurrentScreenPtr = 00000000
//   int* g_CurrentZBufferPtr = 00000000
//   int g_DeltaTextureU = 0x0
//   int g_DeltaTextureV = 0x0
//   int g_DeltaDepthW = 0x0
//   ulonglong g_TextureShift1 = 0x10
//   ulonglong g_TextureShift2 = 0x8
//   ulonglong g_TextureMask1 = 0xff
//   ulonglong g_TextureMask2 = 0xff00
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   uint[256] g_Hardware32BitPalette
//   int g_ActiveRenderColor
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_RenderStateFlags
//   int g_RenderStateFlag2

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec
          (STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  STexturedVertex *pSVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar10 = left_vertex->screen_x;
  uVar6 = right_vertex->screen_x;
  uVar2 = uVar10;
  pSVar7 = left_vertex;
  if (uVar6 < uVar10) {
    uVar2 = uVar6;
    uVar6 = uVar10;
    pSVar7 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar6 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar6 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 4);
    g_ScanlinePixelCount = iVar4 * 4;
    puVar9 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    g_CurrentZBufferPtr = (int *)puVar9;
    if (g_RenderStateFlags == 0x80) {
      uVar10 = pSVar7->perspective_w;
      iVar8 = (int)((ulonglong)
                    ((longlong)(int)(right_vertex->perspective_w - uVar10) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      iVar4 = g_ScanlinePixelCount;
      g_StartDepthW = uVar10;
      g_DeltaDepthW = iVar8;
      do {
        *puVar9 = uVar10;
        uVar10 = uVar10 + iVar8;
        puVar9 = puVar9 + 1;
        iVar5 = iVar4 + -4;
        bVar1 = 3 < iVar4;
        iVar4 = iVar5;
      } while (iVar5 != 0 && bVar1);
      return;
    }
    if (g_RenderStateFlag2 == PREPROCESS_TEXTURE_NORMALIZE_ALT) {
      uVar10 = pSVar7->texture_u;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)pSVar7->perspective_w);
      uVar10 = right_vertex->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      uVar10 = pSVar7->texture_v;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                (longlong)pSVar7->perspective_w);
      uVar10 = right_vertex->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar10 >> 0x1f) << 0x18 | uVar10 >> 8,uVar10 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = pSVar7->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_u - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
      g_StartTextureV = pSVar7->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_v - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    }
    iVar8 = pSVar7->perspective_w;
    g_DeltaDepthW =
         (int)((ulonglong)
               ((longlong)(right_vertex->perspective_w - iVar8) *
               (longlong)(int)g_ReciprocalLookupTable[iVar4 + 1]) >> 0x20);
    uVar10 = 0;
    g_StartDepthW = iVar8;
    if ((g_CurrentTextureOpacityData == (void *)0x0) &&
       (uVar6 = g_StartTextureV, uVar2 = g_StartTextureU, (g_RenderStateFlags & 2U) == 0)) {
      while( true ) {
        if (((g_RenderStateFlags & 0x40U) == 0) ||
           (*(int *)(uVar10 + (int)g_CurrentZBufferPtr) <= iVar8)) {
          uVar3 = g_ActiveRenderColor;
          if ((g_RenderStateFlags & 1U) != 0) {
            uVar3 = g_Hardware32BitPalette
                    [*(byte *)((int)g_CurrentTextureData +
                              (uVar6 >> ((byte)g_TextureShift2 & 0x1f) & (uint)g_TextureMask2) +
                              (uVar2 >> ((byte)g_TextureShift1 & 0x1f) & (uint)g_TextureMask1))];
          }
          *(uint *)((int)g_CurrentScreenPtr + uVar10) = uVar3;
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar10) = iVar8;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar10) break;
        uVar2 = uVar2 + g_DeltaTextureU;
        uVar6 = uVar6 + g_DeltaTextureV;
        iVar8 = iVar8 + g_DeltaDepthW;
      }
    }
  }
  return;
}


// Assembly code:
// 005b50ec: PUSH ESI
//   Label: wincore_windll.cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec
// 005b50ed: PUSH EDI
// 005b50ee: PUSH EBP
// 005b50ef: MOV EAX,dword ptr [ESI + 0x8]
// 005b50f2: MOV ECX,dword ptr [EDI + 0x8]
// 005b50f5: CMP EAX,ECX
// 005b50f7: JBE 0x005b50fc
//   XREF to: 005b50fc (CONDITIONAL_JUMP)
// 005b50f9: XCHG EAX,ECX
// 005b50fa: XCHG EDI,ESI
// 005b50fc: SHR ECX,0x10
//   Label: LAB_005b50fc
// 005b50ff: SHR EAX,0x10
// 005b5102: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 005b5109: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 005b5110: SUB ECX,EAX
// 005b5112: JLE 0x005b52d6
//   XREF to: 005b52d6 (CONDITIONAL_JUMP)
// 005b5118: LEA EBX,[EBX + EAX*0x4]
// 005b511b: SHL ECX,0x2
// 005b511e: LEA EBP,[EBP + EAX*0x4]
// 005b5122: MOV dword ptr [0x006821a4],ECX
//   XREF to: 006821a4 (WRITE)
// 005b5128: MOV dword ptr [0x00682208],EBX
//   XREF to: 00682208 (WRITE)
// 005b512e: MOV dword ptr [0x0068220c],EBP
//   XREF to: 0068220c (WRITE)
// 005b5134: CMP dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b513e: JZ 0x005b52e1
//   XREF to: 005b52e1 (CONDITIONAL_JUMP)
// 005b5144: CMP dword ptr [0x02d052a4],0x5
//   XREF to: 02d052a4 (READ)
// 005b514b: JNZ 0x005b51bd
//   XREF to: 005b51bd (CONDITIONAL_JUMP)
// 005b514d: MOV EAX,dword ptr [ESI + 0x18]
// 005b5150: MOV EBX,dword ptr [ESI + 0x28]
// 005b5153: CDQ
// 005b5154: SHLD EDX,EAX,0x18
// 005b5158: SHL EAX,0x18
// 005b515b: IDIV EBX
// 005b515d: MOV [0x006821e0],EAX
//   XREF to: 006821e0 (WRITE)
// 005b5162: MOV EAX,dword ptr [EDI + 0x18]
// 005b5165: MOV EBX,dword ptr [EDI + 0x28]
// 005b5168: CDQ
// 005b5169: SHLD EDX,EAX,0x18
// 005b516d: SHL EAX,0x18
// 005b5170: IDIV EBX
// 005b5172: SUB EAX,dword ptr [0x006821e0]
//   XREF to: 006821e0 (READ)
// 005b5178: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b517e: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b5184: MOV EAX,dword ptr [ESI + 0x20]
// 005b5187: MOV EBX,dword ptr [ESI + 0x28]
// 005b518a: CDQ
// 005b518b: SHLD EDX,EAX,0x18
// 005b518f: SHL EAX,0x18
// 005b5192: IDIV EBX
// 005b5194: MOV [0x006821e4],EAX
//   XREF to: 006821e4 (WRITE)
// 005b5199: MOV EAX,dword ptr [EDI + 0x20]
// 005b519c: MOV EBX,dword ptr [EDI + 0x28]
// 005b519f: CDQ
// 005b51a0: SHLD EDX,EAX,0x18
// 005b51a4: SHL EAX,0x18
// 005b51a7: IDIV EBX
// 005b51a9: SUB EAX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b51af: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b51b5: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b51bb: JMP 0x005b51f1
//   XREF to: 005b51f1 (UNCONDITIONAL_JUMP)
// 005b51bd: MOV EAX,dword ptr [EDI + 0x18]
//   Label: LAB_005b51bd
// 005b51c0: MOV EBX,dword ptr [ESI + 0x18]
// 005b51c3: SUB EAX,EBX
// 005b51c5: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b51cb: MOV dword ptr [0x006821e0],EBX
//   XREF to: 006821e0 (WRITE)
// 005b51d1: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b51d7: MOV EAX,dword ptr [EDI + 0x20]
// 005b51da: MOV EBX,dword ptr [ESI + 0x20]
// 005b51dd: SUB EAX,EBX
// 005b51df: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b51e5: MOV dword ptr [0x006821e4],EBX
//   XREF to: 006821e4 (WRITE)
// 005b51eb: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b51f1: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b51f1
// 005b51f4: MOV EBX,dword ptr [ESI + 0x28]
// 005b51f7: SUB EAX,EBX
// 005b51f9: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b51ff: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b5205: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b520b: MOV EBP,dword ptr [0x006821e0]
//   XREF to: 006821e0 (READ)
// 005b5211: MOV EDX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b5217: MOV ESI,dword ptr [0x006821ec]
//   XREF to: 006821ec (READ)
// 005b521d: MOV EDI,0x0
// 005b5222: CMP dword ptr [0x02d03e84],0x0
//   XREF to: 02d03e84 (READ)
// 005b5229: JNZ 0x005b52d6
//   XREF to: 005b52d6 (CONDITIONAL_JUMP)
// 005b522f: TEST dword ptr [0x02d052a0],0x2
//   XREF to: 02d052a0 (READ)
// 005b5239: JNZ 0x005b52d6
//   XREF to: 005b52d6 (CONDITIONAL_JUMP)
// 005b523f: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b523f
//   XREF to: 02d052a0 (READ)
// 005b5249: JZ 0x005b5257
//   XREF to: 005b5257 (CONDITIONAL_JUMP)
// 005b524b: LEA EAX,[EDI]
// 005b524d: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b5253: CMP ESI,dword ptr [EAX]
// 005b5255: JL 0x005b52b4
//   XREF to: 005b52b4 (CONDITIONAL_JUMP)
// 005b5257: TEST dword ptr [0x02d052a0],0x1
//   Label: LAB_005b5257
//   XREF to: 02d052a0 (READ)
// 005b5261: JZ 0x005b52da
//   XREF to: 005b52da (CONDITIONAL_JUMP)
// 005b5263: MOV CL,byte ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b5269: MOV EAX,EBP
// 005b526b: SHR EAX,CL
// 005b526d: AND EAX,dword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b5273: MOV CL,byte ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b5279: MOV EBX,EDX
// 005b527b: SHR EBX,CL
// 005b527d: AND EBX,dword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b5283: ADD EAX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b5289: ADD EAX,EBX
// 005b528b: MOVZX EAX,byte ptr [EAX]
// 005b528e: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b5295: MOV EBX,dword ptr [0x00682208]
//   Label: LAB_005b5295
//   XREF to: 00682208 (READ)
// 005b529b: ADD EBX,EDI
// 005b529d: MOV dword ptr [EBX],EAX
// 005b529f: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b52a9: JZ 0x005b52b4
//   XREF to: 005b52b4 (CONDITIONAL_JUMP)
// 005b52ab: MOV EAX,[0x0068220c]
//   XREF to: 0068220c (READ)
// 005b52b0: ADD EAX,EDI
// 005b52b2: MOV dword ptr [EAX],ESI
// 005b52b4: ADD EDI,0x4
//   Label: LAB_005b52b4
// 005b52b7: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b52bd: JNC 0x005b52d6
//   XREF to: 005b52d6 (CONDITIONAL_JUMP)
// 005b52bf: ADD EBP,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b52c5: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b52cb: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b52d1: JMP 0x005b523f
//   XREF to: 005b523f (UNCONDITIONAL_JUMP)
// 005b52d6: POP EBP
//   Label: LAB_005b52d6
// 005b52d7: POP EDI
// 005b52d8: POP ESI
// 005b52d9: RET
// 005b52da: MOV EAX,[0x02d02570]
//   Label: LAB_005b52da
//   XREF to: 02d02570 (READ)
// 005b52df: JMP 0x005b5295
//   XREF to: 005b5295 (UNCONDITIONAL_JUMP)
// 005b52e1: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b52e1
// 005b52e4: MOV EBX,dword ptr [ESI + 0x28]
// 005b52e7: SUB EAX,EBX
// 005b52e9: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b52ef: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b52f5: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b52fb: MOV EAX,[0x006821ec]
//   XREF to: 006821ec (READ)
// 005b5300: MOV EBX,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b5306: MOV ESI,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b530c: MOV ECX,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b5312: MOV dword ptr [ESI],EAX
//   Label: LAB_005b5312
// 005b5314: ADD EAX,EBX
// 005b5316: ADD ESI,0x4
// 005b5319: SUB ECX,0x4
// 005b531c: JG 0x005b5312
//   XREF to: 005b5312 (CONDITIONAL_JUMP)
// 005b531e: POP EBP
// 005b531f: POP EDI
// 005b5320: POP ESI
// 005b5321: RET
