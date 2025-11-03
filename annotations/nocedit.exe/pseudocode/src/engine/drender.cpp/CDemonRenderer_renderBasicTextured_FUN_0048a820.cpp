// Name: engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
// Address: 0048a820
// Address Range: [[0048a820, 0048a89a]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560 (00522560) at 00522589 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0 (005225e0) at 0052265c [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0 (005708e0) at 00570946 [UNCONDITIONAL_CALL]
// Globals:
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar1 != 0)) {
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags = RENDER_TEXTURE_BASE;
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58;
    }
    else {
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return;
}


// Assembly code:
// 0048a820: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
// 0048a821: PUSH ESI
// 0048a822: PUSH EBP
// 0048a823: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048a827: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048a82b: CMP dword ptr [EBX + 0xc],0x0
// 0048a82f: JNZ 0x0048a865
//   XREF to: 0048a865 (CONDITIONAL_JUMP)
// 0048a831: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_0048a831
// 0048a835: JZ 0x0048a877
//   XREF to: 0048a877 (CONDITIONAL_JUMP)
// 0048a837: XOR ECX,ECX
// 0048a839: MOV EDX,0x49072f
//   XREF to: 0049072f (PARAM)
// 0048a83e: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 0048a844: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048a84a: MOV dword ptr [0x02d0257c],EDX
//   XREF to: 02d0257c (WRITE)
// 0048a850: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048a850
// 0048a853: PUSH EAX
// 0048a854: MOV EBP,dword ptr [ESI + 0x4]
// 0048a857: PUSH EBP
// 0048a858: PUSH EBX
// 0048a859: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048a85e: ADD ESP,0xc
// 0048a861: POP EBP
//   Label: LAB_0048a861
// 0048a862: POP ESI
// 0048a863: POP EBX
// 0048a864: RET
// 0048a865: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048a865
// 0048a868: PUSH EAX
// 0048a869: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048a86e: ADD ESP,0x4
// 0048a871: TEST EAX,EAX
// 0048a873: JZ 0x0048a861
//   XREF to: 0048a861 (CONDITIONAL_JUMP)
// 0048a875: JMP 0x0048a831
//   XREF to: 0048a831 (UNCONDITIONAL_JUMP)
// 0048a877: PUSH EDI
//   Label: LAB_0048a877
// 0048a878: MOV EBP,0xc0
// 0048a87d: MOV EAX,0x6
// 0048a882: MOV EDI,0x490a58
//   XREF to: 00490a58 (DATA)
// 0048a887: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0048a88d: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0048a892: MOV dword ptr [0x02d0257c],EDI
//   XREF to: 02d0257c (WRITE)
// 0048a898: POP EDI
// 0048a899: JMP 0x0048a850
//   XREF to: 0048a850 (UNCONDITIONAL_JUMP)
