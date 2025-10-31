// Name: engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0
// Address: 00406be0
// Address Range: [[00406be0, 00406c7f]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEngineDepthLit_FUN_00406be0(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags = RENDER_ENGINE_HIGH_QUALITY;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406be0: PUSH EBX
//   Label: engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0
// 00406be1: PUSH ESI
// 00406be2: PUSH EBP
// 00406be3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00406be7: LEA ESI,[EBX + 0x18]
// 00406bea: LEA EAX,[EBX + 0x8]
// 00406bed: PUSH EAX
// 00406bee: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406bf3: ADD ESP,0x4
// 00406bf6: TEST EAX,EAX
// 00406bf8: JZ 0x00406c44
//   XREF to: 00406c44 (CONDITIONAL_JUMP)
// 00406bfa: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406c01: JNZ 0x00406c5f
//   XREF to: 00406c5f (CONDITIONAL_JUMP)
// 00406c03: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406c0a: JNZ 0x00406c53
//   XREF to: 00406c53 (CONDITIONAL_JUMP)
// 00406c0c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406c16: PUSH EDI
//   Label: LAB_00406c16
// 00406c17: MOV EDI,0x163
// 00406c1c: MOV EBP,0x1
// 00406c21: PUSH EBX
// 00406c22: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00406c28: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00406c2e: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00406c33: ADD ESP,0x4
// 00406c36: PUSH ESI
// 00406c37: MOV EAX,dword ptr [EBX + 0x4]
// 00406c3a: PUSH EAX
// 00406c3b: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406c40: ADD ESP,0x8
// 00406c43: POP EDI
// 00406c44: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00406c44
// 00406c47: ADD EBX,0x18
// 00406c4a: SHL EAX,0x2
// 00406c4d: ADD EAX,EBX
// 00406c4f: POP EBP
// 00406c50: POP ESI
// 00406c51: POP EBX
// 00406c52: RET
// 00406c53: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406c53
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406c5d: JMP 0x00406c16
//   XREF to: 00406c16 (UNCONDITIONAL_JUMP)
// 00406c5f: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406c5f
//   XREF to: 0067939c (READ)
// 00406c66: JNZ 0x00406c74
//   XREF to: 00406c74 (CONDITIONAL_JUMP)
// 00406c68: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406c72: JMP 0x00406c16
//   XREF to: 00406c16 (UNCONDITIONAL_JUMP)
// 00406c74: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406c74
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406c7e: JMP 0x00406c16
//   XREF to: 00406c16 (UNCONDITIONAL_JUMP)
