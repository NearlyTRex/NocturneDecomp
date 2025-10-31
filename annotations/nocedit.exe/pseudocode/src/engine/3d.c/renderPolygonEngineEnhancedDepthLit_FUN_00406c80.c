// Name: engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80
// Address: 00406c80
// Address Range: [[00406c80, 00406d5a]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_AdvancedClippingEnabled
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80(SMRGLHeaderPrimitive *polygon_info)

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
    if (g_AdvancedClippingEnabled == 0) {
      g_RenderStateFlags = RENDER_ENGINE_ULTRA_QUALITY;
    }
    else {
      g_RenderStateFlags = 0x67;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((polygon_info->base).count,(int *)(polygon_info + 1));
      return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406c80: PUSH EBX
//   Label: engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80
// 00406c81: PUSH ESI
// 00406c82: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00406c86: LEA ESI,[EBX + 0x18]
// 00406c89: LEA EAX,[EBX + 0x8]
// 00406c8c: PUSH EAX
// 00406c8d: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406c92: ADD ESP,0x4
// 00406c95: TEST EAX,EAX
// 00406c97: JZ 0x00406cf9
//   XREF to: 00406cf9 (CONDITIONAL_JUMP)
// 00406c99: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406ca0: JNZ 0x00406d13
//   XREF to: 00406d13 (CONDITIONAL_JUMP)
// 00406ca2: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406ca9: JNZ 0x00406d07
//   XREF to: 00406d07 (CONDITIONAL_JUMP)
// 00406cab: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406cb5: CMP dword ptr [0x02d02578],0x0
//   Label: LAB_00406cb5
//   XREF to: 02d02578 (READ)
// 00406cbc: JZ 0x00406d34
//   XREF to: 00406d34 (CONDITIONAL_JUMP)
// 00406cc2: MOV dword ptr [0x02d052a0],0x67
//   XREF to: 02d052a0 (WRITE)
// 00406ccc: MOV EDX,0x1
//   Label: LAB_00406ccc
// 00406cd1: PUSH EBX
// 00406cd2: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00406cd8: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00406cdd: MOV ECX,dword ptr [0x02d02578]
//   XREF to: 02d02578 (READ)
// 00406ce3: ADD ESP,0x4
// 00406ce6: TEST ECX,ECX
// 00406ce8: JZ 0x00406d40
//   XREF to: 00406d40 (CONDITIONAL_JUMP)
// 00406cea: PUSH EDI
// 00406ceb: PUSH ESI
// 00406cec: MOV EDI,dword ptr [EBX + 0x4]
// 00406cef: PUSH EDI
// 00406cf0: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406cf5: ADD ESP,0x8
// 00406cf8: POP EDI
// 00406cf9: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00406cf9
// 00406cfc: LEA EAX,[EBX + 0x18]
// 00406cff: SHL ESI,0x2
// 00406d02: ADD EAX,ESI
// 00406d04: POP ESI
// 00406d05: POP EBX
// 00406d06: RET
// 00406d07: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406d07
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406d11: JMP 0x00406cb5
//   XREF to: 00406cb5 (UNCONDITIONAL_JUMP)
// 00406d13: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406d13
//   XREF to: 0067939c (READ)
// 00406d1a: JNZ 0x00406d28
//   XREF to: 00406d28 (CONDITIONAL_JUMP)
// 00406d1c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406d26: JMP 0x00406cb5
//   XREF to: 00406cb5 (UNCONDITIONAL_JUMP)
// 00406d28: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406d28
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406d32: JMP 0x00406cb5
//   XREF to: 00406cb5 (UNCONDITIONAL_JUMP)
// 00406d34: MOV dword ptr [0x02d052a0],0x267
//   Label: LAB_00406d34
//   XREF to: 02d052a0 (WRITE)
// 00406d3e: JMP 0x00406ccc
//   XREF to: 00406ccc (UNCONDITIONAL_JUMP)
// 00406d40: PUSH ESI
//   Label: LAB_00406d40
// 00406d41: MOV ESI,dword ptr [EBX + 0x4]
// 00406d44: PUSH ESI
// 00406d45: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 00406d4a: ADD ESP,0x8
// 00406d4d: MOV ESI,dword ptr [EBX + 0x4]
// 00406d50: LEA EAX,[EBX + 0x18]
// 00406d53: SHL ESI,0x2
// 00406d56: ADD EAX,ESI
// 00406d58: POP ESI
// 00406d59: POP EBX
// 00406d5a: RET
