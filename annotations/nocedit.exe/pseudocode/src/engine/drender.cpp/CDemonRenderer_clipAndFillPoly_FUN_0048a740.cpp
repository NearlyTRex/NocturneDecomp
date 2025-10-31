// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
// Address: 0048a740
// Address Range: [[0048a740, 0048a817]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 (0048a950) at 0048a9ff [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 (0048a8a0) at 0048a909 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 (0048a820) at 0048a859 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 (0048bfe0) at 0048c07e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 (0048bf10) at 0048bf84 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 (0048b650) at 0048b6c9 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 (0048bdc0) at 0048be5e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 (0048b730) at 0048b7de [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 (0048bcf0) at 0048bd64 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 (0048bba0) at 0048bc3e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 (0048bad0) at 0048bb44 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 (0048b550) at 0048b5ea [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90 (0048ad90) at 0048adc9 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (0048ae10) at 0048ae58 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150 (0048b150) at 0048b18b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320 (0048b320) at 0048b3a1 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 (0048b1e0) at 0048b260 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 (0048b420) at 0048b4a1 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 (0048aa50) at 0048aaf0 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 (0048ab50) at 0048abb7 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (0048ac40) at 0048acf1 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (0048b890) at 0048b909 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 (0048b970) at 0048ba1e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (0048b030) at 0048b12f [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 (0048aeb0) at 0048af3f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_drender_cpp_00621f62
//   TerminatedCString s_CDemonRenderer_clipAndFi_00621f78
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   int g_RenderStateFlags
//   undefined4 DAT_02d052a1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   engine_drender.cpp_renderTriangleTextured_FUN_00483370

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
          (CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  int unaff_ESI;
  
  if (this_ptr->projection_mode != 0) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 0xad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->face_count == 0) || (((byte)g_RenderStateFlags & 1) != 0)) &&
       (((byte)g_RenderStateFlags & 5) != 0)) {
      engine_drender_cpp_renderTriangleTextured_FUN_00483370(vertex_indices,vertex_count);
    }
    else {
      engine_drender_cpp_renderTriangleSimple_FUN_004839f0(vertex_indices,vertex_count);
    }
  }
  else {
    if (((this_ptr->face_count == 0) || (((byte)g_RenderStateFlags & 1) != 0)) &&
       (((byte)g_RenderStateFlags & 5) != 0)) {
      if ((g_RenderStateFlags._1_1_ & 2) == 0) {
        engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_00438420(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_005f8550(vertex_count,vertex_indices);
    if (2 < g_ClippedVertexCount) {
      engine_3d_c_rasterizeTriangle_FUN_005fcfc0
                (g_ClippedVertexBuffer,g_ClippedVertexCount,unaff_ESI);
      return;
    }
  }
  return;
}


// Assembly code:
// 0048a740: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
// 0048a741: PUSH ESI
// 0048a742: PUSH EDI
// 0048a743: PUSH EBP
// 0048a744: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048a748: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048a74c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048a750: CMP dword ptr [EDI + 0x8],0x0
// 0048a754: JNZ 0x0048a783
//   XREF to: 0048a783 (CONDITIONAL_JUMP)
// 0048a756: CMP dword ptr [EDI + 0x10],0x0
//   Label: LAB_0048a756
// 0048a75a: JNZ 0x0048a7b1
//   XREF to: 0048a7b1 (CONDITIONAL_JUMP)
// 0048a75c: CMP dword ptr [EDI + 0x4],0x0
// 0048a760: JZ 0x0048a76b
//   XREF to: 0048a76b (CONDITIONAL_JUMP)
// 0048a762: TEST byte ptr [0x02d052a0],0x1
//   XREF to: 02d052a0 (READ)
// 0048a769: JZ 0x0048a774
//   XREF to: 0048a774 (CONDITIONAL_JUMP)
// 0048a76b: TEST byte ptr [0x02d052a0],0x5
//   Label: LAB_0048a76b
//   XREF to: 02d052a0 (READ)
// 0048a772: JNZ 0x0048a7a8
//   XREF to: 0048a7a8 (CONDITIONAL_JUMP)
// 0048a774: PUSH EBX
//   Label: LAB_0048a774
// 0048a775: PUSH ESI
// 0048a776: CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   XREF to: 004839f0 (UNCONDITIONAL_CALL)
// 0048a77b: ADD ESP,0x8
//   Label: LAB_0048a77b
// 0048a77e: POP EBP
//   Label: LAB_0048a77e
// 0048a77f: POP EDI
// 0048a780: POP ESI
// 0048a781: POP EBX
// 0048a782: RET
// 0048a783: MOV ECX,0x621f62
//   Label: LAB_0048a783
//   XREF to: 00621f62 (PARAM)
// 0048a788: MOV EBP,0xad
// 0048a78d: PUSH 0x621f78
//   XREF to: 00621f78 (DATA)
// 0048a792: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0048a798: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0048a79e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048a7a3: ADD ESP,0x4
// 0048a7a6: JMP 0x0048a756
//   XREF to: 0048a756 (UNCONDITIONAL_JUMP)
// 0048a7a8: PUSH EBX
//   Label: LAB_0048a7a8
// 0048a7a9: PUSH ESI
// 0048a7aa: CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370
//   XREF to: 00483370 (UNCONDITIONAL_CALL)
// 0048a7af: JMP 0x0048a77b
//   XREF to: 0048a77b (UNCONDITIONAL_JUMP)
// 0048a7b1: CMP dword ptr [EDI + 0x4],0x0
//   Label: LAB_0048a7b1
// 0048a7b5: JZ 0x0048a7c0
//   XREF to: 0048a7c0 (CONDITIONAL_JUMP)
// 0048a7b7: TEST byte ptr [0x02d052a0],0x1
//   XREF to: 02d052a0 (READ)
// 0048a7be: JZ 0x0048a7e1
//   XREF to: 0048a7e1 (CONDITIONAL_JUMP)
// 0048a7c0: TEST byte ptr [0x02d052a0],0x5
//   Label: LAB_0048a7c0
//   XREF to: 02d052a0 (READ)
// 0048a7c7: JZ 0x0048a7e1
//   XREF to: 0048a7e1 (CONDITIONAL_JUMP)
// 0048a7c9: TEST byte ptr [0x02d052a1],0x2
//   XREF to: 02d052a1 (READ)
// 0048a7d0: JZ 0x0048a809
//   XREF to: 0048a809 (CONDITIONAL_JUMP)
// 0048a7d2: PUSH ESI
// 0048a7d3: PUSH EBX
// 0048a7d4: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 0048a7d9: ADD ESP,0x8
// 0048a7dc: POP EBP
// 0048a7dd: POP EDI
// 0048a7de: POP ESI
// 0048a7df: POP EBX
// 0048a7e0: RET
// 0048a7e1: PUSH ESI
//   Label: LAB_0048a7e1
// 0048a7e2: PUSH EBX
// 0048a7e3: CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   XREF to: 005f8550 (UNCONDITIONAL_CALL)
// 0048a7e8: MOV ECX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 0048a7ee: ADD ESP,0x8
// 0048a7f1: CMP ECX,0x2
// 0048a7f4: JLE 0x0048a77e
//   XREF to: 0048a77e (CONDITIONAL_JUMP)
// 0048a7f6: PUSH ECX
// 0048a7f7: PUSH 0x824e28
//   XREF to: 00824e28 (DATA)
// 0048a7fc: CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0
//   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)
// 0048a801: ADD ESP,0x8
// 0048a804: POP EBP
// 0048a805: POP EDI
// 0048a806: POP ESI
// 0048a807: POP EBX
// 0048a808: RET
// 0048a809: PUSH ESI
//   Label: LAB_0048a809
// 0048a80a: PUSH EBX
// 0048a80b: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 0048a810: ADD ESP,0x8
// 0048a813: POP EBP
// 0048a814: POP EDI
// 0048a815: POP ESI
// 0048a816: POP EBX
// 0048a817: RET
