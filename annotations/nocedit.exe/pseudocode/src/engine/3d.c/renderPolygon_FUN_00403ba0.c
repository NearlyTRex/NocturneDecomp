// Name: engine_3d.c_renderPolygon_FUN_00403ba0
// Address: 00403ba0
// Address Range: [[00403ba0, 00403cb4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygon_FUN_00403ba0(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d195 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_AdvancedClippingEnabled
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygon_FUN_00403ba0(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_AdvancedClippingEnabled == 0) {
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
      g_RenderStateFlags = 0x204;
      g_RenderStateFlag2 = 0;
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((polygon_info->base).count,(int *)(polygon_info + 1));
      return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
    }
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
    g_RenderStateFlags = 4;
    g_RenderStateFlag2 = 0;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00403ba0: PUSH EBX
//   Label: engine_3d.c_renderPolygon_FUN_00403ba0
// 00403ba1: PUSH ESI
// 00403ba2: PUSH EBP
// 00403ba3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00403ba7: LEA ESI,[EBX + 0x18]
// 00403baa: LEA EAX,[EBX + 0x8]
// 00403bad: PUSH EAX
// 00403bae: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00403bb3: ADD ESP,0x4
// 00403bb6: TEST EAX,EAX
// 00403bb8: JZ 0x00403c02
//   XREF to: 00403c02 (CONDITIONAL_JUMP)
// 00403bba: CMP dword ptr [0x02d02578],0x0
//   XREF to: 02d02578 (READ)
// 00403bc1: JZ 0x00403c3e
//   XREF to: 00403c3e (CONDITIONAL_JUMP)
// 00403bc7: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00403bce: JNZ 0x00403c1d
//   XREF to: 00403c1d (CONDITIONAL_JUMP)
// 00403bd0: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00403bd7: JNZ 0x00403c11
//   XREF to: 00403c11 (CONDITIONAL_JUMP)
// 00403bd9: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00403be3: MOV EBP,0x4
//   Label: LAB_00403be3
// 00403be8: PUSH ESI
// 00403be9: MOV EDX,dword ptr [EBX + 0x4]
// 00403bec: XOR EAX,EAX
// 00403bee: PUSH EDX
// 00403bef: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 00403bf5: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00403bfa: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00403bff: ADD ESP,0x8
// 00403c02: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00403c02
// 00403c05: LEA EAX,[EBX + 0x18]
// 00403c08: SHL ESI,0x2
// 00403c0b: ADD EAX,ESI
// 00403c0d: POP EBP
// 00403c0e: POP ESI
// 00403c0f: POP EBX
// 00403c10: RET
// 00403c11: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00403c11
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00403c1b: JMP 0x00403be3
//   XREF to: 00403be3 (UNCONDITIONAL_JUMP)
// 00403c1d: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00403c1d
//   XREF to: 0067939c (READ)
// 00403c24: JNZ 0x00403c32
//   XREF to: 00403c32 (CONDITIONAL_JUMP)
// 00403c26: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00403c30: JMP 0x00403be3
//   XREF to: 00403be3 (UNCONDITIONAL_JUMP)
// 00403c32: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00403c32
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00403c3c: JMP 0x00403be3
//   XREF to: 00403be3 (UNCONDITIONAL_JUMP)
// 00403c3e: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00403c3e
//   XREF to: 02d05248 (READ)
// 00403c45: JNZ 0x00403c94
//   XREF to: 00403c94 (CONDITIONAL_JUMP)
// 00403c47: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00403c4e: JNZ 0x00403c88
//   XREF to: 00403c88 (CONDITIONAL_JUMP)
// 00403c50: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00403c5a: MOV EBP,0x204
//   Label: LAB_00403c5a
// 00403c5f: PUSH ESI
// 00403c60: MOV EDX,dword ptr [EBX + 0x4]
// 00403c63: XOR EAX,EAX
// 00403c65: PUSH EDX
// 00403c66: MOV dword ptr [0x02d052a0],EBP
//   XREF to: 02d052a0 (WRITE)
// 00403c6c: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00403c71: CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420
//   XREF to: 00438420 (UNCONDITIONAL_CALL)
// 00403c76: ADD ESP,0x8
// 00403c79: MOV ESI,dword ptr [EBX + 0x4]
// 00403c7c: LEA EAX,[EBX + 0x18]
// 00403c7f: SHL ESI,0x2
// 00403c82: ADD EAX,ESI
// 00403c84: POP EBP
// 00403c85: POP ESI
// 00403c86: POP EBX
// 00403c87: RET
// 00403c88: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00403c88
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00403c92: JMP 0x00403c5a
//   XREF to: 00403c5a (UNCONDITIONAL_JUMP)
// 00403c94: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00403c94
//   XREF to: 0067939c (READ)
// 00403c9b: JNZ 0x00403ca9
//   XREF to: 00403ca9 (CONDITIONAL_JUMP)
// 00403c9d: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00403ca7: JMP 0x00403c5a
//   XREF to: 00403c5a (UNCONDITIONAL_JUMP)
// 00403ca9: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00403ca9
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00403cb3: JMP 0x00403c5a
//   XREF to: 00403c5a (UNCONDITIONAL_JUMP)
