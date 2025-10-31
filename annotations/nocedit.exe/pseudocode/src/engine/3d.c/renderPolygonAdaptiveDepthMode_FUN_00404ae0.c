// Name: engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
// Address: 00404ae0
// Address Range: [[00404ae0, 00404c54]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d124 [UNCONDITIONAL_CALL]
// Globals:
//   int INT_0066df80 = 0x1
//   int g_BitsPerPixel = 0x8
//   int g_CurrentPolygonColor
//   int g_TexturesDisabled
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
engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_TexturesDisabled == 0) {
      if (INT_0066df80 == 0) {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            pcVar2 = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            pcVar2 = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          pcVar2 = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          pcVar2 = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = RENDER_LASTPIXEL;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = pcVar2;
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            pcVar2 = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            pcVar2 = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          pcVar2 = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          pcVar2 = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = RENDER_PLANE_MASKED;
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
        g_ScanlineRenderFunc = pcVar2;
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_BitsPerPixel == 0x20) {
          pcVar2 = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
        }
        else {
          pcVar2 = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
        }
      }
      else if (g_BitsPerPixel == 0x20) {
        pcVar2 = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        pcVar2 = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = 0;
      g_ScanlineRenderFunc = pcVar2;
    }
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
// 00404ae0: PUSH EBX
//   Label: engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
// 00404ae1: PUSH ESI
// 00404ae2: PUSH EDI
// 00404ae3: PUSH EBP
// 00404ae4: MOV ESI,dword ptr [0x02d0257c]
//   XREF to: 02d0257c (READ)
// 00404aea: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00404aee: LEA EDI,[EBX + 0x18]
// 00404af1: LEA EAX,[EBX + 0x8]
// 00404af4: PUSH EAX
// 00404af5: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404afa: ADD ESP,0x4
// 00404afd: TEST EAX,EAX
// 00404aff: JZ 0x00404b78
//   XREF to: 00404b78 (CONDITIONAL_JUMP)
// 00404b01: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 00404b08: JZ 0x00404baf
//   XREF to: 00404baf (CONDITIONAL_JUMP)
// 00404b0e: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404b15: JNZ 0x00404b95
//   XREF to: 00404b95 (CONDITIONAL_JUMP)
// 00404b1b: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404b22: JNZ 0x00404b8e
//   XREF to: 00404b8e (CONDITIONAL_JUMP)
// 00404b24: MOV ESI,0x5b50ec
//   XREF to: 005b50ec (DATA)
// 00404b29: XOR EDX,EDX
//   Label: LAB_00404b29
// 00404b2b: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 00404b31: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 00404b37: MOV dword ptr [0x02d052a0],EDX
//   Label: LAB_00404b37
//   XREF to: 02d052a0 (WRITE)
// 00404b3d: MOV EBP,dword ptr [EBX + 0x10]
// 00404b40: PUSH EBP
// 00404b41: MOV EAX,dword ptr [EBX + 0xc]
// 00404b44: PUSH EAX
// 00404b45: MOV EDX,dword ptr [EBX + 0x8]
// 00404b48: PUSH EDX
// 00404b49: CALL engine_light.cpp_calculateLighting_FUN_00505780
//   XREF to: 00505780 (UNCONDITIONAL_CALL)
// 00404b4e: ADD ESP,0xc
// 00404b51: PUSH EAX
// 00404b52: MOV ECX,dword ptr [0x00772a5c]
//   XREF to: 00772a5c (READ)
// 00404b58: PUSH ECX
// 00404b59: MOV [0x02d02574],EAX
//   XREF to: 02d02574 (WRITE)
// 00404b5e: CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   XREF to: 004039c0 (UNCONDITIONAL_CALL)
// 00404b63: ADD ESP,0x8
// 00404b66: PUSH EDI
// 00404b67: MOV EDI,dword ptr [EBX + 0x4]
// 00404b6a: PUSH EDI
// 00404b6b: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00404b70: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404b75: ADD ESP,0x8
// 00404b78: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404b78
// 00404b7b: ADD EBX,0x18
// 00404b7e: SHL EAX,0x2
// 00404b81: MOV ESI,dword ptr [0x02d0257c]
//   XREF to: 02d0257c (READ)
// 00404b87: ADD EAX,EBX
// 00404b89: POP EBP
// 00404b8a: POP EDI
// 00404b8b: POP ESI
// 00404b8c: POP EBX
// 00404b8d: RET
// 00404b8e: MOV ESI,0x5b5322
//   Label: LAB_00404b8e
//   XREF to: 005b5322 (DATA)
// 00404b93: JMP 0x00404b29
//   XREF to: 00404b29 (UNCONDITIONAL_JUMP)
// 00404b95: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404b95
//   XREF to: 0067939c (READ)
// 00404b9c: JNZ 0x00404ba5
//   XREF to: 00404ba5 (CONDITIONAL_JUMP)
// 00404b9e: MOV ESI,0x5b4031
//   XREF to: 005b4031 (DATA)
// 00404ba3: JMP 0x00404b29
//   XREF to: 00404b29 (UNCONDITIONAL_JUMP)
// 00404ba5: MOV ESI,0x5b4823
//   Label: LAB_00404ba5
//   XREF to: 005b4823 (DATA)
// 00404baa: JMP 0x00404b29
//   XREF to: 00404b29 (UNCONDITIONAL_JUMP)
// 00404baf: CMP dword ptr [0x0066df80],0x0
//   Label: LAB_00404baf
//   XREF to: 0066df80 (READ)
// 00404bb6: JZ 0x00404c08
//   XREF to: 00404c08 (CONDITIONAL_JUMP)
// 00404bb8: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404bbf: JNZ 0x00404bf1
//   XREF to: 00404bf1 (CONDITIONAL_JUMP)
// 00404bc1: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404bc8: JNZ 0x00404bea
//   XREF to: 00404bea (CONDITIONAL_JUMP)
// 00404bca: MOV ESI,0x5b50ec
//   XREF to: 005b50ec (DATA)
// 00404bcf: MOV ECX,0x1
//   Label: LAB_00404bcf
// 00404bd4: MOV EDX,0xd0
// 00404bd9: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 00404bdf: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 00404be5: JMP 0x00404b37
//   XREF to: 00404b37 (UNCONDITIONAL_JUMP)
// 00404bea: MOV ESI,0x5b5322
//   Label: LAB_00404bea
//   XREF to: 005b5322 (DATA)
// 00404bef: JMP 0x00404bcf
//   XREF to: 00404bcf (UNCONDITIONAL_JUMP)
// 00404bf1: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404bf1
//   XREF to: 0067939c (READ)
// 00404bf8: JNZ 0x00404c01
//   XREF to: 00404c01 (CONDITIONAL_JUMP)
// 00404bfa: MOV ESI,0x5b4031
//   XREF to: 005b4031 (DATA)
// 00404bff: JMP 0x00404bcf
//   XREF to: 00404bcf (UNCONDITIONAL_JUMP)
// 00404c01: MOV ESI,0x5b4823
//   Label: LAB_00404c01
//   XREF to: 005b4823 (DATA)
// 00404c06: JMP 0x00404bcf
//   XREF to: 00404bcf (UNCONDITIONAL_JUMP)
// 00404c08: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00404c08
//   XREF to: 02d05248 (READ)
// 00404c0f: JNZ 0x00404c3e
//   XREF to: 00404c3e (CONDITIONAL_JUMP)
// 00404c11: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404c18: JNZ 0x00404c37
//   XREF to: 00404c37 (CONDITIONAL_JUMP)
// 00404c1a: MOV ESI,0x5b50ec
//   XREF to: 005b50ec (DATA)
// 00404c1f: MOV EDX,0x10
//   Label: LAB_00404c1f
// 00404c24: XOR ECX,ECX
// 00404c26: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 00404c2c: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 00404c32: JMP 0x00404b37
//   XREF to: 00404b37 (UNCONDITIONAL_JUMP)
// 00404c37: MOV ESI,0x5b5322
//   Label: LAB_00404c37
//   XREF to: 005b5322 (DATA)
// 00404c3c: JMP 0x00404c1f
//   XREF to: 00404c1f (UNCONDITIONAL_JUMP)
// 00404c3e: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404c3e
//   XREF to: 0067939c (READ)
// 00404c45: JNZ 0x00404c4e
//   XREF to: 00404c4e (CONDITIONAL_JUMP)
// 00404c47: MOV ESI,0x5b4031
//   XREF to: 005b4031 (DATA)
// 00404c4c: JMP 0x00404c1f
//   XREF to: 00404c1f (UNCONDITIONAL_JUMP)
// 00404c4e: MOV ESI,0x5b4823
//   Label: LAB_00404c4e
//   XREF to: 005b4823 (DATA)
// 00404c53: JMP 0x00404c1f
//   XREF to: 00404c1f (UNCONDITIONAL_JUMP)
