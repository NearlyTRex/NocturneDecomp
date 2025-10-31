// Name: engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
// Address: 00404a40
// Address Range: [[00404a40, 00404adf]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d0ea [UNCONDITIONAL_CALL]
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
engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_PLANE_MASKED_LIT;
    g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00404a40: PUSH EBX
//   Label: engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
// 00404a41: PUSH ESI
// 00404a42: PUSH EBP
// 00404a43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404a47: LEA ESI,[EBX + 0x18]
// 00404a4a: LEA EAX,[EBX + 0x8]
// 00404a4d: PUSH EAX
// 00404a4e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404a53: ADD ESP,0x4
// 00404a56: TEST EAX,EAX
// 00404a58: JZ 0x00404aa4
//   XREF to: 00404aa4 (CONDITIONAL_JUMP)
// 00404a5a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404a61: JNZ 0x00404abf
//   XREF to: 00404abf (CONDITIONAL_JUMP)
// 00404a63: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404a6a: JNZ 0x00404ab3
//   XREF to: 00404ab3 (CONDITIONAL_JUMP)
// 00404a6c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404a76: PUSH EDI
//   Label: LAB_00404a76
// 00404a77: MOV EDI,0xd1
// 00404a7c: MOV EBP,0x3
// 00404a81: PUSH EBX
// 00404a82: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404a88: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00404a8e: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00404a93: ADD ESP,0x4
// 00404a96: PUSH ESI
// 00404a97: MOV EAX,dword ptr [EBX + 0x4]
// 00404a9a: PUSH EAX
// 00404a9b: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404aa0: ADD ESP,0x8
// 00404aa3: POP EDI
// 00404aa4: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404aa4
// 00404aa7: ADD EBX,0x18
// 00404aaa: SHL EAX,0x2
// 00404aad: ADD EAX,EBX
// 00404aaf: POP EBP
// 00404ab0: POP ESI
// 00404ab1: POP EBX
// 00404ab2: RET
// 00404ab3: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404ab3
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404abd: JMP 0x00404a76
//   XREF to: 00404a76 (UNCONDITIONAL_JUMP)
// 00404abf: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404abf
//   XREF to: 0067939c (READ)
// 00404ac6: JNZ 0x00404ad4
//   XREF to: 00404ad4 (CONDITIONAL_JUMP)
// 00404ac8: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404ad2: JMP 0x00404a76
//   XREF to: 00404a76 (UNCONDITIONAL_JUMP)
// 00404ad4: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404ad4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404ade: JMP 0x00404a76
//   XREF to: 00404a76 (UNCONDITIONAL_JUMP)
