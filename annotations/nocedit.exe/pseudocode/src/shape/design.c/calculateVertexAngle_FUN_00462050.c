// Name: shape_design.c_calculateVertexAngle_FUN_00462050
// Address: 00462050
// Address Range: [[00462050, 00462122]]
// Convention: __cdecl
// Signature: double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
// Cross-references:
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 004633c0 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 (00462190) at 004629a9 [UNCONDITIONAL_CALL]
// Globals:
//   double g_RadiansToDegrees3 = 57.2957795130800
//   SVertexData[20000] g_LoadedVertices
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
// Function calls:
//   shape_design.c_clampedArccos_FUN_00461c50
//   shape_design.c_normalizeVertex_FUN_00461e60

#include "nocturne.h"

double __cdecl
shape_design_c_calculateVertexAngle_FUN_00462050
          (int vertex1_index,int vertex2_index,int vertex3_index)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  double dVar3;
  int in_stack_00000004;
  float fVar4;
  float fStack_80;
  double local_6c;
  double local_64;
  double local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  
  local_2c = g_LoadedVertices[in_stack_00000004].vertex.x;
  local_28 = g_LoadedVertices[in_stack_00000004].vertex.y;
  local_24 = g_LoadedVertices[in_stack_00000004].vertex.z;
  fStack_20 = g_LoadedVertices[in_stack_00000004].u;
  fStack_1c = g_LoadedVertices[in_stack_00000004].v;
  local_54 = g_LoadedVertices[vertex1_index].vertex.x;
  local_50 = g_LoadedVertices[vertex1_index].vertex.y;
  local_4c = g_LoadedVertices[vertex1_index].vertex.z;
  fStack_48 = g_LoadedVertices[vertex1_index].u;
  fStack_44 = g_LoadedVertices[vertex1_index].v;
  local_40 = g_LoadedVertices[vertex2_index].vertex.x;
  local_3c = g_LoadedVertices[vertex2_index].vertex.y;
  local_38 = g_LoadedVertices[vertex2_index].vertex.z;
  fStack_34 = g_LoadedVertices[vertex2_index].u;
  fStack_30 = g_LoadedVertices[vertex2_index].v;
  fVar4 = SUB84((double)(local_2c - local_54),0);
  fStack_80 = (float)((ulonglong)(double)(local_2c - local_54) >> 0x20);
  fVar1 = local_28 - local_50;
  fVar2 = local_24 - local_4c;
  local_6c = (double)(local_40 - local_54);
  local_64 = (double)(local_3c - local_50);
  local_5c = (double)(local_38 - local_4c);
  shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&stack0xffffff7c);
  shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_6c);
  dVar3 = shape_design_c_clampedArccos_FUN_00461c50
                    ((double)CONCAT44(fVar4,(int)((ulonglong)
                                                  ((double)fVar2 * local_5c +
                                                  (double)CONCAT44(fStack_80,fVar4) * local_6c +
                                                  (double)fVar1 * local_64) >> 0x20)));
  return dVar3 * g_RadiansToDegrees3;
}


// Assembly code:
// 00462050: PUSH EBX
//   Label: shape_design.c_calculateVertexAngle_FUN_00462050
// 00462051: PUSH ESI
// 00462052: PUSH EDI
// 00462053: PUSH EBP
// 00462054: MOV EBP,ESP
// 00462056: SUB ESP,0x7c
// 0046205c: IMUL ESI,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 00462060: LEA EDI,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 00462063: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00462069: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 0046206a: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 0046206b: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 0046206c: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 0046206d: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 0046206e: IMUL ESI,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 00462072: LEA EDI,[EBP + -0x44]
//   XREF to: Stack[-0x54] (DATA)
// 00462075: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046207b: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 0046207c: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 0046207d: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 0046207e: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 0046207f: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 00462080: IMUL ESI,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 00462084: LEA EDI,[EBP + -0x30]
//   XREF to: Stack[-0x40] (DATA)
// 00462087: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046208d: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 0046208e: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 0046208f: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 00462090: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 00462091: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 00462092: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00462095: FSUB float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 00462098: FSTP double ptr [EBP + -0x74]
//   XREF to: Stack[-0x84] (WRITE)
// 0046209b: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046209e: FSUB float ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 004620a1: FSTP double ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (WRITE)
// 004620a4: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004620a7: FSUB float ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004620aa: FSTP double ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 004620ad: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 004620b0: FSUB float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 004620b3: FSTP double ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 004620b6: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004620b9: FSUB float ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 004620bc: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 004620bf: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004620c2: FSUB float ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004620c5: FSTP double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (WRITE)
// 004620c8: LEA ESI,[EBP + -0x74]
//   XREF to: Stack[-0x84] (DATA)
// 004620cb: PUSH ESI
// 004620cc: CALL shape_design.c_normalizeVertex_FUN_00461e60
//   XREF to: 00461e60 (UNCONDITIONAL_CALL)
// 004620d1: ADD ESP,0x4
// 004620d4: LEA ESI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 004620d7: PUSH ESI
// 004620d8: CALL shape_design.c_normalizeVertex_FUN_00461e60
//   XREF to: 00461e60 (UNCONDITIONAL_CALL)
// 004620dd: ADD ESP,0x4
// 004620e0: FLD double ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 004620e3: FMUL double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 004620e6: FLD double ptr [EBP + -0x74]
//   XREF to: Stack[-0x84] (READ)
// 004620e9: FMUL double ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 004620ec: FADDP
// 004620ee: FLD double ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 004620f1: FMUL double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 004620f4: FADDP
// 004620f6: SUB ESP,0x8
// 004620f9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 004620fc: CALL shape_design.c_clampedArccos_FUN_00461c50
//   XREF to: 00461c50 (UNCONDITIONAL_CALL)
// 00462101: MOV dword ptr [EBP + -0x7c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00462104: MOV dword ptr [EBP + -0x78],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 00462107: FLD double ptr [EBP + -0x7c]
//   XREF to: Stack[-0x8c] (READ)
// 0046210a: ADD ESP,0x8
// 0046210d: FMUL double ptr [0x0061bfc6]
//   XREF to: 0061bfc6 (READ)
// 00462113: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00462116: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00462119: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046211c: MOV ESP,EBP
// 0046211e: POP EBP
// 0046211f: POP EDI
// 00462120: POP ESI
// 00462121: POP EBX
// 00462122: RET
