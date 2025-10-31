// Name: engine_3d.c_setVertexTextureU_FUN_00405270
// Address: 00405270
// Address Range: [[00405270, 004052ad]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_setVertexTextureU_FUN_00405270(SVertexBatch * vertex_batch)
// Globals:
//   undefined4 g_RenderVertexBuffer[0].u

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00405270(SVertexBatch *vertex_batch)

{
  int iVar1;
  CVector3i *pCVar2;
  
  pCVar2 = &vertex_batch->vertex_buffer;
  iVar1 = 0;
  if (0 < vertex_batch->vertex_count) {
    do {
      g_RenderVertexBuffer[vertex_batch->render_queue_index + iVar1].u = (float)(pCVar2->x << 0x10);
      iVar1 = iVar1 + 1;
      pCVar2 = (CVector3i *)&pCVar2->y;
    } while (iVar1 < vertex_batch->vertex_count);
  }
  return (SMRGLHeaderExtended *)(&(vertex_batch->vertex_buffer).x + vertex_batch->vertex_count);
}


// Assembly code:
// 00405270: PUSH EBX
//   Label: engine_3d.c_setVertexTextureU_FUN_00405270
// 00405271: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00405275: LEA EDX,[ECX + 0xc]
// 00405278: MOV EBX,dword ptr [ECX + 0x8]
// 0040527b: XOR EAX,EAX
// 0040527d: TEST EBX,EBX
// 0040527f: JLE 0x004052a1
//   XREF to: 004052a1 (CONDITIONAL_JUMP)
// 00405281: PUSH ESI
// 00405282: MOV EBX,dword ptr [ECX + 0x4]
//   Label: LAB_00405282
// 00405285: ADD EBX,EAX
// 00405287: IMUL EBX,EBX,0x30
// 0040528a: MOV ESI,dword ptr [EDX]
// 0040528c: SHL ESI,0x10
// 0040528f: MOV dword ptr [EBX + 0x68802c],ESI
//   XREF to: 0068802c (DATA)
// 00405295: INC EAX
// 00405296: MOV ESI,dword ptr [ECX + 0x8]
// 00405299: ADD EDX,0x4
// 0040529c: CMP EAX,ESI
// 0040529e: JL 0x00405282
//   XREF to: 00405282 (CONDITIONAL_JUMP)
// 004052a0: POP ESI
// 004052a1: MOV EDX,dword ptr [ECX + 0x8]
//   Label: LAB_004052a1
// 004052a4: LEA EAX,[ECX + 0xc]
// 004052a7: SHL EDX,0x2
// 004052aa: ADD EAX,EDX
// 004052ac: POP EBX
// 004052ad: RET
