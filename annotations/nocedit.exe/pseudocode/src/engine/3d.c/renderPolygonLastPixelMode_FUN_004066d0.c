// Name: engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0
// Address: 004066d0
// Address Range: [[004066d0, 00406798]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonLastPixelMode_FUN_004066d0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_LASTPIXEL;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_CurrentLightingValue =
         engine_light_cpp_calculateLighting_FUN_00505780
                   ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                    (polygon_info->surface_normal).C);
    g_ActiveRenderColor = engine_3d_c_makeGrayscaleColor_FUN_004039c0(g_CurrentPolygonColor);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004066d0: PUSH EBX
//   Label: engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0
// 004066d1: PUSH ESI
// 004066d2: PUSH EBP
// 004066d3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004066d7: LEA ESI,[EBX + 0x18]
// 004066da: LEA EAX,[EBX + 0x8]
// 004066dd: PUSH EAX
// 004066de: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004066e3: ADD ESP,0x4
// 004066e6: TEST EAX,EAX
// 004066e8: JZ 0x0040675a
//   XREF to: 0040675a (CONDITIONAL_JUMP)
// 004066ea: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004066f1: JNZ 0x00406775
//   XREF to: 00406775 (CONDITIONAL_JUMP)
// 004066f7: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004066fe: JNZ 0x00406769
//   XREF to: 00406769 (CONDITIONAL_JUMP)
// 00406700: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 0040670a: PUSH EDI
//   Label: LAB_0040670a
// 0040670b: MOV EAX,dword ptr [EBX + 0x10]
// 0040670e: PUSH EAX
// 0040670f: MOV EDX,dword ptr [EBX + 0xc]
// 00406712: MOV EDI,0x10
// 00406717: PUSH EDX
// 00406718: MOV ECX,dword ptr [EBX + 0x8]
// 0040671b: XOR EBP,EBP
// 0040671d: PUSH ECX
// 0040671e: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00406724: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0040672a: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 0040672f: ADD ESP,0xc
// 00406732: PUSH EAX
// 00406733: MOV EDI,dword ptr [0x00772a5c]
//   XREF to: 00772a5c (READ)
// 00406739: PUSH EDI
// 0040673a: MOV [0x02d02574],EAX
//   XREF to: 02d02574 (WRITE)
// 0040673f: CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   XREF to: 004039c0 (UNCONDITIONAL_CALL)
// 00406744: ADD ESP,0x8
// 00406747: PUSH ESI
// 00406748: MOV EBP,dword ptr [EBX + 0x4]
// 0040674b: PUSH EBP
// 0040674c: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00406751: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406756: ADD ESP,0x8
// 00406759: POP EDI
// 0040675a: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_0040675a
// 0040675d: LEA EAX,[EBX + 0x18]
// 00406760: SHL ESI,0x2
// 00406763: ADD EAX,ESI
// 00406765: POP EBP
// 00406766: POP ESI
// 00406767: POP EBX
// 00406768: RET
// 00406769: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406769
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406773: JMP 0x0040670a
//   XREF to: 0040670a (UNCONDITIONAL_JUMP)
// 00406775: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406775
//   XREF to: 0067939c (READ)
// 0040677c: JNZ 0x0040678a
//   XREF to: 0040678a (CONDITIONAL_JUMP)
// 0040677e: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406788: JMP 0x0040670a
//   XREF to: 0040670a (UNCONDITIONAL_JUMP)
// 0040678a: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040678a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406794: JMP 0x0040670a
//   XREF to: 0040670a (UNCONDITIONAL_JUMP)
