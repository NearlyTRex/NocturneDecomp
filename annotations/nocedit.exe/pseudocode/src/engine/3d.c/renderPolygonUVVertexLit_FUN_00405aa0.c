// Name: engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0
// Address: 00405aa0
// Address Range: [[00405aa0, 00405b4b]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive * polygon_info)
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
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive *polygon_info)

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
  g_RenderStateFlags = RENDER_VERTEX_LIGHTING;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  g_RenderStateFlag2 = PREPROCESS_NONE;
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
// 00405aa0: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0
// 00405aa1: PUSH ESI
// 00405aa2: PUSH EDI
// 00405aa3: PUSH EBP
// 00405aa4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00405aa8: MOV EDX,dword ptr [0x02d05248]
//   XREF to: 02d05248 (READ)
// 00405aae: LEA EBX,[ESI + 0x18]
// 00405ab1: TEST EDX,EDX
// 00405ab3: JNZ 0x00405b14
//   XREF to: 00405b14 (CONDITIONAL_JUMP)
// 00405ab5: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405abc: JNZ 0x00405b08
//   XREF to: 00405b08 (CONDITIONAL_JUMP)
// 00405abe: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405ac8: MOV EDI,0x3
//   Label: LAB_00405ac8
// 00405acd: PUSH 0xffff
// 00405ad2: XOR EBP,EBP
// 00405ad4: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405ada: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 00405adf: MOV EAX,[0x00772a6c]
//   XREF to: 00772a6c (READ)
// 00405ae4: ADD ESP,0x4
// 00405ae7: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405aed: TEST EAX,EAX
// 00405aef: JZ 0x00405b35
//   XREF to: 00405b35 (CONDITIONAL_JUMP)
// 00405af1: MOV ECX,dword ptr [ESI + 0x4]
// 00405af4: PUSH ECX
// 00405af5: PUSH EBX
// 00405af6: CALL engine_3d.c_rasterizePolygon_FUN_004d1340
//   XREF to: 004d1340 (UNCONDITIONAL_CALL)
// 00405afb: ADD ESP,0x8
// 00405afe: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00405b03: POP EBP
// 00405b04: POP EDI
// 00405b05: POP ESI
// 00405b06: POP EBX
// 00405b07: RET
// 00405b08: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405b08
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405b12: JMP 0x00405ac8
//   XREF to: 00405ac8 (UNCONDITIONAL_JUMP)
// 00405b14: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405b14
//   XREF to: 0067939c (READ)
// 00405b1b: JNZ 0x00405b29
//   XREF to: 00405b29 (CONDITIONAL_JUMP)
// 00405b1d: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405b27: JMP 0x00405ac8
//   XREF to: 00405ac8 (UNCONDITIONAL_JUMP)
// 00405b29: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405b29
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405b33: JMP 0x00405ac8
//   XREF to: 00405ac8 (UNCONDITIONAL_JUMP)
// 00405b35: PUSH EBX
//   Label: LAB_00405b35
// 00405b36: MOV EDX,dword ptr [ESI + 0x4]
// 00405b39: PUSH EDX
// 00405b3a: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405b3f: ADD ESP,0x8
// 00405b42: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00405b47: POP EBP
// 00405b48: POP EDI
// 00405b49: POP ESI
// 00405b4a: POP EBX
// 00405b4b: RET
