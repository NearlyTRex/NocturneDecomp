// Name: engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
// Address: 00403cc0
// Address Range: [[00403cc0, 00403d5c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 (005dc760) at 005dc975 [UNCONDITIONAL_CALL]
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
engine_3d_c_renderPolygonTextureEnable_FUN_00403cc0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00403cc0: PUSH EBX
//   Label: engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
// 00403cc1: PUSH ESI
// 00403cc2: PUSH EBP
// 00403cc3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00403cc7: LEA ESI,[EBX + 0x18]
// 00403cca: LEA EAX,[EBX + 0x8]
// 00403ccd: PUSH EAX
// 00403cce: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00403cd3: ADD ESP,0x4
// 00403cd6: TEST EAX,EAX
// 00403cd8: JZ 0x00403d21
//   XREF to: 00403d21 (CONDITIONAL_JUMP)
// 00403cda: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00403ce1: JNZ 0x00403d3c
//   XREF to: 00403d3c (CONDITIONAL_JUMP)
// 00403ce3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00403cea: JNZ 0x00403d30
//   XREF to: 00403d30 (CONDITIONAL_JUMP)
// 00403cec: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00403cf6: PUSH EDI
//   Label: LAB_00403cf6
// 00403cf7: MOV EDI,0x1
// 00403cfc: PUSH EBX
// 00403cfd: XOR EBP,EBP
// 00403cff: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00403d05: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00403d0b: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00403d10: ADD ESP,0x4
// 00403d13: PUSH ESI
// 00403d14: MOV EAX,dword ptr [EBX + 0x4]
// 00403d17: PUSH EAX
// 00403d18: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00403d1d: ADD ESP,0x8
// 00403d20: POP EDI
// 00403d21: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00403d21
// 00403d24: ADD EBX,0x18
// 00403d27: SHL EAX,0x2
// 00403d2a: ADD EAX,EBX
// 00403d2c: POP EBP
// 00403d2d: POP ESI
// 00403d2e: POP EBX
// 00403d2f: RET
// 00403d30: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00403d30
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00403d3a: JMP 0x00403cf6
//   XREF to: 00403cf6 (UNCONDITIONAL_JUMP)
// 00403d3c: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00403d3c
//   XREF to: 0067939c (READ)
// 00403d43: JNZ 0x00403d51
//   XREF to: 00403d51 (CONDITIONAL_JUMP)
// 00403d45: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00403d4f: JMP 0x00403cf6
//   XREF to: 00403cf6 (UNCONDITIONAL_JUMP)
// 00403d51: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00403d51
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00403d5b: JMP 0x00403cf6
//   XREF to: 00403cf6 (UNCONDITIONAL_JUMP)
