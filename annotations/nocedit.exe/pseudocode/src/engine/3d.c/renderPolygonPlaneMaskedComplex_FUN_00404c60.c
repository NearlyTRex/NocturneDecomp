// Name: engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
// Address: 00404c60
// Address Range: [[00404c60, 00404d45]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d0d9 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   float g_PerspectiveReciprocal
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 == 0) goto LAB_00404cce;
  if (g_PerspectiveReciprocal == 0.0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) goto LAB_00404c98;
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
    else {
      if (g_BitsPerPixel != 0x20) goto LAB_00404cfd;
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
LAB_00404c98:
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
LAB_00404cfd:
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  g_RenderStateFlags = RENDER_FULL_FEATURED;
  g_RenderStateFlag2 = RENDER_TEXTURE_ENABLE;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
  engine_clipper_c_clipAndRasterize_FUN_004371b0
            ((polygon_info->base).count,(int *)(polygon_info + 1));
LAB_00404cce:
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00404c60: PUSH EBX
//   Label: engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
// 00404c61: PUSH ESI
// 00404c62: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00404c66: LEA ESI,[EBX + 0x18]
// 00404c69: LEA EAX,[EBX + 0x8]
// 00404c6c: PUSH EAX
// 00404c6d: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404c72: ADD ESP,0x4
// 00404c75: TEST EAX,EAX
// 00404c77: JZ 0x00404cce
//   XREF to: 00404cce (CONDITIONAL_JUMP)
// 00404c79: CMP dword ptr [0x02d051f4],0x0
//   XREF to: 02d051f4 (READ)
// 00404c80: JZ 0x00404d09
//   XREF to: 00404d09 (CONDITIONAL_JUMP)
// 00404c86: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404c8d: JNZ 0x00404ce8
//   XREF to: 00404ce8 (CONDITIONAL_JUMP)
// 00404c8f: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404c96: JNZ 0x00404cdc
//   XREF to: 00404cdc (CONDITIONAL_JUMP)
// 00404c98: MOV dword ptr [0x02d0257c],0x5b50ec
//   Label: LAB_00404c98
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404ca2: MOV EDX,0xd9
//   Label: LAB_00404ca2
// 00404ca7: MOV ECX,0x1
// 00404cac: PUSH EBX
// 00404cad: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 00404cb3: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 00404cb9: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00404cbe: ADD ESP,0x4
// 00404cc1: PUSH ESI
// 00404cc2: MOV ESI,dword ptr [EBX + 0x4]
// 00404cc5: PUSH ESI
// 00404cc6: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404ccb: ADD ESP,0x8
// 00404cce: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00404cce
// 00404cd1: LEA EAX,[EBX + 0x18]
// 00404cd4: SHL ESI,0x2
// 00404cd7: ADD EAX,ESI
// 00404cd9: POP ESI
// 00404cda: POP EBX
// 00404cdb: RET
// 00404cdc: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404cdc
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404ce6: JMP 0x00404ca2
//   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
// 00404ce8: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404ce8
//   XREF to: 0067939c (READ)
// 00404cef: JNZ 0x00404cfd
//   XREF to: 00404cfd (CONDITIONAL_JUMP)
// 00404cf1: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404cfb: JMP 0x00404ca2
//   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
// 00404cfd: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404cfd
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404d07: JMP 0x00404ca2
//   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
// 00404d09: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00404d09
//   XREF to: 02d05248 (READ)
// 00404d10: JNZ 0x00404d2e
//   XREF to: 00404d2e (CONDITIONAL_JUMP)
// 00404d12: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404d19: JZ 0x00404c98
//   XREF to: 00404c98 (CONDITIONAL_JUMP)
// 00404d1f: MOV dword ptr [0x02d0257c],0x5b5322
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404d29: JMP 0x00404ca2
//   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
// 00404d2e: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404d2e
//   XREF to: 0067939c (READ)
// 00404d35: JNZ 0x00404cfd
//   XREF to: 00404cfd (CONDITIONAL_JUMP)
// 00404d37: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404d41: JMP 0x00404ca2
//   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
