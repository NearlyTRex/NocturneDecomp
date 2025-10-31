// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
// Address: 0048c8d0
// Address Range: [[0048c8d0, 0048c957]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
// Cross-references:
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 (00471400) at 0047158d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 0047395b [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475f50 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 (00570770) at 0057080b [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_rasterizePolygon_FUN_005fd4e0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,RenderScanlineFunc *scanline_renderer
          )

{
  int iVar1;
  RenderScanlineFunc *in_stack_00000014;
  
  if (this_ptr->plane_culling_enabled == 0) {
    if (this_ptr->face_count != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
    if (iVar1 == 0) {
      return;
    }
    if ((prim->base).count != 0) {
      return;
    }
  }
  g_RenderStateFlags = RENDER_TEXTURE_COMPLEX;
  g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
  core_xform_cpp_transformAndClipGeometry_FUN_005f8550((prim->base).count,(int *)(prim + 1));
  if (g_ClippedVertexCount < 3) {
    return;
  }
  engine_3d_c_rasterizePolygon_FUN_005fd4e0
            (g_ClippedVertexBuffer,g_ClippedVertexCount,in_stack_00000014);
  return;
}


// Assembly code:
// 0048c8d0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
// 0048c8d1: PUSH ESI
// 0048c8d2: PUSH EDI
// 0048c8d3: PUSH EBP
// 0048c8d4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048c8d8: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048c8dc: CMP dword ptr [EAX + 0xc],0x0
// 0048c8e0: JNZ 0x0048c8f1
//   XREF to: 0048c8f1 (CONDITIONAL_JUMP)
// 0048c8e2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048c8e6: CMP dword ptr [EAX + 0x4],0x0
// 0048c8ea: JZ 0x0048c910
//   XREF to: 0048c910 (CONDITIONAL_JUMP)
// 0048c8ec: POP EBP
//   Label: LAB_0048c8ec
// 0048c8ed: POP EDI
// 0048c8ee: POP ESI
// 0048c8ef: POP EBX
// 0048c8f0: RET
// 0048c8f1: LEA EAX,[EBX + 0x8]
//   Label: LAB_0048c8f1
// 0048c8f4: PUSH EAX
// 0048c8f5: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048c8fa: ADD ESP,0x4
// 0048c8fd: TEST EAX,EAX
// 0048c8ff: JZ 0x0048c8ec
//   XREF to: 0048c8ec (CONDITIONAL_JUMP)
// 0048c901: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048c905: CMP dword ptr [EAX + 0x4],0x0
// 0048c909: JZ 0x0048c910
//   XREF to: 0048c910 (CONDITIONAL_JUMP)
// 0048c90b: POP EBP
// 0048c90c: POP EDI
// 0048c90d: POP ESI
// 0048c90e: POP EBX
// 0048c90f: RET
// 0048c910: LEA EAX,[EBX + 0x18]
//   Label: LAB_0048c910
// 0048c913: MOV ESI,0xc4
// 0048c918: PUSH EAX
// 0048c919: MOV EBP,dword ptr [EBX + 0x4]
// 0048c91c: MOV EDI,0x6
// 0048c921: PUSH EBP
// 0048c922: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 0048c928: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048c92e: CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550
//   XREF to: 005f8550 (UNCONDITIONAL_CALL)
// 0048c933: MOV EAX,[0x00824e24]
//   XREF to: 00824e24 (READ)
// 0048c938: ADD ESP,0x8
// 0048c93b: CMP EAX,0x2
// 0048c93e: JLE 0x0048c8ec
//   XREF to: 0048c8ec (CONDITIONAL_JUMP)
// 0048c940: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048c944: PUSH EDX
// 0048c945: PUSH EAX
// 0048c946: PUSH 0x824e28
//   XREF to: 00824e28 (DATA)
// 0048c94b: CALL engine_3d.c_rasterizePolygon_FUN_005fd4e0
//   XREF to: 005fd4e0 (UNCONDITIONAL_CALL)
// 0048c950: ADD ESP,0xc
// 0048c953: POP EBP
// 0048c954: POP EDI
// 0048c955: POP ESI
// 0048c956: POP EBX
// 0048c957: RET
