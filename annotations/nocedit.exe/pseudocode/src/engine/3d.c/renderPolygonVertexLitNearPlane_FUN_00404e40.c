// Name: engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40
// Address: 00404e40
// Address Range: [[00404e40, 00404ed6]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonVertexLitNearPlane_FUN_00404e40(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_ADVANCED_TEXTURED;
    g_RenderStateFlag2 = PREPROCESS_NEAR_PLANE_CORRECT;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return &polygon_info[1].base.type + (polygon_info->base).count;
}


// Assembly code:
// 00404e40: PUSH EBX
//   Label: engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40
// 00404e41: PUSH ESI
// 00404e42: PUSH EBP
// 00404e43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404e47: LEA ESI,[EBX + 0x18]
// 00404e4a: LEA EAX,[EBX + 0x8]
// 00404e4d: PUSH EAX
// 00404e4e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404e53: ADD ESP,0x4
// 00404e56: TEST EAX,EAX
// 00404e58: JZ 0x00404e9b
//   XREF to: 00404e9b (CONDITIONAL_JUMP)
// 00404e5a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404e61: JNZ 0x00404eb6
//   XREF to: 00404eb6 (CONDITIONAL_JUMP)
// 00404e63: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404e6a: JNZ 0x00404eaa
//   XREF to: 00404eaa (CONDITIONAL_JUMP)
// 00404e6c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404e76: PUSH EDI
//   Label: LAB_00404e76
// 00404e77: MOV EDI,0x9
// 00404e7c: PUSH ESI
// 00404e7d: MOV EAX,dword ptr [EBX + 0x4]
// 00404e80: MOV EBP,0x3
// 00404e85: PUSH EAX
// 00404e86: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404e8c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00404e92: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404e97: ADD ESP,0x8
// 00404e9a: POP EDI
// 00404e9b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404e9b
// 00404e9e: ADD EBX,0x18
// 00404ea1: SHL EAX,0x2
// 00404ea4: ADD EAX,EBX
// 00404ea6: POP EBP
// 00404ea7: POP ESI
// 00404ea8: POP EBX
// 00404ea9: RET
// 00404eaa: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404eaa
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404eb4: JMP 0x00404e76
//   XREF to: 00404e76 (UNCONDITIONAL_JUMP)
// 00404eb6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404eb6
//   XREF to: 0067939c (READ)
// 00404ebd: JNZ 0x00404ecb
//   XREF to: 00404ecb (CONDITIONAL_JUMP)
// 00404ebf: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404ec9: JMP 0x00404e76
//   XREF to: 00404e76 (UNCONDITIONAL_JUMP)
// 00404ecb: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404ecb
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404ed5: JMP 0x00404e76
//   XREF to: 00404e76 (UNCONDITIONAL_JUMP)
