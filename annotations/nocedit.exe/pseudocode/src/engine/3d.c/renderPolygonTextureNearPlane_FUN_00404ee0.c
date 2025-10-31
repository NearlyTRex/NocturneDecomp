// Name: engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0
// Address: 00404ee0
// Address Range: [[00404ee0, 00404f76]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0(SMRGLHeaderPrimitive * polygon_info)
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

void * __cdecl
engine_3d_c_renderPolygonTextureNearPlane_FUN_00404ee0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return &polygon_info[1].base.type + (polygon_info->base).count;
}


// Assembly code:
// 00404ee0: PUSH EBX
//   Label: engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0
// 00404ee1: PUSH ESI
// 00404ee2: PUSH EBP
// 00404ee3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404ee7: LEA ESI,[EBX + 0x18]
// 00404eea: LEA EAX,[EBX + 0x8]
// 00404eed: PUSH EAX
// 00404eee: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404ef3: ADD ESP,0x4
// 00404ef6: TEST EAX,EAX
// 00404ef8: JZ 0x00404f3b
//   XREF to: 00404f3b (CONDITIONAL_JUMP)
// 00404efa: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404f01: JNZ 0x00404f56
//   XREF to: 00404f56 (CONDITIONAL_JUMP)
// 00404f03: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404f0a: JNZ 0x00404f4a
//   XREF to: 00404f4a (CONDITIONAL_JUMP)
// 00404f0c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404f16: PUSH EDI
//   Label: LAB_00404f16
// 00404f17: MOV EDI,0x1
// 00404f1c: PUSH ESI
// 00404f1d: MOV EAX,dword ptr [EBX + 0x4]
// 00404f20: MOV EBP,0x3
// 00404f25: PUSH EAX
// 00404f26: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404f2c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00404f32: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404f37: ADD ESP,0x8
// 00404f3a: POP EDI
// 00404f3b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404f3b
// 00404f3e: ADD EBX,0x18
// 00404f41: SHL EAX,0x2
// 00404f44: ADD EAX,EBX
// 00404f46: POP EBP
// 00404f47: POP ESI
// 00404f48: POP EBX
// 00404f49: RET
// 00404f4a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404f4a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404f54: JMP 0x00404f16
//   XREF to: 00404f16 (UNCONDITIONAL_JUMP)
// 00404f56: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404f56
//   XREF to: 0067939c (READ)
// 00404f5d: JNZ 0x00404f6b
//   XREF to: 00404f6b (CONDITIONAL_JUMP)
// 00404f5f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404f69: JMP 0x00404f16
//   XREF to: 00404f16 (UNCONDITIONAL_JUMP)
// 00404f6b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404f6b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404f75: JMP 0x00404f16
//   XREF to: 00404f16 (UNCONDITIONAL_JUMP)
