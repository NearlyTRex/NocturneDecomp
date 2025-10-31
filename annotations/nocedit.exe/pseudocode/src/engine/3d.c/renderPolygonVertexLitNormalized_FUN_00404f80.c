// Name: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80
// Address: 00404f80
// Address Range: [[00404f80, 00405016]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonVertexLitNormalized_FUN_00404f80(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return &polygon_info[1].base.type + (polygon_info->base).count;
}


// Assembly code:
// 00404f80: PUSH EBX
//   Label: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80
// 00404f81: PUSH ESI
// 00404f82: PUSH EBP
// 00404f83: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404f87: LEA ESI,[EBX + 0x18]
// 00404f8a: LEA EAX,[EBX + 0x8]
// 00404f8d: PUSH EAX
// 00404f8e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404f93: ADD ESP,0x4
// 00404f96: TEST EAX,EAX
// 00404f98: JZ 0x00404fdb
//   XREF to: 00404fdb (CONDITIONAL_JUMP)
// 00404f9a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404fa1: JNZ 0x00404ff6
//   XREF to: 00404ff6 (CONDITIONAL_JUMP)
// 00404fa3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404faa: JNZ 0x00404fea
//   XREF to: 00404fea (CONDITIONAL_JUMP)
// 00404fac: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404fb6: PUSH EDI
//   Label: LAB_00404fb6
// 00404fb7: MOV EDI,0x9
// 00404fbc: PUSH ESI
// 00404fbd: MOV EAX,dword ptr [EBX + 0x4]
// 00404fc0: MOV EBP,0x2
// 00404fc5: PUSH EAX
// 00404fc6: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404fcc: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00404fd2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404fd7: ADD ESP,0x8
// 00404fda: POP EDI
// 00404fdb: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404fdb
// 00404fde: ADD EBX,0x18
// 00404fe1: SHL EAX,0x2
// 00404fe4: ADD EAX,EBX
// 00404fe6: POP EBP
// 00404fe7: POP ESI
// 00404fe8: POP EBX
// 00404fe9: RET
// 00404fea: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404fea
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404ff4: JMP 0x00404fb6
//   XREF to: 00404fb6 (UNCONDITIONAL_JUMP)
// 00404ff6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404ff6
//   XREF to: 0067939c (READ)
// 00404ffd: JNZ 0x0040500b
//   XREF to: 0040500b (CONDITIONAL_JUMP)
// 00404fff: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405009: JMP 0x00404fb6
//   XREF to: 00404fb6 (UNCONDITIONAL_JUMP)
// 0040500b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040500b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405015: JMP 0x00404fb6
//   XREF to: 00404fb6 (UNCONDITIONAL_JUMP)
