// Name: engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20
// Address: 00403f20
// Address Range: [[00403f20, 00404016]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTextureNormalized_FUN_00403f20(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
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
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    vertex_count = 0;
    iVar2 = 0;
    pSVar3 = polygon_info + 1;
    for (iVar4 = 0; iVar1 = (polygon_info->base).count,
        SBORROW4(iVar4,iVar1 * 3) != iVar4 + iVar1 * -3 < 0; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = iVar1;
      g_RenderVertexBuffer[iVar1].u = (float)(pSVar3->base).count;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      g_RenderVertexBuffer[(pSVar3->base).type].v = (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}


// Assembly code:
// 00403f20: PUSH ESI
//   Label: engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20
// 00403f21: PUSH EBP
// 00403f22: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00403f26: LEA ESI,[EBP + 0x18]
// 00403f29: LEA EAX,[EBP + 0x8]
// 00403f2c: PUSH EAX
// 00403f2d: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00403f32: ADD ESP,0x4
// 00403f35: TEST EAX,EAX
// 00403f37: JZ 0x00403ffc
//   XREF to: 00403ffc (CONDITIONAL_JUMP)
// 00403f3d: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00403f44: JNZ 0x00403fc8
//   XREF to: 00403fc8 (CONDITIONAL_JUMP)
// 00403f4a: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00403f51: JNZ 0x00403fbc
//   XREF to: 00403fbc (CONDITIONAL_JUMP)
// 00403f53: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00403f5d: PUSH EDI
//   Label: LAB_00403f5d
// 00403f5e: PUSH EBX
// 00403f5f: MOV EBX,0x1
// 00403f64: MOV EDI,0x2
// 00403f69: PUSH EBP
// 00403f6a: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 00403f70: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 00403f76: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00403f7b: ADD ESP,0x4
// 00403f7e: MOV EAX,ESI
// 00403f80: XOR EBX,EBX
// 00403f82: XOR EDX,EDX
// 00403f84: XOR ECX,ECX
// 00403f86: MOV ESI,dword ptr [EBP + 0x4]
//   Label: LAB_00403f86
// 00403f89: LEA ESI,[ESI + ESI*0x2]
// 00403f8c: CMP EDX,ESI
// 00403f8e: JGE 0x00403fec
//   XREF to: 00403fec (CONDITIONAL_JUMP)
// 00403f90: MOV ESI,dword ptr [EAX]
// 00403f92: MOV dword ptr [ECX + 0x772a98],ESI
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 00403f98: IMUL EDI,ESI,0x30
// 00403f9b: MOV ESI,dword ptr [EAX + 0x4]
// 00403f9e: MOV dword ptr [EDI + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 00403fa4: IMUL EDI,dword ptr [EAX],0x30
// 00403fa7: ADD EAX,0xc
// 00403faa: ADD ECX,0x4
// 00403fad: INC EBX
// 00403fae: MOV ESI,dword ptr [EAX + -0x4]
// 00403fb1: ADD EDX,0x3
// 00403fb4: MOV dword ptr [EDI + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 00403fba: JMP 0x00403f86
//   XREF to: 00403f86 (UNCONDITIONAL_JUMP)
// 00403fbc: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00403fbc
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00403fc6: JMP 0x00403f5d
//   XREF to: 00403f5d (UNCONDITIONAL_JUMP)
// 00403fc8: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00403fc8
//   XREF to: 0067939c (READ)
// 00403fcf: JNZ 0x00403fdd
//   XREF to: 00403fdd (CONDITIONAL_JUMP)
// 00403fd1: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00403fdb: JMP 0x00403f5d
//   XREF to: 00403f5d (UNCONDITIONAL_JUMP)
// 00403fdd: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00403fdd
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00403fe7: JMP 0x00403f5d
//   XREF to: 00403f5d (UNCONDITIONAL_JUMP)
// 00403fec: PUSH 0x772a98
//   Label: LAB_00403fec
//   XREF to: 00772a98 (DATA)
// 00403ff1: PUSH EBX
// 00403ff2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00403ff7: ADD ESP,0x8
// 00403ffa: POP EBX
// 00403ffb: POP EDI
// 00403ffc: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_00403ffc
// 00403fff: LEA EAX,[EDX*0x4 + 0x0]
// 00404006: SUB EAX,EDX
// 00404008: LEA EDX,[EAX*0x4 + 0x0]
// 0040400f: LEA EAX,[EBP + 0x18]
// 00404012: ADD EAX,EDX
// 00404014: POP EBP
// 00404015: POP ESI
// 00404016: RET
