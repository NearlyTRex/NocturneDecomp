// Name: core_gore.cpp_FUN_004ecc40
// Address: 004ecc40
// Address Range: [[004ecc40, 004eccdf]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecc40()
// Cross-references:
//   core_gore.cpp_CGore_process_FUN_004ed9e0 (004ed9e0) at 004eda45 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed830 (004ed830) at 004ed8a5 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d83368.base.count
//   undefined4 DAT_02d83368.surface_normal.A
//   undefined4 DAT_02d83368.surface_normal.B
//   undefined4 DAT_02d83368.surface_normal.C
//   undefined4 DAT_02d83368.surface_normal.D
//   undefined4 DAT_02d83380
//   undefined4 DAT_02d83384
//   undefined4 DAT_02d83388
//   undefined4 DAT_02d8338c
// Function calls:
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ecc40() */

void core_gore_cpp_FUN_004ecc40(void)

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
  DAT_02d83368.surface_normal.A = 0;
  DAT_02d83368.surface_normal.C = 0;
  DAT_02d83368.surface_normal.D = 0;
  DAT_02d83368.surface_normal.B = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}


// Assembly code:
// 004ecc40: PUSH EBX
//   Label: core_gore.cpp_FUN_004ecc40
// 004ecc41: PUSH ESI
// 004ecc42: PUSH EDI
// 004ecc43: PUSH EBP
// 004ecc44: MOV EDX,0x4
// 004ecc49: MOV EBX,0x1
// 004ecc4e: MOV ESI,0x2
// 004ecc53: MOV EDI,0x3
// 004ecc58: MOV EBP,0x80000
// 004ecc5d: MOV EAX,0xf80000
//   XREF to: 00f80000 (PARAM)
// 004ecc62: XOR ECX,ECX
// 004ecc64: MOV dword ptr [0x02d8336c],EDX
//   XREF to: 02d8336c (WRITE)
// 004ecc6a: MOV dword ptr [0x02d83380],ECX
//   XREF to: 02d83380 (WRITE)
// 004ecc70: MOV dword ptr [0x02d83384],EBX
//   XREF to: 02d83384 (WRITE)
// 004ecc76: MOV dword ptr [0x02d83388],ESI
//   XREF to: 02d83388 (WRITE)
// 004ecc7c: MOV dword ptr [0x02d8338c],EDI
//   XREF to: 02d8338c (WRITE)
// 004ecc82: MOV dword ptr [0x0068802c],EBP
//   XREF to: 0068802c (WRITE)
// 004ecc88: MOV [0x00688030],EAX
//   XREF to: 00688030 (WRITE)
// 004ecc8d: MOV [0x0068805c],EAX
//   XREF to: 0068805c (WRITE)
// 004ecc92: MOV [0x00688060],EAX
//   XREF to: 00688060 (WRITE)
// 004ecc97: MOV [0x0068808c],EAX
//   XREF to: 0068808c (WRITE)
// 004ecc9c: MOV dword ptr [0x00688090],EBP
//   XREF to: 00688090 (WRITE)
// 004ecca2: MOV dword ptr [0x006880bc],EBP
//   XREF to: 006880bc (WRITE)
// 004ecca8: MOV dword ptr [0x006880c0],EBP
//   XREF to: 006880c0 (WRITE)
// 004eccae: MOV EDX,0xffff
// 004eccb3: MOV dword ptr [0x02d83370],ECX
//   XREF to: 02d83370 (WRITE)
// 004eccb9: PUSH EDX
// 004eccba: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004eccc0: MOV dword ptr [0x02d83378],ECX
//   XREF to: 02d83378 (WRITE)
// 004eccc6: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004eccc7: MOV dword ptr [0x02d8337c],ECX
//   XREF to: 02d8337c (WRITE)
// 004ecccd: MOV dword ptr [0x02d83374],EDX
//   XREF to: 02d83374 (WRITE)
// 004eccd3: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004eccd8: ADD ESP,0x8
// 004eccdb: POP EBP
// 004eccdc: POP EDI
// 004eccdd: POP ESI
// 004eccde: POP EBX
// 004eccdf: RET
