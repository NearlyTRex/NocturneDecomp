// Name: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80
// Address: 00405d80
// Address Range: [[00405d80, 00405e16]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00405d80(SMRGLHeaderPrimitive *polygon_info)

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
// 00405d80: PUSH EBX
//   Label: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80
// 00405d81: PUSH ESI
// 00405d82: PUSH EBP
// 00405d83: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405d87: LEA ESI,[EBX + 0x18]
// 00405d8a: LEA EAX,[EBX + 0x8]
// 00405d8d: PUSH EAX
// 00405d8e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405d93: ADD ESP,0x4
// 00405d96: TEST EAX,EAX
// 00405d98: JZ 0x00405ddb
//   XREF to: 00405ddb (CONDITIONAL_JUMP)
// 00405d9a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405da1: JNZ 0x00405df6
//   XREF to: 00405df6 (CONDITIONAL_JUMP)
// 00405da3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405daa: JNZ 0x00405dea
//   XREF to: 00405dea (CONDITIONAL_JUMP)
// 00405dac: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405db6: PUSH EDI
//   Label: LAB_00405db6
// 00405db7: MOV EDI,0x81
// 00405dbc: PUSH ESI
// 00405dbd: MOV EAX,dword ptr [EBX + 0x4]
// 00405dc0: MOV EBP,0x1
// 00405dc5: PUSH EAX
// 00405dc6: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405dcc: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405dd2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405dd7: ADD ESP,0x8
// 00405dda: POP EDI
// 00405ddb: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405ddb
// 00405dde: ADD EBX,0x18
// 00405de1: SHL EAX,0x2
// 00405de4: ADD EAX,EBX
// 00405de6: POP EBP
// 00405de7: POP ESI
// 00405de8: POP EBX
// 00405de9: RET
// 00405dea: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405dea
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405df4: JMP 0x00405db6
//   XREF to: 00405db6 (UNCONDITIONAL_JUMP)
// 00405df6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405df6
//   XREF to: 0067939c (READ)
// 00405dfd: JNZ 0x00405e0b
//   XREF to: 00405e0b (CONDITIONAL_JUMP)
// 00405dff: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405e09: JMP 0x00405db6
//   XREF to: 00405db6 (UNCONDITIONAL_JUMP)
// 00405e0b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405e0b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405e15: JMP 0x00405db6
//   XREF to: 00405db6 (UNCONDITIONAL_JUMP)
