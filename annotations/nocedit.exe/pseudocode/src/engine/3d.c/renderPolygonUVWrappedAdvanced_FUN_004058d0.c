// Name: engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0
// Address: 004058d0
// Address Range: [[004058d0, 0040595f]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonUVWrappedAdvanced_FUN_004058d0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_UV_WRAP_U;
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004058d0: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0
// 004058d1: PUSH ESI
// 004058d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004058d6: LEA ESI,[EBX + 0x18]
// 004058d9: LEA EAX,[EBX + 0x8]
// 004058dc: PUSH EAX
// 004058dd: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004058e2: ADD ESP,0x4
// 004058e5: TEST EAX,EAX
// 004058e7: JZ 0x00405925
//   XREF to: 00405925 (CONDITIONAL_JUMP)
// 004058e9: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004058f0: JNZ 0x0040593f
//   XREF to: 0040593f (CONDITIONAL_JUMP)
// 004058f2: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004058f9: JNZ 0x00405933
//   XREF to: 00405933 (CONDITIONAL_JUMP)
// 004058fb: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405905: PUSH EDI
//   Label: LAB_00405905
// 00405906: PUSH ESI
// 00405907: MOV EAX,dword ptr [EBX + 0x4]
// 0040590a: MOV EDI,0x5
// 0040590f: PUSH EAX
// 00405910: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405916: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0040591c: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405921: ADD ESP,0x8
// 00405924: POP EDI
// 00405925: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405925
// 00405928: ADD EBX,0x18
// 0040592b: SHL EAX,0x2
// 0040592e: ADD EAX,EBX
// 00405930: POP ESI
// 00405931: POP EBX
// 00405932: RET
// 00405933: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405933
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040593d: JMP 0x00405905
//   XREF to: 00405905 (UNCONDITIONAL_JUMP)
// 0040593f: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040593f
//   XREF to: 0067939c (READ)
// 00405946: JNZ 0x00405954
//   XREF to: 00405954 (CONDITIONAL_JUMP)
// 00405948: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405952: JMP 0x00405905
//   XREF to: 00405905 (UNCONDITIONAL_JUMP)
// 00405954: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405954
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040595e: JMP 0x00405905
//   XREF to: 00405905 (UNCONDITIONAL_JUMP)
