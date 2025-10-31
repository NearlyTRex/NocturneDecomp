// Name: engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20
// Address: 00405e20
// Address Range: [[00405e20, 00405eb6]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_DEPTH_TEXTURED_ADV;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405e20: PUSH EBX
//   Label: engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20
// 00405e21: PUSH ESI
// 00405e22: PUSH EBP
// 00405e23: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405e27: LEA ESI,[EBX + 0x18]
// 00405e2a: LEA EAX,[EBX + 0x8]
// 00405e2d: PUSH EAX
// 00405e2e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405e33: ADD ESP,0x4
// 00405e36: TEST EAX,EAX
// 00405e38: JZ 0x00405e7b
//   XREF to: 00405e7b (CONDITIONAL_JUMP)
// 00405e3a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405e41: JNZ 0x00405e96
//   XREF to: 00405e96 (CONDITIONAL_JUMP)
// 00405e43: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405e4a: JNZ 0x00405e8a
//   XREF to: 00405e8a (CONDITIONAL_JUMP)
// 00405e4c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405e56: PUSH EDI
//   Label: LAB_00405e56
// 00405e57: MOV EDI,0x85
// 00405e5c: PUSH ESI
// 00405e5d: MOV EAX,dword ptr [EBX + 0x4]
// 00405e60: MOV EBP,0x1
// 00405e65: PUSH EAX
// 00405e66: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405e6c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405e72: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405e77: ADD ESP,0x8
// 00405e7a: POP EDI
// 00405e7b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405e7b
// 00405e7e: ADD EBX,0x18
// 00405e81: SHL EAX,0x2
// 00405e84: ADD EAX,EBX
// 00405e86: POP EBP
// 00405e87: POP ESI
// 00405e88: POP EBX
// 00405e89: RET
// 00405e8a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405e8a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405e94: JMP 0x00405e56
//   XREF to: 00405e56 (UNCONDITIONAL_JUMP)
// 00405e96: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405e96
//   XREF to: 0067939c (READ)
// 00405e9d: JNZ 0x00405eab
//   XREF to: 00405eab (CONDITIONAL_JUMP)
// 00405e9f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405ea9: JMP 0x00405e56
//   XREF to: 00405e56 (UNCONDITIONAL_JUMP)
// 00405eab: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405eab
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405eb5: JMP 0x00405e56
//   XREF to: 00405e56 (UNCONDITIONAL_JUMP)
