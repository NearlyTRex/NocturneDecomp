// Name: engine_3d.c_flushRenderQueue_FUN_00407a30
// Address: 00407a30
// Address Range: [[00407a30, 00407a99]]
// Convention: __cdecl
// Signature: void engine_3d.c_flushRenderQueue_FUN_00407a30(void)
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   int g_RenderFaceCount
//   SMRGLHeaderPrimitive*[2000] g_RenderFaceArray
//   undefined4 g_RenderFaceArray[1]
//   int g_UseExternalRenderer
// Function calls:
//   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
//   wincore_windll.cpp_drawPolyList_FUN_005b7640

#include "nocturne.h"

void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (g_RenderFaceCount != 0) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_drawPolyList_FUN_005b7640
                (g_RenderVertexBuffer,g_RenderFaceArray,g_RenderFaceCount,0xcd);
      g_RenderFaceCount = 0;
      return;
    }
    iVar3 = 0;
    if (0 < g_RenderFaceCount) {
      iVar2 = 0;
      do {
        puVar1 = (undefined4 *)((int)g_RenderFaceArray + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                  ((SMRGLHeaderPrimitive *)*puVar1);
      } while (iVar3 < g_RenderFaceCount);
    }
    g_RenderFaceCount = 0;
  }
  return;
}


// Assembly code:
// 00407a30: PUSH EBP
//   Label: engine_3d.c_flushRenderQueue_FUN_00407a30
// 00407a31: MOV EDX,dword ptr [0x00820070]
//   XREF to: 00820070 (READ)
// 00407a37: TEST EDX,EDX
// 00407a39: JZ 0x00407a76
//   XREF to: 00407a76 (CONDITIONAL_JUMP)
// 00407a3b: PUSH ESI
// 00407a3c: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00407a43: JNZ 0x00407a78
//   XREF to: 00407a78 (CONDITIONAL_JUMP)
// 00407a45: XOR ESI,ESI
// 00407a47: TEST EDX,EDX
// 00407a49: JLE 0x00407a6e
//   XREF to: 00407a6e (CONDITIONAL_JUMP)
// 00407a4b: PUSH EDI
// 00407a4c: PUSH EBX
// 00407a4d: XOR EBX,EBX
// 00407a4f: MOV EDI,dword ptr [EBX + 0x820074]
//   Label: LAB_00407a4f
//   XREF to: 00820074 (READ)
//   XREF to: 00820078 (READ)
// 00407a55: PUSH EDI
// 00407a56: ADD EBX,0x4
// 00407a59: INC ESI
// 00407a5a: CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
//   XREF to: 00405b50 (UNCONDITIONAL_CALL)
// 00407a5f: MOV EBP,dword ptr [0x00820070]
//   XREF to: 00820070 (READ)
// 00407a65: ADD ESP,0x4
// 00407a68: CMP ESI,EBP
// 00407a6a: JL 0x00407a4f
//   XREF to: 00407a4f (CONDITIONAL_JUMP)
// 00407a6c: POP EBX
// 00407a6d: POP EDI
// 00407a6e: XOR EAX,EAX
//   Label: LAB_00407a6e
// 00407a70: MOV [0x00820070],EAX
//   XREF to: 00820070 (WRITE)
// 00407a75: POP ESI
// 00407a76: POP EBP
//   Label: LAB_00407a76
// 00407a77: RET
// 00407a78: PUSH 0xcd
//   Label: LAB_00407a78
// 00407a7d: PUSH EDX
// 00407a7e: PUSH 0x820074
//   XREF to: 00820074 (DATA)
// 00407a83: PUSH 0x688014
//   XREF to: 00688014 (DATA)
// 00407a88: CALL wincore_windll.cpp_drawPolyList_FUN_005b7640
//   XREF to: 005b7640 (UNCONDITIONAL_CALL)
// 00407a8d: ADD ESP,0x10
// 00407a90: XOR EAX,EAX
// 00407a92: MOV [0x00820070],EAX
//   XREF to: 00820070 (WRITE)
// 00407a97: POP ESI
// 00407a98: POP EBP
// 00407a99: RET
