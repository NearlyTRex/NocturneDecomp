// Name: engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
// Address: 00405b50
// Address Range: [[00405b50, 00405cd7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407bc7 [UNCONDITIONAL_CALL]
//   engine_3d.c_flushRenderQueue_FUN_00407a30 (00407a30) at 00407a5a [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   uint g_ProcessedVertexOffset
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   float g_PerspectiveReciprocal
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int *piVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
    if (g_PerspectiveReciprocal == 0.0) {
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
      g_RenderStateFlags = RENDER_TEXTURE_UV_WRAPPED;
    }
    else {
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
      g_RenderStateFlags = RENDER_TEXTURE_ENHANCED;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    piVar4 = g_ProcessedVertexIndices;
    pSVar3 = polygon_info + 1;
    for (iVar2 = 0; iVar1 = (polygon_info->base).count,
        SBORROW4(iVar2,iVar1 * 3) != iVar2 + iVar1 * -3 < 0; iVar2 = iVar2 + 3) {
      *piVar4 = (pSVar3->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].u =
           (float)(pSVar3->base).count;
      piVar4 = piVar4 + 1;
      g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].v =
           (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}


// Assembly code:
// 00405b50: PUSH ESI
//   Label: engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
// 00405b51: PUSH EDI
// 00405b52: PUSH EBP
// 00405b53: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00405b59: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405b5d: LEA ESI,[EDI + 0x18]
// 00405b60: LEA EAX,[EDI + 0x8]
// 00405b63: PUSH EAX
// 00405b64: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405b69: ADD ESP,0x4
// 00405b6c: TEST EAX,EAX
// 00405b6e: JZ 0x00405cb6
//   XREF to: 00405cb6 (CONDITIONAL_JUMP)
// 00405b74: PUSH EBX
// 00405b75: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 00405b7b: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00405b81: TEST EDX,EDX
// 00405b83: JZ 0x00405c40
//   XREF to: 00405c40 (CONDITIONAL_JUMP)
// 00405b89: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405b90: JNZ 0x00405c19
//   XREF to: 00405c19 (CONDITIONAL_JUMP)
// 00405b96: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405b9d: JNZ 0x00405c0d
//   XREF to: 00405c0d (CONDITIONAL_JUMP)
// 00405b9f: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405ba9: MOV EBX,0x1
//   Label: LAB_00405ba9
// 00405bae: MOV ECX,0xcd
// 00405bb3: MOV dword ptr [0x02d052a4],EBX
//   XREF to: 02d052a4 (WRITE)
// 00405bb9: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 00405bbf: MOV EBX,0x772a98
//   Label: LAB_00405bbf
//   XREF to: 00772a98 (PARAM)
// 00405bc4: MOV EAX,ESI
// 00405bc6: XOR ECX,ECX
// 00405bc8: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_00405bc8
// 00405bcb: LEA EDX,[EDX + EDX*0x2]
// 00405bce: MOV dword ptr [0x00772a60],EBP
//   XREF to: 00772a60 (WRITE)
// 00405bd4: CMP ECX,EDX
// 00405bd6: JGE 0x00405ca4
//   XREF to: 00405ca4 (CONDITIONAL_JUMP)
// 00405bdc: MOV EDX,dword ptr [EAX]
// 00405bde: ADD EDX,EBP
// 00405be0: MOV dword ptr [EBX],EDX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 00405be2: MOV EDX,dword ptr [EAX]
// 00405be4: ADD EDX,EBP
// 00405be6: IMUL EDX,EDX,0x30
// 00405be9: MOV ESI,dword ptr [EAX + 0x4]
// 00405bec: MOV dword ptr [EDX + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 00405bf2: MOV EDX,dword ptr [EAX]
// 00405bf4: ADD EDX,EBP
// 00405bf6: IMUL ESI,EDX,0x30
// 00405bf9: ADD EAX,0xc
// 00405bfc: ADD EBX,0x4
//   XREF to: 00772a9c (PARAM)
// 00405bff: MOV EDX,dword ptr [EAX + -0x4]
// 00405c02: ADD ECX,0x3
// 00405c05: MOV dword ptr [ESI + 0x688030],EDX
//   XREF to: 00688030 (DATA)
// 00405c0b: JMP 0x00405bc8
//   XREF to: 00405bc8 (UNCONDITIONAL_JUMP)
// 00405c0d: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405c0d
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405c17: JMP 0x00405ba9
//   XREF to: 00405ba9 (UNCONDITIONAL_JUMP)
// 00405c19: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405c19
//   XREF to: 0067939c (READ)
// 00405c20: JNZ 0x00405c31
//   XREF to: 00405c31 (CONDITIONAL_JUMP)
// 00405c22: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405c2c: JMP 0x00405ba9
//   XREF to: 00405ba9 (UNCONDITIONAL_JUMP)
// 00405c31: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405c31
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405c3b: JMP 0x00405ba9
//   XREF to: 00405ba9 (UNCONDITIONAL_JUMP)
// 00405c40: CMP dword ptr [0x02d05248],0x0
//   Label: LAB_00405c40
//   XREF to: 02d05248 (READ)
// 00405c47: JNZ 0x00405c83
//   XREF to: 00405c83 (CONDITIONAL_JUMP)
// 00405c49: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00405c50: JNZ 0x00405c77
//   XREF to: 00405c77 (CONDITIONAL_JUMP)
// 00405c52: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405c5c: MOV ECX,0x1
//   Label: LAB_00405c5c
// 00405c61: MOV EDX,0xc5
// 00405c66: MOV dword ptr [0x02d052a4],ECX
//   XREF to: 02d052a4 (WRITE)
// 00405c6c: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 00405c72: JMP 0x00405bbf
//   XREF to: 00405bbf (UNCONDITIONAL_JUMP)
// 00405c77: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405c77
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405c81: JMP 0x00405c5c
//   XREF to: 00405c5c (UNCONDITIONAL_JUMP)
// 00405c83: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405c83
//   XREF to: 0067939c (READ)
// 00405c8a: JNZ 0x00405c98
//   XREF to: 00405c98 (CONDITIONAL_JUMP)
// 00405c8c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405c96: JMP 0x00405c5c
//   XREF to: 00405c5c (UNCONDITIONAL_JUMP)
// 00405c98: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405c98
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405ca2: JMP 0x00405c5c
//   XREF to: 00405c5c (UNCONDITIONAL_JUMP)
// 00405ca4: PUSH 0x772a98
//   Label: LAB_00405ca4
//   XREF to: 00772a98 (DATA)
// 00405ca9: MOV ESI,dword ptr [EDI + 0x4]
// 00405cac: PUSH ESI
// 00405cad: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405cb2: ADD ESP,0x8
// 00405cb5: POP EBX
// 00405cb6: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_00405cb6
// 00405cb9: LEA EAX,[EDX*0x4 + 0x0]
// 00405cc0: SUB EAX,EDX
// 00405cc2: LEA EDX,[EAX*0x4 + 0x0]
// 00405cc9: LEA EAX,[EDI + 0x18]
// 00405ccc: MOV EBP,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00405cd2: ADD EAX,EDX
// 00405cd4: POP EBP
// 00405cd5: POP EDI
// 00405cd6: POP ESI
// 00405cd7: RET
