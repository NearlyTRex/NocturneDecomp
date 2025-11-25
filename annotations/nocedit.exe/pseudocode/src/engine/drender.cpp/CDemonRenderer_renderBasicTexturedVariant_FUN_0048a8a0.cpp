// Name: engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
// Address: 0048a8a0
// Address Range: [[0048a8a0, 0048a949]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (00496e70) at 00497296 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0 (0049cbd0) at 0049cd0d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 (0059abf0) at 0059b381 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea7eb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 (0051e990) at 0051ea5a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 (0051ead0) at 0051ecbd [UNCONDITIONAL_CALL]
// Globals:
//   int[16] g_VertexIndexBuffer
//   undefined4 g_VertexIndexBuffer[1]
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (polygon_info->base).count) {
      pSVar1 = polygon_info;
      iVar2 = 0;
      do {
        *(int *)((int)g_VertexIndexBuffer + iVar2) = pSVar1[1].base.type;
        iVar3 = iVar3 + 1;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->surface_normal).B;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (polygon_info->base).count);
    }
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
              (this_ptr,(polygon_info->base).count,g_VertexIndexBuffer);
  }
  return;
}


// Assembly code:
// 0048a8a0: PUSH ESI
//   Label: engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
// 0048a8a1: PUSH EDI
// 0048a8a2: PUSH EBP
// 0048a8a3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048a8a7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048a8ab: CMP dword ptr [EDI + 0xc],0x0
// 0048a8af: JNZ 0x0048a916
//   XREF to: 0048a916 (CONDITIONAL_JUMP)
// 0048a8b1: PUSH EBX
//   Label: LAB_0048a8b1
// 0048a8b2: MOV ECX,dword ptr [ESI + 0x4]
// 0048a8b5: XOR EDX,EDX
// 0048a8b7: TEST ECX,ECX
// 0048a8b9: JLE 0x0048a8e0
//   XREF to: 0048a8e0 (CONDITIONAL_JUMP)
// 0048a8bb: MOV EAX,ESI
// 0048a8bd: XOR ECX,ECX
// 0048a8bf: ADD ECX,0x4
//   Label: LAB_0048a8bf
// 0048a8c2: MOV EBX,dword ptr [EAX + 0x18]
// 0048a8c5: MOV dword ptr [ECX + 0x2c6d5a8],EBX
//   XREF to: 02c6d5ac (WRITE)
//   XREF to: 02c6d5b0 (WRITE)
// 0048a8cb: INC EDX
// 0048a8cc: MOV EBX,dword ptr [ESI + 0x4]
// 0048a8cf: ADD EAX,0xc
// 0048a8d2: CMP EDX,EBX
// 0048a8d4: JL 0x0048a8bf
//   XREF to: 0048a8bf (CONDITIONAL_JUMP)
// 0048a8d6: LEA EAX,[EAX]
// 0048a8dc: LEA EDX,[EDX]
// 0048a8e0: CMP dword ptr [EDI + 0x4],0x0
//   Label: LAB_0048a8e0
// 0048a8e4: JZ 0x0048a928
//   XREF to: 0048a928 (CONDITIONAL_JUMP)
// 0048a8e6: XOR EBP,EBP
// 0048a8e8: MOV EBX,0x49072f
//   XREF to: 0049072f (PARAM)
// 0048a8ed: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 0048a8f3: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048a8f9: MOV dword ptr [0x02d0257c],EBX
//   XREF to: 02d0257c (WRITE)
// 0048a8ff: PUSH 0x2c6d5ac
//   Label: LAB_0048a8ff
//   XREF to: 02c6d5ac (DATA)
// 0048a904: MOV EDX,dword ptr [ESI + 0x4]
// 0048a907: PUSH EDX
// 0048a908: PUSH EDI
// 0048a909: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
//   XREF to: 00490a58 (PARAM)
// 0048a90e: ADD ESP,0xc
// 0048a911: POP EBX
// 0048a912: POP EBP
//   Label: LAB_0048a912
// 0048a913: POP EDI
// 0048a914: POP ESI
// 0048a915: RET
// 0048a916: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048a916
// 0048a919: PUSH EAX
// 0048a91a: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048a91f: ADD ESP,0x4
// 0048a922: TEST EAX,EAX
// 0048a924: JZ 0x0048a912
//   XREF to: 0048a912 (CONDITIONAL_JUMP)
// 0048a926: JMP 0x0048a8b1
//   XREF to: 0048a8b1 (UNCONDITIONAL_JUMP)
// 0048a928: MOV EDX,0xc0
//   Label: LAB_0048a928
// 0048a92d: MOV ECX,0x6
// 0048a932: MOV EAX,0x490a58
//   XREF to: 00490a58 (DATA)
// 0048a937: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048a93d: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 0048a943: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048a948: JMP 0x0048a8ff
//   XREF to: 0048a8ff (UNCONDITIONAL_JUMP)
