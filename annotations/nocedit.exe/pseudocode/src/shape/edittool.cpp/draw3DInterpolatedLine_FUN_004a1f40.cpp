// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
// Address Range: [[004a1f40, 004a204e]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f * start_point, CVector3f * end_point)
// Globals:
//   float FLOAT_006235be = 0.2000000
//   float FLOAT_006235c2 = 0.8000000
//   float g_WorldToScreenScale2 = 256
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 DAT_00688044
//   undefined4 DAT_00688048
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_matrix.c_transformToCache_FUN_0050cd70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar2;
  int *piVar3;
  byte bVar4;
  SRenderVertex *in_stack_ffffff6c;
  SRenderVertex *in_stack_ffffff70;
  int aiStack_64 [7];
  undefined4 uStack_48;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  local_24._0_4_ = (undefined4)ROUND(start_point->x * g_WorldToScreenScale2);
  local_24._4_4_ = (undefined4)ROUND(start_point->y * g_WorldToScreenScale2);
  local_1c = (int)ROUND(start_point->z * g_WorldToScreenScale2);
  uStack_48 = 0x4a1f82;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_24);
  local_24._0_4_ = FLOAT_006235be * end_point->z;
  local_14 = start_point->x * FLOAT_006235c2 + end_point->x * FLOAT_006235be;
  local_10 = start_point->y * FLOAT_006235c2 + end_point->y * FLOAT_006235be;
  local_24._4_4_ = (undefined4)ROUND(local_14 * g_WorldToScreenScale2);
  local_1c = (int)ROUND(local_10 * g_WorldToScreenScale2);
  local_18 = (int)ROUND((FLOAT_006235c2 * start_point->z + (float)local_24._0_4_) *
                        g_WorldToScreenScale2);
  engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_24 + 4));
  pSVar2 = g_RenderVertexBuffer + 1;
  piVar3 = aiStack_64;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  pSVar2 = g_RenderVertexBuffer;
  piVar3 = (int *)&stack0xffffff6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff6c,in_stack_ffffff70);
  return;
}


// Assembly code:
// 004a1f40: PUSH EBX
//   Label: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// 004a1f41: PUSH ESI
// 004a1f42: PUSH EDI
// 004a1f43: SUB ESP,0x30
// 004a1f46: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 004a1f4a: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 004a1f4e: LEA EBX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 004a1f52: MOV EAX,EDI
// 004a1f54: FLD float ptr [EAX]
// 004a1f56: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1f5c: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 004a1f5e: FLD float ptr [EAX + 0x4]
// 004a1f61: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1f67: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 004a1f6a: FLD float ptr [EAX + 0x8]
// 004a1f6d: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1f73: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 004a1f76: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 004a1f7a: PUSH EAX
// 004a1f7b: PUSH 0x0
// 004a1f7d: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a1f82: FLD float ptr [0x006235be]
//   XREF to: 006235be (READ)
// 004a1f88: FLD float ptr [ESI]
// 004a1f8a: FMUL ST1
// 004a1f8c: ADD ESP,0x8
// 004a1f8f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (WRITE)
// 004a1f93: FLD float ptr [ESI + 0x4]
// 004a1f96: FMUL ST1
// 004a1f98: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (WRITE)
// 004a1f9c: FMUL float ptr [ESI + 0x8]
// 004a1f9f: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 004a1fa3: FLD float ptr [0x006235c2]
//   XREF to: 006235c2 (READ)
// 004a1fa9: FLD float ptr [EDI]
// 004a1fab: FMUL ST1
// 004a1fad: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 004a1fb0: FLD float ptr [EDI + 0x4]
// 004a1fb3: FMUL ST1
// 004a1fb5: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 004a1fb9: FMUL float ptr [EDI + 0x8]
// 004a1fbc: LEA EBX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 004a1fc0: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x18] (DATA)
// 004a1fc4: FLD float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 004a1fc7: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 004a1fcb: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 004a1fcf: FXCH
// 004a1fd1: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (WRITE)
// 004a1fd5: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 004a1fd9: FXCH
// 004a1fdb: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 004a1fdf: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 004a1fe3: FXCH
// 004a1fe5: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (WRITE)
// 004a1fe9: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x10] (WRITE)
// 004a1fed: FLD float ptr [EAX]
//   XREF to: Stack[-0x18] (DATA)
// 004a1fef: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a1ff5: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x24] (DATA)
// 004a1ff7: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a1ffa: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a2000: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 004a2003: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 004a2006: FMUL float ptr [0x0065d44c]
//   XREF to: 0065d44c (READ)
// 004a200c: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 004a200f: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 004a2013: PUSH EAX
// 004a2014: PUSH 0x1
// 004a2016: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a201b: ADD ESP,0x8
// 004a201e: MOV ESI,0x688044
//   XREF to: 00688044 (DATA)
// 004a2023: SUB ESP,0x30
// 004a2026: MOV ECX,0xc
// 004a202b: MOV EDI,ESP
// 004a202d: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688044 (READ)
//   XREF to: 00688048 (READ)
// 004a202f: SUB ESP,0x30
// 004a2032: MOV ECX,0xc
// 004a2037: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a203c: MOV EDI,ESP
// 004a203e: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a2040: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a2045: ADD ESP,0x60
// 004a2048: ADD ESP,0x30
// 004a204b: POP EDI
// 004a204c: POP ESI
// 004a204d: POP EBX
// 004a204e: RET
