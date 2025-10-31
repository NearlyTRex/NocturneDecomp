// Name: wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
// Address: 005b5322
// Address Range: [[005b5322, 005b555b]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y)
// Cross-references:
//   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 (00404020) at 004040b7 [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 004076b6 [DATA]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 004077ff [DATA]
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404bea [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 (00405e20) at 00405e8a [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 (00405d80) at 00405dea [DATA]
//   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 (00406000) at 0040606a [DATA]
//   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 (00405960) at 004059ca [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 0040724b [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 00407336 [DATA]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 004075d0 [DATA]
//   engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0 (00406be0) at 00406c53 [DATA]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406d07 [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 00405824 [DATA]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 00405704 [DATA]
//   engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40 (00406b40) at 00406bb3 [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b69 [DATA]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 00406769 [DATA]
//   engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0 (004052b0) at 00405317 [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00404220 (00404220) at 00404329 [DATA]
//   engine_3d.c_renderPolygonLitDetailed_FUN_00406a20 (00406a20) at 00406ace [DATA]
//   engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60 (00405f60) at 00405fc7 [DATA]
//   engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0 (004067a0) at 0040682f [DATA]
//   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 (004055b0) at 00405657 [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60 (00404c60) at 00404cdc [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860 (00406860) at 0040695e [DATA]
//   engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40 (00404a40) at 00404ab3 [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00407018 [DATA]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406ed5 [DATA]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 00406667 [DATA]
//   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 (00403cc0) at 00403d30 [DATA]
//   engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0 (00404ee0) at 00404f4a [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20 (00403f20) at 00403fbc [DATA]
//   engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0 (004044a0) at 0040450a [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 00406120 [DATA]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 0040637c [DATA]
//   engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150 (00406150) at 004061c3 [DATA]
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 (00405b50) at 00405c0d [DATA]
//   engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0 (00405ce0) at 00405d4a [DATA]
//   engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0 (00405ec0) at 00405f27 [DATA]
//   engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50 (00404d50) at 00404dba [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170 (00405170) at 00405209 [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 (00405350) at 004053f4 [DATA]
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00 (00405a00) at 00405a5a [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 (00405430) at 004054d7 [DATA]
//   engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0 (004061f0) at 0040625a [DATA]
//   engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510 (00405510) at 00405583 [DATA]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405b08 [DATA]
//   engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0 (004058d0) at 00405933 [DATA]
//   engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40 (00404e40) at 00404eaa [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80 (00404f80) at 00404fea [DATA]
//   engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020 (00405020) at 0040508a [DATA]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 00404194 [DATA]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403c88 [DATA]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 004049e2 [DATA]
//   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 (004046c0) at 004047a4 [DATA]
//   engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60 (00403d60) at 00403dca [DATA]
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
//   ushort[256] g_Hardware16BitPalette
//   int g_ActiveRenderColor
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_RenderStateFlags
//   int g_RenderStateFlag2

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
          (STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

{
  bool bVar1;
  ushort uVar2;
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
  uVar3 = uVar10;
  pSVar7 = left_vertex;
  if (uVar6 < uVar10) {
    uVar3 = uVar6;
    uVar6 = uVar10;
    pSVar7 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar3 = uVar3 >> 0x10;
  iVar4 = (uVar6 >> 0x10) - uVar3;
  if (iVar4 != 0 && uVar3 <= uVar6 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar3 * 2);
    g_ScanlinePixelCount = iVar4 * 4;
    puVar9 = g_ZBufferScanlineArray[scanline_y] + uVar3;
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
    if (g_RenderStateFlag2 == 5) {
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
       (uVar6 = g_StartTextureV, uVar3 = g_StartTextureU, (g_RenderStateFlags & 2U) == 0)) {
      while( true ) {
        if (((g_RenderStateFlags & 0x40U) == 0) ||
           (*(int *)(uVar10 + (int)g_CurrentZBufferPtr) <= iVar8)) {
          if ((g_RenderStateFlags & 1U) == 0) {
            uVar2 = (ushort)g_ActiveRenderColor;
          }
          else {
            uVar2 = g_Hardware16BitPalette
                    [*(byte *)((int)g_CurrentTextureData +
                              (uVar6 >> ((byte)g_TextureShift2 & 0x1f) & (uint)g_TextureMask2) +
                              (uVar3 >> ((byte)g_TextureShift1 & 0x1f) & (uint)g_TextureMask1))];
          }
          *(ushort *)((uVar10 >> 1) + (int)g_CurrentScreenPtr) = uVar2;
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar10) = iVar8;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar10) break;
        uVar3 = uVar3 + g_DeltaTextureU;
        uVar6 = uVar6 + g_DeltaTextureV;
        iVar8 = iVar8 + g_DeltaDepthW;
      }
    }
  }
  return;
}


// Assembly code:
// 005b5322: PUSH ESI
//   Label: wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
// 005b5323: PUSH EDI
// 005b5324: PUSH EBP
// 005b5325: MOV EAX,dword ptr [ESI + 0x8]
// 005b5328: MOV ECX,dword ptr [EDI + 0x8]
// 005b532b: CMP EAX,ECX
// 005b532d: JBE 0x005b5332
//   XREF to: 005b5332 (CONDITIONAL_JUMP)
// 005b532f: XCHG EAX,ECX
// 005b5330: XCHG EDI,ESI
// 005b5332: SHR ECX,0x10
//   Label: LAB_005b5332
// 005b5335: SHR EAX,0x10
// 005b5338: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 005b533f: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 005b5346: SUB ECX,EAX
// 005b5348: JLE 0x005b5510
//   XREF to: 005b5510 (CONDITIONAL_JUMP)
// 005b534e: LEA EBX,[EBX + EAX*0x2]
// 005b5351: SHL ECX,0x2
// 005b5354: LEA EBP,[EBP + EAX*0x4]
// 005b5358: MOV dword ptr [0x006821a4],ECX
//   XREF to: 006821a4 (WRITE)
// 005b535e: MOV dword ptr [0x00682208],EBX
//   XREF to: 00682208 (WRITE)
// 005b5364: MOV dword ptr [0x0068220c],EBP
//   XREF to: 0068220c (WRITE)
// 005b536a: CMP dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b5374: JZ 0x005b551b
//   XREF to: 005b551b (CONDITIONAL_JUMP)
// 005b537a: CMP dword ptr [0x02d052a4],0x5
//   XREF to: 02d052a4 (READ)
// 005b5381: JNZ 0x005b53f3
//   XREF to: 005b53f3 (CONDITIONAL_JUMP)
// 005b5383: MOV EAX,dword ptr [ESI + 0x18]
// 005b5386: MOV EBX,dword ptr [ESI + 0x28]
// 005b5389: CDQ
// 005b538a: SHLD EDX,EAX,0x18
// 005b538e: SHL EAX,0x18
// 005b5391: IDIV EBX
// 005b5393: MOV [0x006821e0],EAX
//   XREF to: 006821e0 (WRITE)
// 005b5398: MOV EAX,dword ptr [EDI + 0x18]
// 005b539b: MOV EBX,dword ptr [EDI + 0x28]
// 005b539e: CDQ
// 005b539f: SHLD EDX,EAX,0x18
// 005b53a3: SHL EAX,0x18
// 005b53a6: IDIV EBX
// 005b53a8: SUB EAX,dword ptr [0x006821e0]
//   XREF to: 006821e0 (READ)
// 005b53ae: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b53b4: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b53ba: MOV EAX,dword ptr [ESI + 0x20]
// 005b53bd: MOV EBX,dword ptr [ESI + 0x28]
// 005b53c0: CDQ
// 005b53c1: SHLD EDX,EAX,0x18
// 005b53c5: SHL EAX,0x18
// 005b53c8: IDIV EBX
// 005b53ca: MOV [0x006821e4],EAX
//   XREF to: 006821e4 (WRITE)
// 005b53cf: MOV EAX,dword ptr [EDI + 0x20]
// 005b53d2: MOV EBX,dword ptr [EDI + 0x28]
// 005b53d5: CDQ
// 005b53d6: SHLD EDX,EAX,0x18
// 005b53da: SHL EAX,0x18
// 005b53dd: IDIV EBX
// 005b53df: SUB EAX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b53e5: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b53eb: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b53f1: JMP 0x005b5427
//   XREF to: 005b5427 (UNCONDITIONAL_JUMP)
// 005b53f3: MOV EAX,dword ptr [EDI + 0x18]
//   Label: LAB_005b53f3
// 005b53f6: MOV EBX,dword ptr [ESI + 0x18]
// 005b53f9: SUB EAX,EBX
// 005b53fb: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b5401: MOV dword ptr [0x006821e0],EBX
//   XREF to: 006821e0 (WRITE)
// 005b5407: MOV dword ptr [0x00682610],EDX
//   XREF to: 00682610 (WRITE)
// 005b540d: MOV EAX,dword ptr [EDI + 0x20]
// 005b5410: MOV EBX,dword ptr [ESI + 0x20]
// 005b5413: SUB EAX,EBX
// 005b5415: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b541b: MOV dword ptr [0x006821e4],EBX
//   XREF to: 006821e4 (WRITE)
// 005b5421: MOV dword ptr [0x00682614],EDX
//   XREF to: 00682614 (WRITE)
// 005b5427: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b5427
// 005b542a: MOV EBX,dword ptr [ESI + 0x28]
// 005b542d: SUB EAX,EBX
// 005b542f: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b5435: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b543b: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b5441: MOV EBP,dword ptr [0x006821e0]
//   XREF to: 006821e0 (READ)
// 005b5447: MOV EDX,dword ptr [0x006821e4]
//   XREF to: 006821e4 (READ)
// 005b544d: MOV ESI,dword ptr [0x006821ec]
//   XREF to: 006821ec (READ)
// 005b5453: MOV EDI,0x0
// 005b5458: CMP dword ptr [0x02d03e84],0x0
//   XREF to: 02d03e84 (READ)
// 005b545f: JNZ 0x005b5510
//   XREF to: 005b5510 (CONDITIONAL_JUMP)
// 005b5465: TEST dword ptr [0x02d052a0],0x2
//   XREF to: 02d052a0 (READ)
// 005b546f: JNZ 0x005b5510
//   XREF to: 005b5510 (CONDITIONAL_JUMP)
// 005b5475: TEST dword ptr [0x02d052a0],0x40
//   Label: LAB_005b5475
//   XREF to: 02d052a0 (READ)
// 005b547f: JZ 0x005b548d
//   XREF to: 005b548d (CONDITIONAL_JUMP)
// 005b5481: LEA EAX,[EDI]
// 005b5483: ADD EAX,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b5489: CMP ESI,dword ptr [EAX]
// 005b548b: JL 0x005b54ee
//   XREF to: 005b54ee (CONDITIONAL_JUMP)
// 005b548d: TEST dword ptr [0x02d052a0],0x1
//   Label: LAB_005b548d
//   XREF to: 02d052a0 (READ)
// 005b5497: JZ 0x005b5514
//   XREF to: 005b5514 (CONDITIONAL_JUMP)
// 005b5499: MOV CL,byte ptr [0x006826e0]
//   XREF to: 006826e0 (READ)
// 005b549f: MOV EAX,EBP
// 005b54a1: SHR EAX,CL
// 005b54a3: AND EAX,dword ptr [0x00682720]
//   XREF to: 00682720 (READ)
// 005b54a9: MOV CL,byte ptr [0x00682700]
//   XREF to: 00682700 (READ)
// 005b54af: MOV EBX,EDX
// 005b54b1: SHR EBX,CL
// 005b54b3: AND EBX,dword ptr [0x00682740]
//   XREF to: 00682740 (READ)
// 005b54b9: ADD EAX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b54bf: ADD EAX,EBX
// 005b54c1: MOVZX EAX,byte ptr [EAX]
// 005b54c4: MOV AX,word ptr [EAX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 005b54cc: MOV EBX,EDI
//   Label: LAB_005b54cc
// 005b54ce: SHR EBX,0x1
// 005b54d0: ADD EBX,dword ptr [0x00682208]
//   XREF to: 00682208 (READ)
// 005b54d6: MOV word ptr [EBX],AX
// 005b54d9: TEST dword ptr [0x02d052a0],0x80
//   XREF to: 02d052a0 (READ)
// 005b54e3: JZ 0x005b54ee
//   XREF to: 005b54ee (CONDITIONAL_JUMP)
// 005b54e5: MOV EAX,[0x0068220c]
//   XREF to: 0068220c (READ)
// 005b54ea: ADD EAX,EDI
// 005b54ec: MOV dword ptr [EAX],ESI
// 005b54ee: ADD EDI,0x4
//   Label: LAB_005b54ee
// 005b54f1: CMP EDI,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b54f7: JNC 0x005b5510
//   XREF to: 005b5510 (CONDITIONAL_JUMP)
// 005b54f9: ADD EBP,dword ptr [0x00682610]
//   XREF to: 00682610 (READ)
// 005b54ff: ADD EDX,dword ptr [0x00682614]
//   XREF to: 00682614 (READ)
// 005b5505: ADD ESI,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b550b: JMP 0x005b5475
//   XREF to: 005b5475 (UNCONDITIONAL_JUMP)
// 005b5510: POP EBP
//   Label: LAB_005b5510
// 005b5511: POP EDI
// 005b5512: POP ESI
// 005b5513: RET
// 005b5514: MOV EAX,[0x02d02570]
//   Label: LAB_005b5514
//   XREF to: 02d02570 (READ)
// 005b5519: JMP 0x005b54cc
//   XREF to: 005b54cc (UNCONDITIONAL_JUMP)
// 005b551b: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_005b551b
// 005b551e: MOV EBX,dword ptr [ESI + 0x28]
// 005b5521: SUB EAX,EBX
// 005b5523: IMUL dword ptr [ECX + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 005b5529: MOV dword ptr [0x006821ec],EBX
//   XREF to: 006821ec (WRITE)
// 005b552f: MOV dword ptr [0x00682618],EDX
//   XREF to: 00682618 (WRITE)
// 005b5535: MOV EAX,[0x006821ec]
//   XREF to: 006821ec (READ)
// 005b553a: MOV EBX,dword ptr [0x00682618]
//   XREF to: 00682618 (READ)
// 005b5540: MOV ESI,dword ptr [0x0068220c]
//   XREF to: 0068220c (READ)
// 005b5546: MOV ECX,dword ptr [0x006821a4]
//   XREF to: 006821a4 (READ)
// 005b554c: MOV dword ptr [ESI],EAX
//   Label: LAB_005b554c
// 005b554e: ADD EAX,EBX
// 005b5550: ADD ESI,0x4
// 005b5553: SUB ECX,0x4
// 005b5556: JG 0x005b554c
//   XREF to: 005b554c (CONDITIONAL_JUMP)
// 005b5558: POP EBP
// 005b5559: POP EDI
// 005b555a: POP ESI
// 005b555b: RET
