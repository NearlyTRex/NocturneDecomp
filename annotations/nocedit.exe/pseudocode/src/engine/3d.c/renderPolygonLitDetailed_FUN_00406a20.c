// Name: engine_3d.c_renderPolygonLitDetailed_FUN_00406a20
// Address: 00406a20
// Address Range: [[00406a20, 00406b37]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonLitDetailed_FUN_00406a20(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
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
engine_3d_c_renderPolygonLitDetailed_FUN_00406a20(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_LIT_DETAILED;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags = g_RenderStateFlags | RENDER_ALPHA_CHANNEL;
    }
    vertex_count = 0;
    iVar4 = 0;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    pSVar3 = polygon_info + 1;
    for (iVar2 = 0; iVar1 = (polygon_info->base).count,
        SBORROW4(iVar2,iVar1 * 3) != iVar2 + iVar1 * -3 < 0; iVar2 = iVar2 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_ProcessedVertexIndices + iVar4) = iVar1;
      g_RenderVertexBuffer[iVar1].u = (float)(pSVar3->base).count;
      iVar4 = iVar4 + 4;
      vertex_count = vertex_count + 1;
      g_RenderVertexBuffer[(pSVar3->base).type].v = (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}


// Assembly code:
// 00406a20: PUSH ESI
//   Label: engine_3d.c_renderPolygonLitDetailed_FUN_00406a20
// 00406a21: PUSH EBP
// 00406a22: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00406a26: LEA ESI,[EBP + 0x18]
// 00406a29: LEA EAX,[EBP + 0x8]
// 00406a2c: PUSH EAX
// 00406a2d: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406a32: ADD ESP,0x4
// 00406a35: TEST EAX,EAX
// 00406a37: JZ 0x00406b1d
//   XREF to: 00406b1d (CONDITIONAL_JUMP)
// 00406a3d: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406a44: JNZ 0x00406ada
//   XREF to: 00406ada (CONDITIONAL_JUMP)
// 00406a4a: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00406a51: JNZ 0x00406ace
//   XREF to: 00406ace (CONDITIONAL_JUMP)
// 00406a57: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406a61: PUSH EDI
//   Label: LAB_00406a61
// 00406a62: PUSH EBX
// 00406a63: MOV EBX,0x13
// 00406a68: PUSH EBP
// 00406a69: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 00406a6f: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00406a74: MOV EDI,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 00406a7a: ADD ESP,0x4
// 00406a7d: CMP EDI,0xff
// 00406a83: JL 0x00406b01
//   XREF to: 00406b01 (CONDITIONAL_JUMP)
// 00406a89: XOR EAX,EAX
//   Label: LAB_00406a89
// 00406a8b: XOR EBX,EBX
// 00406a8d: XOR ECX,ECX
// 00406a8f: XOR EDX,EDX
// 00406a91: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 00406a96: MOV EAX,ESI
// 00406a98: MOV ESI,dword ptr [EBP + 0x4]
//   Label: LAB_00406a98
// 00406a9b: LEA ESI,[ESI + ESI*0x2]
// 00406a9e: CMP ECX,ESI
// 00406aa0: JGE 0x00406b0d
//   XREF to: 00406b0d (CONDITIONAL_JUMP)
// 00406aa2: MOV ESI,dword ptr [EAX]
// 00406aa4: MOV dword ptr [EDX + 0x772a98],ESI
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 00406aaa: IMUL EDI,ESI,0x30
// 00406aad: MOV ESI,dword ptr [EAX + 0x4]
// 00406ab0: MOV dword ptr [EDI + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 00406ab6: IMUL EDI,dword ptr [EAX],0x30
// 00406ab9: ADD EAX,0xc
// 00406abc: ADD EDX,0x4
// 00406abf: INC EBX
// 00406ac0: MOV ESI,dword ptr [EAX + -0x4]
// 00406ac3: ADD ECX,0x3
// 00406ac6: MOV dword ptr [EDI + 0x688030],ESI
//   XREF to: 00688030 (DATA)
// 00406acc: JMP 0x00406a98
//   XREF to: 00406a98 (UNCONDITIONAL_JUMP)
// 00406ace: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406ace
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406ad8: JMP 0x00406a61
//   XREF to: 00406a61 (UNCONDITIONAL_JUMP)
// 00406ada: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406ada
//   XREF to: 0067939c (READ)
// 00406ae1: JNZ 0x00406af2
//   XREF to: 00406af2 (CONDITIONAL_JUMP)
// 00406ae3: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406aed: JMP 0x00406a61
//   XREF to: 00406a61 (UNCONDITIONAL_JUMP)
// 00406af2: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406af2
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406afc: JMP 0x00406a61
//   XREF to: 00406a61 (UNCONDITIONAL_JUMP)
// 00406b01: OR byte ptr [0x02d052a0],0x20
//   Label: LAB_00406b01
//   XREF to: 02d052a0 (READ_WRITE)
// 00406b08: JMP 0x00406a89
//   XREF to: 00406a89 (UNCONDITIONAL_JUMP)
// 00406b0d: PUSH 0x772a98
//   Label: LAB_00406b0d
//   XREF to: 00772a98 (DATA)
// 00406b12: PUSH EBX
// 00406b13: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406b18: ADD ESP,0x8
// 00406b1b: POP EBX
// 00406b1c: POP EDI
// 00406b1d: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_00406b1d
// 00406b20: LEA EAX,[EDX*0x4 + 0x0]
// 00406b27: SUB EAX,EDX
// 00406b29: LEA EDX,[EAX*0x4 + 0x0]
// 00406b30: LEA EAX,[EBP + 0x18]
// 00406b33: ADD EAX,EDX
// 00406b35: POP EBP
// 00406b36: POP ESI
// 00406b37: RET
