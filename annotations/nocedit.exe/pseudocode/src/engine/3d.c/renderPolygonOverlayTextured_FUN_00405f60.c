// Name: engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60
// Address: 00405f60
// Address Range: [[00405f60, 00405ff3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonOverlayTextured_FUN_00405f60(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405f60: PUSH EBX
//   Label: engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60
// 00405f61: PUSH ESI
// 00405f62: PUSH EBP
// 00405f63: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405f67: LEA ESI,[EBX + 0x18]
// 00405f6a: LEA EAX,[EBX + 0x8]
// 00405f6d: PUSH EAX
// 00405f6e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405f73: ADD ESP,0x4
// 00405f76: TEST EAX,EAX
// 00405f78: JZ 0x00405fb8
//   XREF to: 00405fb8 (CONDITIONAL_JUMP)
// 00405f7a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405f81: JNZ 0x00405fd3
//   XREF to: 00405fd3 (CONDITIONAL_JUMP)
// 00405f83: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405f8a: JNZ 0x00405fc7
//   XREF to: 00405fc7 (CONDITIONAL_JUMP)
// 00405f8c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405f96: PUSH EDI
//   Label: LAB_00405f96
// 00405f97: MOV EDI,0x1
// 00405f9c: PUSH ESI
// 00405f9d: MOV EAX,dword ptr [EBX + 0x4]
// 00405fa0: XOR EBP,EBP
// 00405fa2: PUSH EAX
// 00405fa3: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405fa9: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405faf: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405fb4: ADD ESP,0x8
// 00405fb7: POP EDI
// 00405fb8: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405fb8
// 00405fbb: ADD EBX,0x18
// 00405fbe: SHL EAX,0x2
// 00405fc1: ADD EAX,EBX
// 00405fc3: POP EBP
// 00405fc4: POP ESI
// 00405fc5: POP EBX
// 00405fc6: RET
// 00405fc7: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405fc7
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405fd1: JMP 0x00405f96
//   XREF to: 00405f96 (UNCONDITIONAL_JUMP)
// 00405fd3: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405fd3
//   XREF to: 0067939c (READ)
// 00405fda: JNZ 0x00405fe8
//   XREF to: 00405fe8 (CONDITIONAL_JUMP)
// 00405fdc: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405fe6: JMP 0x00405f96
//   XREF to: 00405f96 (UNCONDITIONAL_JUMP)
// 00405fe8: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405fe8
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405ff2: JMP 0x00405f96
//   XREF to: 00405f96 (UNCONDITIONAL_JUMP)
