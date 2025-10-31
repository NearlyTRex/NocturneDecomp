// Name: engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40
// Address: 00406b40
// Address Range: [[00406b40, 00406bdf]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonExtremeQualityMode_FUN_00406b40(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_EXTREME_QUALITY;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406b40: PUSH EBX
//   Label: engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40
// 00406b41: PUSH ESI
// 00406b42: PUSH EBP
// 00406b43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00406b47: LEA ESI,[EBX + 0x18]
// 00406b4a: LEA EAX,[EBX + 0x8]
// 00406b4d: PUSH EAX
// 00406b4e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406b53: ADD ESP,0x4
// 00406b56: TEST EAX,EAX
// 00406b58: JZ 0x00406ba4
//   XREF to: 00406ba4 (CONDITIONAL_JUMP)
// 00406b5a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406b61: JNZ 0x00406bbf
//   XREF to: 00406bbf (CONDITIONAL_JUMP)
// 00406b63: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406b6a: JNZ 0x00406bb3
//   XREF to: 00406bb3 (CONDITIONAL_JUMP)
// 00406b6c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406b76: PUSH EDI
//   Label: LAB_00406b76
// 00406b77: MOV EDI,0x1f3
// 00406b7c: MOV EBP,0x1
// 00406b81: PUSH EBX
// 00406b82: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00406b88: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00406b8e: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00406b93: ADD ESP,0x4
// 00406b96: PUSH ESI
// 00406b97: MOV EAX,dword ptr [EBX + 0x4]
// 00406b9a: PUSH EAX
// 00406b9b: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406ba0: ADD ESP,0x8
// 00406ba3: POP EDI
// 00406ba4: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00406ba4
// 00406ba7: ADD EBX,0x18
// 00406baa: SHL EAX,0x2
// 00406bad: ADD EAX,EBX
// 00406baf: POP EBP
// 00406bb0: POP ESI
// 00406bb1: POP EBX
// 00406bb2: RET
// 00406bb3: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406bb3
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406bbd: JMP 0x00406b76
//   XREF to: 00406b76 (UNCONDITIONAL_JUMP)
// 00406bbf: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406bbf
//   XREF to: 0067939c (READ)
// 00406bc6: JNZ 0x00406bd4
//   XREF to: 00406bd4 (CONDITIONAL_JUMP)
// 00406bc8: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406bd2: JMP 0x00406b76
//   XREF to: 00406b76 (UNCONDITIONAL_JUMP)
// 00406bd4: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406bd4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406bde: JMP 0x00406b76
//   XREF to: 00406b76 (UNCONDITIONAL_JUMP)
