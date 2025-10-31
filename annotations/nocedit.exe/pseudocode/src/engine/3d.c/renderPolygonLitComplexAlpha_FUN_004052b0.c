// Name: engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0
// Address: 004052b0
// Address Range: [[004052b0, 00405343]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonLitComplexAlpha_FUN_004052b0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_LIT_COMPLEX;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004052b0: PUSH EBX
//   Label: engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0
// 004052b1: PUSH ESI
// 004052b2: PUSH EBP
// 004052b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004052b7: LEA ESI,[EBX + 0x18]
// 004052ba: LEA EAX,[EBX + 0x8]
// 004052bd: PUSH EAX
// 004052be: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004052c3: ADD ESP,0x4
// 004052c6: TEST EAX,EAX
// 004052c8: JZ 0x00405308
//   XREF to: 00405308 (CONDITIONAL_JUMP)
// 004052ca: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004052d1: JNZ 0x00405323
//   XREF to: 00405323 (CONDITIONAL_JUMP)
// 004052d3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004052da: JNZ 0x00405317
//   XREF to: 00405317 (CONDITIONAL_JUMP)
// 004052dc: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004052e6: PUSH EDI
//   Label: LAB_004052e6
// 004052e7: MOV EDI,0x23
// 004052ec: PUSH ESI
// 004052ed: MOV EAX,dword ptr [EBX + 0x4]
// 004052f0: XOR EBP,EBP
// 004052f2: PUSH EAX
// 004052f3: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004052f9: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 004052ff: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405304: ADD ESP,0x8
// 00405307: POP EDI
// 00405308: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405308
// 0040530b: ADD EBX,0x18
// 0040530e: SHL EAX,0x2
// 00405311: ADD EAX,EBX
// 00405313: POP EBP
// 00405314: POP ESI
// 00405315: POP EBX
// 00405316: RET
// 00405317: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405317
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405321: JMP 0x004052e6
//   XREF to: 004052e6 (UNCONDITIONAL_JUMP)
// 00405323: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405323
//   XREF to: 0067939c (READ)
// 0040532a: JNZ 0x00405338
//   XREF to: 00405338 (CONDITIONAL_JUMP)
// 0040532c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405336: JMP 0x004052e6
//   XREF to: 004052e6 (UNCONDITIONAL_JUMP)
// 00405338: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405338
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405342: JMP 0x004052e6
//   XREF to: 004052e6 (UNCONDITIONAL_JUMP)
