// Name: core_dstrender.cpp_renderDepthOnlyStandard_FUN_0049072f
// Address: 0049072f
// Address Range: [[0049072f, 0049077c]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderDepthOnlyStandard_FUN_0049072f(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 (0048a8a0) at 0048a8e8 [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 (0048a820) at 0048a839 [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 (0048bfe0) at 0048c055 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 (0048bf10) at 0048bf65 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 (0048bdc0) at 0048be35 [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 (0048bcf0) at 0048bd45 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d30e [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d46d [DATA]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 (0048bba0) at 0048bc15 [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 (0048bad0) at 0048bb25 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90 (0048ad90) at 0048ada9 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (0048ae10) at 0048ae38 [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150 (0048b150) at 0048b16a [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320 (0048b320) at 0048b3ed [DATA]
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (0048b1e0) at 0048b23c [DATA]
//   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 (0048b420) at 0048b47c [DATA]
//   engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (0048ac40) at 0048accc [DATA]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048cf5d [DATA]
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (0048b030) at 0048b07b [PARAM]
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (0048aeb0) at 0048af1c [DATA]
// Globals:
//   void*[1024] g_ScreenBufferArray
//   undefined4 DAT_02d02584

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  SEdgeData *pSVar10;
  int iVar11;
  
  uVar1 = left_edge->x_current;
  uVar6 = right_edge->x_current;
  uVar5 = uVar1;
  pSVar10 = left_edge;
  if (uVar6 < uVar1) {
    uVar5 = uVar6;
    uVar6 = uVar1;
    pSVar10 = right_edge;
    right_edge = left_edge;
  }
  uVar5 = uVar5 >> 0x10;
  iVar7 = (uVar6 >> 0x10) - uVar5;
  if (iVar7 != 0 && uVar5 <= uVar6 >> 0x10) {
    puVar9 = (ushort *)((int)g_ScreenBufferArray[scanline_y] + uVar5 * 2);
    iVar2 = right_edge->z_current;
    iVar3 = pSVar10->z_current;
    uVar1 = g_ReciprocalLookupTable[iVar7 + 1];
    iVar11 = pSVar10->z_current;
    do {
      if ((uint)(iVar11 >> 8) < (uint)*puVar9) {
        *puVar9 = (ushort)((uint)iVar11 >> 8);
      }
      iVar11 = iVar11 + (int)((ulonglong)((longlong)(iVar2 - iVar3) * (longlong)(int)uVar1) >> 0x20)
      ;
      puVar9 = puVar9 + 1;
      iVar8 = iVar7 + -1;
      bVar4 = 0 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  return;
}


// Assembly code:
// 0049072f: PUSH ESI
//   Label: core_dstrender.cpp_renderDepthOnlyStandard_FUN_0049072f
// 00490730: PUSH EDI
// 00490731: MOV EAX,dword ptr [ESI + 0x8]
// 00490734: MOV ECX,dword ptr [EDI + 0x8]
// 00490737: CMP EAX,ECX
// 00490739: JBE 0x0049073e
//   XREF to: 0049073e (CONDITIONAL_JUMP)
// 0049073b: XCHG EAX,ECX
// 0049073c: XCHG EDI,ESI
// 0049073e: SHR EAX,0x10
//   Label: LAB_0049073e
// 00490741: SHR ECX,0x10
// 00490744: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0049074b: SUB ECX,EAX
// 0049074d: JLE 0x0049077a
//   XREF to: 0049077a (CONDITIONAL_JUMP)
// 0049074f: SHL EAX,0x1
// 00490751: ADD EBX,EAX
// 00490753: MOV EAX,dword ptr [EDI + 0x28]
// 00490756: SUB EAX,dword ptr [ESI + 0x28]
// 00490759: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00490760: MOV ESI,dword ptr [ESI + 0x28]
// 00490763: MOV EAX,ESI
//   Label: LAB_00490763
// 00490765: SAR EAX,0x8
// 00490768: MOVZX EDI,word ptr [EBX]
// 0049076b: CMP EAX,EDI
// 0049076d: JNC 0x00490772
//   XREF to: 00490772 (CONDITIONAL_JUMP)
// 0049076f: MOV word ptr [EBX],AX
// 00490772: ADD ESI,EDX
//   Label: LAB_00490772
// 00490774: ADD EBX,0x2
// 00490777: DEC ECX
// 00490778: JG 0x00490763
//   XREF to: 00490763 (CONDITIONAL_JUMP)
// 0049077a: POP EDI
//   Label: LAB_0049077a
// 0049077b: POP ESI
// 0049077c: RET
