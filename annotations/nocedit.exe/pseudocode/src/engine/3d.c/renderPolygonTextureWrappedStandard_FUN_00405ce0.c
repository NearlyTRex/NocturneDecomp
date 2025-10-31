// Name: engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0
// Address: 00405ce0
// Address Range: [[00405ce0, 00405d76]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d0c8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTextureWrappedStandard_FUN_00405ce0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_TEXTURE_UV_WRAPPED;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405ce0: PUSH EBX
//   Label: engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0
// 00405ce1: PUSH ESI
// 00405ce2: PUSH EBP
// 00405ce3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405ce7: LEA ESI,[EBX + 0x18]
// 00405cea: LEA EAX,[EBX + 0x8]
// 00405ced: PUSH EAX
// 00405cee: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405cf3: ADD ESP,0x4
// 00405cf6: TEST EAX,EAX
// 00405cf8: JZ 0x00405d3b
//   XREF to: 00405d3b (CONDITIONAL_JUMP)
// 00405cfa: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405d01: JNZ 0x00405d56
//   XREF to: 00405d56 (CONDITIONAL_JUMP)
// 00405d03: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405d0a: JNZ 0x00405d4a
//   XREF to: 00405d4a (CONDITIONAL_JUMP)
// 00405d0c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405d16: PUSH EDI
//   Label: LAB_00405d16
// 00405d17: MOV EDI,0xc5
// 00405d1c: PUSH ESI
// 00405d1d: MOV EAX,dword ptr [EBX + 0x4]
// 00405d20: MOV EBP,0x1
// 00405d25: PUSH EAX
// 00405d26: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405d2c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405d32: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405d37: ADD ESP,0x8
// 00405d3a: POP EDI
// 00405d3b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405d3b
// 00405d3e: ADD EBX,0x18
// 00405d41: SHL EAX,0x2
// 00405d44: ADD EAX,EBX
// 00405d46: POP EBP
// 00405d47: POP ESI
// 00405d48: POP EBX
// 00405d49: RET
// 00405d4a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405d4a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405d54: JMP 0x00405d16
//   XREF to: 00405d16 (UNCONDITIONAL_JUMP)
// 00405d56: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405d56
//   XREF to: 0067939c (READ)
// 00405d5d: JNZ 0x00405d6b
//   XREF to: 00405d6b (CONDITIONAL_JUMP)
// 00405d5f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405d69: JMP 0x00405d16
//   XREF to: 00405d16 (UNCONDITIONAL_JUMP)
// 00405d6b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405d6b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405d75: JMP 0x00405d16
//   XREF to: 00405d16 (UNCONDITIONAL_JUMP)
