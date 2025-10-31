// Name: engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0
// Address: 00405ec0
// Address Range: [[00405ec0, 00405f53]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonTexturedBasic_FUN_00405ec0(SMRGLHeaderPrimitive *polygon_info)

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
// 00405ec0: PUSH EBX
//   Label: engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0
// 00405ec1: PUSH ESI
// 00405ec2: PUSH EBP
// 00405ec3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405ec7: LEA ESI,[EBX + 0x18]
// 00405eca: LEA EAX,[EBX + 0x8]
// 00405ecd: PUSH EAX
// 00405ece: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405ed3: ADD ESP,0x4
// 00405ed6: TEST EAX,EAX
// 00405ed8: JZ 0x00405f18
//   XREF to: 00405f18 (CONDITIONAL_JUMP)
// 00405eda: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405ee1: JNZ 0x00405f33
//   XREF to: 00405f33 (CONDITIONAL_JUMP)
// 00405ee3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405eea: JNZ 0x00405f27
//   XREF to: 00405f27 (CONDITIONAL_JUMP)
// 00405eec: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405ef6: PUSH EDI
//   Label: LAB_00405ef6
// 00405ef7: MOV EDI,0x1
// 00405efc: PUSH ESI
// 00405efd: MOV EAX,dword ptr [EBX + 0x4]
// 00405f00: XOR EBP,EBP
// 00405f02: PUSH EAX
// 00405f03: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405f09: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405f0f: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405f14: ADD ESP,0x8
// 00405f17: POP EDI
// 00405f18: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405f18
// 00405f1b: ADD EBX,0x18
// 00405f1e: SHL EAX,0x2
// 00405f21: ADD EAX,EBX
// 00405f23: POP EBP
// 00405f24: POP ESI
// 00405f25: POP EBX
// 00405f26: RET
// 00405f27: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405f27
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405f31: JMP 0x00405ef6
//   XREF to: 00405ef6 (UNCONDITIONAL_JUMP)
// 00405f33: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405f33
//   XREF to: 0067939c (READ)
// 00405f3a: JNZ 0x00405f48
//   XREF to: 00405f48 (CONDITIONAL_JUMP)
// 00405f3c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405f46: JMP 0x00405ef6
//   XREF to: 00405ef6 (UNCONDITIONAL_JUMP)
// 00405f48: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405f48
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405f52: JMP 0x00405ef6
//   XREF to: 00405ef6 (UNCONDITIONAL_JUMP)
