// Name: core_gore.cpp_FUN_004ec470
// Address: 004ec470
// Address Range: [[004ec470, 004ec4f5]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec470()
// Cross-references:
//   core_gore.cpp_FUN_004ed830 (004ed830) at 004ed85a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d83368.base.count
//   undefined4 DAT_02d83380
//   undefined4 DAT_02d83384
//   undefined4 DAT_02d83388
//   undefined4 DAT_02d8338c
// Function calls:
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ec470() */

void core_gore_cpp_FUN_004ec470(void)

{
  DAT_02d83368.base.count = 4;
  _DAT_02d83380 = 0;
  _DAT_02d83384 = 1;
  _DAT_02d83388 = 2;
  _DAT_02d8338c = 3;
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}


// Assembly code:
// 004ec470: PUSH EBX
//   Label: core_gore.cpp_FUN_004ec470
// 004ec471: PUSH ESI
// 004ec472: PUSH EDI
// 004ec473: PUSH EBP
// 004ec474: MOV EDX,0x4
// 004ec479: MOV EBX,0x1
// 004ec47e: MOV ESI,0x2
// 004ec483: MOV EDI,0x3
// 004ec488: MOV EBP,0x80000
// 004ec48d: MOV EAX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004ec492: PUSH 0xffff
// 004ec497: XOR ECX,ECX
// 004ec499: MOV dword ptr [0x02d8336c],EDX
//   XREF to: 02d8336c (WRITE)
// 004ec49f: MOV dword ptr [0x02d83380],ECX
//   XREF to: 02d83380 (WRITE)
// 004ec4a5: MOV dword ptr [0x02d83384],EBX
//   XREF to: 02d83384 (WRITE)
// 004ec4ab: MOV dword ptr [0x02d83388],ESI
//   XREF to: 02d83388 (WRITE)
// 004ec4b1: MOV dword ptr [0x02d8338c],EDI
//   XREF to: 02d8338c (WRITE)
// 004ec4b7: MOV dword ptr [0x0068802c],EBP
//   XREF to: 0068802c (WRITE)
// 004ec4bd: MOV [0x00688030],EAX
//   XREF to: 00688030 (WRITE)
// 004ec4c2: MOV [0x0068805c],EAX
//   XREF to: 0068805c (WRITE)
// 004ec4c7: MOV [0x00688060],EAX
//   XREF to: 00688060 (WRITE)
// 004ec4cc: MOV [0x0068808c],EAX
//   XREF to: 0068808c (WRITE)
// 004ec4d1: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ec4d6: MOV dword ptr [0x00688090],EBP
//   XREF to: 00688090 (WRITE)
// 004ec4dc: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ec4dd: MOV dword ptr [0x006880bc],EBP
//   XREF to: 006880bc (WRITE)
// 004ec4e3: MOV dword ptr [0x006880c0],EBP
//   XREF to: 006880c0 (WRITE)
// 004ec4e9: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004ec4ee: ADD ESP,0x8
// 004ec4f1: POP EBP
// 004ec4f2: POP EDI
// 004ec4f3: POP ESI
// 004ec4f4: POP EBX
// 004ec4f5: RET
