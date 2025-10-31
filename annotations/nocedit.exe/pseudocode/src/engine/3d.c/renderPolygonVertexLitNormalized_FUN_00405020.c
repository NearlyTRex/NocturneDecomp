// Name: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020
// Address: 00405020
// Address Range: [[00405020, 004050b6]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonVertexLitNormalized_FUN_00405020(SMRGLHeaderPrimitive *polygon_info)

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
// 00405020: PUSH EBX
//   Label: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020
// 00405021: PUSH ESI
// 00405022: PUSH EBP
// 00405023: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405027: LEA ESI,[EBX + 0x18]
// 0040502a: LEA EAX,[EBX + 0x8]
// 0040502d: PUSH EAX
// 0040502e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405033: ADD ESP,0x4
// 00405036: TEST EAX,EAX
// 00405038: JZ 0x0040507b
//   XREF to: 0040507b (CONDITIONAL_JUMP)
// 0040503a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405041: JNZ 0x00405096
//   XREF to: 00405096 (CONDITIONAL_JUMP)
// 00405043: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040504a: JNZ 0x0040508a
//   XREF to: 0040508a (CONDITIONAL_JUMP)
// 0040504c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405056: PUSH EDI
//   Label: LAB_00405056
// 00405057: MOV EDI,0x9
// 0040505c: PUSH ESI
// 0040505d: MOV EAX,dword ptr [EBX + 0x4]
// 00405060: MOV EBP,0x2
// 00405065: PUSH EAX
// 00405066: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0040506c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00405072: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405077: ADD ESP,0x8
// 0040507a: POP EDI
// 0040507b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0040507b
// 0040507e: ADD EBX,0x18
// 00405081: SHL EAX,0x2
// 00405084: ADD EAX,EBX
// 00405086: POP EBP
// 00405087: POP ESI
// 00405088: POP EBX
// 00405089: RET
// 0040508a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040508a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405094: JMP 0x00405056
//   XREF to: 00405056 (UNCONDITIONAL_JUMP)
// 00405096: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405096
//   XREF to: 0067939c (READ)
// 0040509d: JNZ 0x004050ab
//   XREF to: 004050ab (CONDITIONAL_JUMP)
// 0040509f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004050a9: JMP 0x00405056
//   XREF to: 00405056 (UNCONDITIONAL_JUMP)
// 004050ab: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004050ab
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004050b5: JMP 0x00405056
//   XREF to: 00405056 (UNCONDITIONAL_JUMP)
