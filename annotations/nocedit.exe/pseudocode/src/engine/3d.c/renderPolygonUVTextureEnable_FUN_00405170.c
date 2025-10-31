// Name: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170
// Address: 00405170
// Address Range: [[00405170, 00405263]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonUVTextureEnable_FUN_00405170(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlag2 = PREPROCESS_NONE;
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
// 00405170: PUSH ESI
//   Label: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170
// 00405171: PUSH EBP
// 00405172: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00405176: LEA ESI,[EBP + 0x18]
// 00405179: LEA EAX,[EBP + 0x8]
// 0040517c: PUSH EAX
// 0040517d: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405182: ADD ESP,0x4
// 00405185: TEST EAX,EAX
// 00405187: JZ 0x00405249
//   XREF to: 00405249 (CONDITIONAL_JUMP)
// 0040518d: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405194: JNZ 0x00405215
//   XREF to: 00405215 (CONDITIONAL_JUMP)
// 0040519a: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004051a1: JNZ 0x00405209
//   XREF to: 00405209 (CONDITIONAL_JUMP)
// 004051a3: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004051ad: PUSH EDI
//   Label: LAB_004051ad
// 004051ae: PUSH EBX
// 004051af: MOV EBX,0x1
// 004051b4: PUSH EBP
// 004051b5: XOR EDI,EDI
// 004051b7: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 004051bd: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 004051c3: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 004051c8: ADD ESP,0x4
// 004051cb: MOV EAX,ESI
// 004051cd: XOR EBX,EBX
// 004051cf: XOR EDX,EDX
// 004051d1: XOR ECX,ECX
// 004051d3: MOV ESI,dword ptr [EBP + 0x4]
//   Label: LAB_004051d3
// 004051d6: LEA ESI,[ESI + ESI*0x2]
// 004051d9: CMP EDX,ESI
// 004051db: JGE 0x00405239
//   XREF to: 00405239 (CONDITIONAL_JUMP)
// 004051dd: MOV ESI,dword ptr [EAX]
// 004051df: MOV dword ptr [ECX + 0x772a98],ESI
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 004051e5: IMUL EDI,ESI,0x30
// 004051e8: MOV ESI,dword ptr [EAX + 0x4]
// 004051eb: MOV dword ptr [EDI + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 004051f1: IMUL EDI,dword ptr [EAX],0x30
// 004051f4: ADD EAX,0xc
// 004051f7: ADD ECX,0x4
// 004051fa: INC EBX
// 004051fb: MOV ESI,dword ptr [EAX + -0x4]
// 004051fe: ADD EDX,0x3
// 00405201: MOV dword ptr [EDI + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 00405207: JMP 0x004051d3
//   XREF to: 004051d3 (UNCONDITIONAL_JUMP)
// 00405209: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405209
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405213: JMP 0x004051ad
//   XREF to: 004051ad (UNCONDITIONAL_JUMP)
// 00405215: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405215
//   XREF to: 0067939c (READ)
// 0040521c: JNZ 0x0040522a
//   XREF to: 0040522a (CONDITIONAL_JUMP)
// 0040521e: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405228: JMP 0x004051ad
//   XREF to: 004051ad (UNCONDITIONAL_JUMP)
// 0040522a: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040522a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405234: JMP 0x004051ad
//   XREF to: 004051ad (UNCONDITIONAL_JUMP)
// 00405239: PUSH 0x772a98
//   Label: LAB_00405239
//   XREF to: 00772a98 (DATA)
// 0040523e: PUSH EBX
// 0040523f: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405244: ADD ESP,0x8
// 00405247: POP EBX
// 00405248: POP EDI
// 00405249: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_00405249
// 0040524c: LEA EAX,[EDX*0x4 + 0x0]
// 00405253: SUB EAX,EDX
// 00405255: LEA EDX,[EAX*0x4 + 0x0]
// 0040525c: LEA EAX,[EBP + 0x18]
// 0040525f: ADD EAX,EDX
// 00405261: POP EBP
// 00405262: POP ESI
// 00405263: RET
