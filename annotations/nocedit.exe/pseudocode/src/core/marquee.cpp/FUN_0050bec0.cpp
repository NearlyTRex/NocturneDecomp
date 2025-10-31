// Name: core_marquee.cpp_FUN_0050bec0
// Address: 0050bec0
// Address Range: [[0050bec0, 0050c046]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bec0()
// Cross-references:
//   core_marquee.cpp_FUN_0050c050 (0050c050) at 0050c2e1 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00661020
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050bec0(undefined1 param_1, undefined4
   param_2) */

void core_marquee_cpp_FUN_0050bec0(void)

{
  int *piVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  float *in_stack_00000008;
  SMRGLHeaderPrimitive local_40;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  CVector3i local_1c;
  
  bVar5 = 0;
  local_1c.x = (int)ROUND(*in_stack_00000008 * _DAT_00661020);
  local_1c.y = (int)ROUND(in_stack_00000008[1] * _DAT_00661020);
  local_1c.z = (int)ROUND(in_stack_00000008[2] * _DAT_00661020);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_1c);
  this_ptr = g_CDemonRendererPtr;
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr + 1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr->vertex_buffer_ptr;
  pSVar4 = this_ptr->vertex_buffer_ptr + 2;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr->vertex_buffer_ptr;
  pSVar4 = this_ptr->vertex_buffer_ptr + 3;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_x =
       (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_x + 0x80;
  piVar1 = &(this_ptr->vertex_buffer_ptr->projected_vertex).transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_x =
       this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_x + -0x80;
  piVar1 = &this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_x =
       this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_x + -0x80;
  piVar1 = &this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + -0x80;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_x =
       this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_x + 0x80;
  piVar1 = &this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_y;
  *piVar1 = *piVar1 + -0x80;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
  this_ptr->vertex_buffer_ptr->u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
  local_40.base.count = 4;
  local_40.surface_normal.D = 0;
  local_40.surface_normal.C = 0;
  local_40.surface_normal.B = 0;
  local_40.surface_normal.A = 0;
  local_28 = 0;
  local_1c.x = 3;
  local_24 = 1;
  local_20 = 2;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(this_ptr,&local_40,99);
  return;
}


// Assembly code:
// 0050bec0: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050bec0
// 0050bec1: PUSH ESI
// 0050bec2: PUSH EDI
// 0050bec3: PUSH EBP
// 0050bec4: SUB ESP,0x34
// 0050bec7: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0050becb: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050bed1: LEA EBX,[ESP + 0x28]
//   XREF to: Stack[-0x1c] (DATA)
// 0050bed5: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0050bed7: FLD float ptr [EAX]
// 0050bed9: FMUL float ptr [0x00661020]
//   XREF to: 00661020 (READ)
// 0050bedf: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 0050bee1: FLD float ptr [EAX + 0x4]
// 0050bee4: FMUL float ptr [0x00661020]
//   XREF to: 00661020 (READ)
// 0050beea: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 0050beed: FLD float ptr [EAX + 0x8]
// 0050bef0: FMUL float ptr [0x00661020]
//   XREF to: 00661020 (READ)
// 0050bef6: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0050bef9: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1c] (DATA)
// 0050befd: PUSH EAX
// 0050befe: PUSH ESI
// 0050beff: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 0050bf04: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050bf09: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf0b: MOV ECX,0xc
// 0050bf10: LEA EDI,[ESI + 0x30]
// 0050bf13: MOVSD.REP ES:EDI,ESI
// 0050bf15: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf17: MOV ECX,0xc
// 0050bf1c: LEA EDI,[ESI + 0x60]
// 0050bf1f: MOVSD.REP ES:EDI,ESI
// 0050bf21: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf23: MOV ECX,0xc
// 0050bf28: LEA EDI,[ESI + 0x90]
// 0050bf2e: MOVSD.REP ES:EDI,ESI
// 0050bf30: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf32: ADD dword ptr [ESI],0x80
// 0050bf38: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf3a: ADD dword ptr [ESI + 0x4],0x80
// 0050bf41: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf43: SUB dword ptr [EBX + 0x30],0x80
// 0050bf4a: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf4c: ADD dword ptr [ESI + 0x34],0x80
// 0050bf53: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf55: SUB dword ptr [ESI + 0x60],0x80
// 0050bf5c: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf5e: SUB dword ptr [ESI + 0x64],0x80
// 0050bf65: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf67: ADD dword ptr [EBX + 0x90],0x80
// 0050bf71: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf73: SUB dword ptr [EBX + 0x94],0x80
// 0050bf7d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf7f: MOV dword ptr [EBX + 0x10],0x80000000
// 0050bf86: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf88: MOV dword ptr [EBX + 0x40],0x80000000
// 0050bf8f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf91: MOV dword ptr [EBX + 0x70],0x80000000
// 0050bf98: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bf9a: MOV dword ptr [EBX + 0xa0],0x80000000
// 0050bfa4: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfa6: MOV dword ptr [EBX + 0x18],0x80000
// 0050bfad: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfaf: MOV dword ptr [EBX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050bfb6: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfb8: MOV dword ptr [EBX + 0x48],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050bfbf: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfc1: MOV dword ptr [EBX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050bfc8: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfca: MOV dword ptr [EBX + 0x78],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050bfd1: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfd3: MOV dword ptr [EBX + 0x7c],0x80000
// 0050bfda: ADD ESP,0x8
// 0050bfdd: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bfdf: PUSH 0x63
// 0050bfe1: MOV dword ptr [EBX + 0xa8],0x80000
// 0050bfeb: MOV EDI,0x4
// 0050bff0: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050bff2: XOR EBP,EBP
// 0050bff4: MOV EDX,0x3
// 0050bff9: MOV dword ptr [EBX + 0xac],0x80000
// 0050c003: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x44] (DATA)
// 0050c007: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0050c00b: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 0050c00f: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 0050c013: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 0050c017: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 0050c01b: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 0050c01f: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0050c023: PUSH EBX
// 0050c024: MOV EDI,0x1
// 0050c029: MOV EBP,0x2
// 0050c02e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0050c02f: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0050c033: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0050c037: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0050c03c: ADD ESP,0xc
// 0050c03f: ADD ESP,0x34
// 0050c042: POP EBP
// 0050c043: POP EDI
// 0050c044: POP ESI
// 0050c045: POP EBX
// 0050c046: RET
