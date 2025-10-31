// Name: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00
// Address: 00405a00
// Address Range: [[00405a00, 00405a9c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_BypassClipping
//   int g_RenderResult
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_rasterizePolygon_FUN_004d1340
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonUVTextureEnable_FUN_00405a00(SMRGLHeaderPrimitive *polygon_info)

{
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
  g_RenderStateFlag2 = PREPROCESS_NONE;
  g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
  if (g_BypassClipping != 0) {
    engine_3d_c_rasterizePolygon_FUN_004d1340
              ((SRenderVertex **)(polygon_info + 1),(polygon_info->base).count);
    return (SMRGLHeaderExtended *)&g_RenderResult;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0
            ((polygon_info->base).count,(int *)(polygon_info + 1));
  return (SMRGLHeaderExtended *)&g_RenderResult;
}


// Assembly code:
// 00405a00: PUSH ESI
//   Label: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00
// 00405a01: PUSH EDI
// 00405a02: PUSH EBP
// 00405a03: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405a07: MOV ECX,dword ptr [0x02d05248]
//   XREF to: 02d05248 (READ)
// 00405a0d: LEA EAX,[EDX + 0x18]
// 00405a10: TEST ECX,ECX
// 00405a12: JNZ 0x00405a66
//   XREF to: 00405a66 (CONDITIONAL_JUMP)
// 00405a14: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405a1b: JNZ 0x00405a5a
//   XREF to: 00405a5a (CONDITIONAL_JUMP)
// 00405a1d: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405a27: MOV ESI,0x1
//   Label: LAB_00405a27
// 00405a2c: XOR EDI,EDI
// 00405a2e: MOV EBP,dword ptr [0x00772a6c]
//   XREF to: 00772a6c (READ)
// 00405a34: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 00405a3a: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 00405a40: TEST EBP,EBP
// 00405a42: JZ 0x00405a87
//   XREF to: 00405a87 (CONDITIONAL_JUMP)
// 00405a44: MOV ECX,dword ptr [EDX + 0x4]
// 00405a47: PUSH ECX
// 00405a48: PUSH EAX
// 00405a49: CALL engine_3d.c_rasterizePolygon_FUN_004d1340
//   XREF to: 004d1340 (UNCONDITIONAL_CALL)
// 00405a4e: ADD ESP,0x8
// 00405a51: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00405a56: POP EBP
// 00405a57: POP EDI
// 00405a58: POP ESI
// 00405a59: RET
// 00405a5a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405a5a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405a64: JMP 0x00405a27
//   XREF to: 00405a27 (UNCONDITIONAL_JUMP)
// 00405a66: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405a66
//   XREF to: 0067939c (READ)
// 00405a6d: JNZ 0x00405a7b
//   XREF to: 00405a7b (CONDITIONAL_JUMP)
// 00405a6f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405a79: JMP 0x00405a27
//   XREF to: 00405a27 (UNCONDITIONAL_JUMP)
// 00405a7b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405a7b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405a85: JMP 0x00405a27
//   XREF to: 00405a27 (UNCONDITIONAL_JUMP)
// 00405a87: PUSH EAX
//   Label: LAB_00405a87
// 00405a88: MOV EAX,dword ptr [EDX + 0x4]
// 00405a8b: PUSH EAX
// 00405a8c: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405a91: ADD ESP,0x8
// 00405a94: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00405a99: POP EBP
// 00405a9a: POP EDI
// 00405a9b: POP ESI
// 00405a9c: RET
