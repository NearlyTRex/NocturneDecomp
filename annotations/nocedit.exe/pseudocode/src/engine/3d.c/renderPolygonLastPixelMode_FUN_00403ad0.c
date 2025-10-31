// Name: engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
// Address: 00403ad0
// Address Range: [[00403ad0, 00403b98]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0(SMRGLHeaderPrimitive * primitive)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d1c0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentPolygonColor
//   int g_ActiveRenderColor
//   int g_CurrentLightingValue
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_light.cpp_calculateLighting_FUN_00505780

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
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
    g_RenderStateFlags = RENDER_LASTPIXEL;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_CurrentLightingValue =
         engine_light_cpp_calculateLighting_FUN_00505780
                   ((primitive->surface_normal).A,(primitive->surface_normal).B,
                    (primitive->surface_normal).C);
    g_ActiveRenderColor = engine_3d_c_makeGrayscaleColor_FUN_004039c0(g_CurrentPolygonColor);
    engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}


// Assembly code:
// 00403ad0: PUSH EBX
//   Label: engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
// 00403ad1: PUSH ESI
// 00403ad2: PUSH EBP
// 00403ad3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00403ad7: LEA ESI,[EBX + 0x18]
// 00403ada: LEA EAX,[EBX + 0x8]
// 00403add: PUSH EAX
// 00403ade: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00403ae3: ADD ESP,0x4
// 00403ae6: TEST EAX,EAX
// 00403ae8: JZ 0x00403b5a
//   XREF to: 00403b5a (CONDITIONAL_JUMP)
// 00403aea: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00403af1: JNZ 0x00403b75
//   XREF to: 00403b75 (CONDITIONAL_JUMP)
// 00403af7: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00403afe: JNZ 0x00403b69
//   XREF to: 00403b69 (CONDITIONAL_JUMP)
// 00403b00: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00403b0a: PUSH EDI
//   Label: LAB_00403b0a
// 00403b0b: MOV EAX,dword ptr [EBX + 0x10]
// 00403b0e: PUSH EAX
// 00403b0f: MOV EDX,dword ptr [EBX + 0xc]
// 00403b12: MOV EDI,0x10
// 00403b17: PUSH EDX
// 00403b18: MOV ECX,dword ptr [EBX + 0x8]
// 00403b1b: XOR EBP,EBP
// 00403b1d: PUSH ECX
// 00403b1e: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00403b24: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00403b2a: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 00403b2f: ADD ESP,0xc
// 00403b32: PUSH EAX
// 00403b33: MOV EDI,dword ptr [0x00772a5c]
//   XREF to: 00772a5c (READ)
// 00403b39: PUSH EDI
// 00403b3a: MOV [0x02d02574],EAX
//   XREF to: 02d02574 (WRITE)
// 00403b3f: CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   XREF to: 004039c0 (UNCONDITIONAL_CALL)
// 00403b44: ADD ESP,0x8
// 00403b47: PUSH ESI
// 00403b48: MOV EBP,dword ptr [EBX + 0x4]
// 00403b4b: PUSH EBP
// 00403b4c: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00403b51: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00403b56: ADD ESP,0x8
// 00403b59: POP EDI
// 00403b5a: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00403b5a
// 00403b5d: LEA EAX,[EBX + 0x18]
// 00403b60: SHL ESI,0x2
// 00403b63: ADD EAX,ESI
// 00403b65: POP EBP
// 00403b66: POP ESI
// 00403b67: POP EBX
// 00403b68: RET
// 00403b69: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00403b69
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00403b73: JMP 0x00403b0a
//   XREF to: 00403b0a (UNCONDITIONAL_JUMP)
// 00403b75: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00403b75
//   XREF to: 0067939c (READ)
// 00403b7c: JNZ 0x00403b8a
//   XREF to: 00403b8a (CONDITIONAL_JUMP)
// 00403b7e: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00403b88: JMP 0x00403b0a
//   XREF to: 00403b0a (UNCONDITIONAL_JUMP)
// 00403b8a: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00403b8a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00403b94: JMP 0x00403b0a
//   XREF to: 00403b0a (UNCONDITIONAL_JUMP)
