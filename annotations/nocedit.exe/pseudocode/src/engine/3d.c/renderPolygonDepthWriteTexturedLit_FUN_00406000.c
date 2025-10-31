// Name: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000
// Address: 00406000
// Address Range: [[00406000, 00406096]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00406000(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_DEPTH_TEXTURED;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406000: PUSH EBX
//   Label: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000
// 00406001: PUSH ESI
// 00406002: PUSH EBP
// 00406003: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00406007: LEA ESI,[EBX + 0x18]
// 0040600a: LEA EAX,[EBX + 0x8]
// 0040600d: PUSH EAX
// 0040600e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406013: ADD ESP,0x4
// 00406016: TEST EAX,EAX
// 00406018: JZ 0x0040605b
//   XREF to: 0040605b (CONDITIONAL_JUMP)
// 0040601a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406021: JNZ 0x00406076
//   XREF to: 00406076 (CONDITIONAL_JUMP)
// 00406023: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040602a: JNZ 0x0040606a
//   XREF to: 0040606a (CONDITIONAL_JUMP)
// 0040602c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406036: PUSH EDI
//   Label: LAB_00406036
// 00406037: MOV EDI,0x81
// 0040603c: PUSH ESI
// 0040603d: MOV EAX,dword ptr [EBX + 0x4]
// 00406040: MOV EBP,0x1
// 00406045: PUSH EAX
// 00406046: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0040604c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00406052: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406057: ADD ESP,0x8
// 0040605a: POP EDI
// 0040605b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0040605b
// 0040605e: ADD EBX,0x18
// 00406061: SHL EAX,0x2
// 00406064: ADD EAX,EBX
// 00406066: POP EBP
// 00406067: POP ESI
// 00406068: POP EBX
// 00406069: RET
// 0040606a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040606a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406074: JMP 0x00406036
//   XREF to: 00406036 (UNCONDITIONAL_JUMP)
// 00406076: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406076
//   XREF to: 0067939c (READ)
// 0040607d: JNZ 0x0040608b
//   XREF to: 0040608b (CONDITIONAL_JUMP)
// 0040607f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406089: JMP 0x00406036
//   XREF to: 00406036 (UNCONDITIONAL_JUMP)
// 0040608b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040608b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406095: JMP 0x00406036
//   XREF to: 00406036 (UNCONDITIONAL_JUMP)
