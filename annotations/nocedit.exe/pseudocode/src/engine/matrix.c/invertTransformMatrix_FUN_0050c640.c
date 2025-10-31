// Name: engine_matrix.c_invertTransformMatrix_FUN_0050c640
// Address: 0050c640
// Address Range: [[0050c640, 0050c919]]
// Convention: __cdecl
// Signature: void engine_matrix.c_invertTransformMatrix_FUN_0050c640(void)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 (0048c200) at 0048c412 [UNCONDITIONAL_CALL]
//   engine_matrix.c_buildRotationMatrix_FUN_0050c920 (0050c920) at 0050cc04 [UNCONDITIONAL_CALL]
// Globals:
//   double g_FixedToFloat = 0.0000152587890625
//   double g_Fixed16Scale = 65536
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]
//   CMatrix3x3i g_TransformMatrixCopy
//   undefined4 g_TransformMatrixCopy[0][1]
//   undefined4 g_TransformMatrixCopy[0][2]
//   undefined4 g_TransformMatrixCopy[1][0]
//   undefined4 g_TransformMatrixCopy[1][1]
//   undefined4 g_TransformMatrixCopy[1][2]
//   undefined4 g_TransformMatrixCopy[2][0]
//   undefined4 g_TransformMatrixCopy[2][1]
//   undefined4 g_TransformMatrixCopy[2][2]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_0050c640(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_EDX;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  
  fVar3 = (float)g_TransformMatrix.m[0][0] * (float)g_FixedToFloat;
  fVar8 = (float)g_TransformMatrix.m[0][1] * (float)g_FixedToFloat;
  fVar9 = (float)g_TransformMatrix.m[0][2] * (float)g_FixedToFloat;
  fVar11 = (float)g_TransformMatrix.m[1][0] * (float)g_FixedToFloat;
  fVar4 = (float)g_TransformMatrix.m[1][1] * (float)g_FixedToFloat;
  fVar5 = (float)g_TransformMatrix.m[1][2] * (float)g_FixedToFloat;
  fVar12 = (float)g_TransformMatrix.m[2][0] * (float)g_FixedToFloat;
  fVar7 = (float)g_TransformMatrix.m[2][1] * (float)g_FixedToFloat;
  fVar6 = (float)g_TransformMatrix.m[2][2] * (float)g_FixedToFloat;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  g_TransformMatrixCopy.m[0][0] = g_TransformMatrix.m[0][0];
  g_TransformMatrixCopy.m[0][1] = g_TransformMatrix.m[0][1];
  g_TransformMatrixCopy.m[0][2] = g_TransformMatrix.m[0][2];
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  g_TransformMatrixCopy.m[1][0] = g_TransformMatrix.m[1][0];
  g_TransformMatrixCopy.m[1][1] = g_TransformMatrix.m[1][1];
  g_TransformMatrixCopy.m[1][2] = g_TransformMatrix.m[1][2];
  g_TransformMatrixCopy.m[2][0] = g_TransformMatrix.m[2][0];
  g_TransformMatrixCopy.m[2][1] = g_TransformMatrix.m[2][1];
  g_TransformMatrixCopy.m[2][2] = g_TransformMatrix.m[2][2];
  fVar13 = (float)g_Fixed16Scale / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  fVar14 = (float10)fVar1 * (float10)fVar13;
  fVar15 = (float10)-(fVar8 * fVar6 - fVar9 * fVar7) * (float10)fVar13;
  fVar16 = ((float10)fVar8 * (float10)fVar5 - (float10)fVar9 * (float10)fVar4) * (float10)fVar13;
  fVar17 = (float10)-fVar10 * (float10)fVar13;
  fVar18 = (float10)(fVar3 * fVar6 - fVar9 * fVar12) * (float10)fVar13;
  fVar19 = -((float10)fVar3 * (float10)fVar5 - (float10)fVar9 * (float10)fVar11) * (float10)fVar13;
  fVar20 = (float10)fVar2 * (float10)fVar13;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,g_TransformMatrix.m[2][2]));
  g_InverseMatrix.m[0][0] = (int)ROUND(fVar14);
  fVar14 = (float10)uStack_4c * (float10)uStack_54;
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  g_InverseMatrix.m[0][1] = (int)ROUND(fVar15);
  fVar15 = (float10)(fVar11 * fVar7) *
           (float10)(float)-((float10)fVar3 * (float10)fVar7 - (float10)fVar8 * (float10)fVar12);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  crt_math_c_round_FUN_005fe6b0(dVar21);
  g_InverseMatrix.m[0][2] = (int)ROUND(fVar16);
  g_InverseMatrix.m[1][0] = (int)ROUND(fVar17);
  g_InverseMatrix.m[1][1] = (int)ROUND(fVar18);
  g_InverseMatrix.m[1][2] = (int)ROUND(fVar19);
  g_InverseMatrix.m[2][0] = (int)ROUND(fVar20);
  g_InverseMatrix.m[2][1] = (int)ROUND(fVar14);
  g_InverseMatrix.m[2][2] = (int)ROUND(fVar15);
  return;
}


// Assembly code:
// 0050c640: PUSH EBP
//   Label: engine_matrix.c_invertTransformMatrix_FUN_0050c640
// 0050c641: MOV EBP,ESP
// 0050c643: SUB ESP,0x54
// 0050c646: AND ESP,0xfffffff8
// 0050c649: FILD dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050c64f: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c655: FILD dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050c65b: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c661: FILD dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050c667: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c66d: FILD dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050c673: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c679: FILD dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050c67f: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c685: FILD dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050c68b: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c691: FILD dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050c697: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c69d: FXCH ST6
// 0050c69f: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (WRITE)
// 0050c6a3: FILD dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050c6a9: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c6af: FXCH ST2
// 0050c6b1: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0050c6b5: FILD dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050c6bb: FMUL double ptr [0x00635a3d]
//   XREF to: 00635a3d (READ)
// 0050c6c1: FXCH
// 0050c6c3: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (WRITE)
// 0050c6c7: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050c6cb: FXCH
// 0050c6cd: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (WRITE)
// 0050c6d1: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050c6d5: FXCH
// 0050c6d7: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (WRITE)
// 0050c6db: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050c6df: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 0050c6e3: FXCH ST4
// 0050c6e5: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (WRITE)
// 0050c6e9: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050c6ed: FXCH ST3
// 0050c6ef: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (WRITE)
// 0050c6f3: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (READ)
// 0050c6f7: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050c6fb: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0050c6ff: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 0050c703: FXCH ST2
// 0050c705: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 0050c709: FXCH ST4
// 0050c70b: FSUBR float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0050c70f: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (READ)
// 0050c713: FXCH
// 0050c715: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0050c719: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050c71d: FXCH ST2
// 0050c71f: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (WRITE)
// 0050c723: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0050c727: FXCH ST5
// 0050c729: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (WRITE)
// 0050c72d: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050c731: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050c735: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0050c739: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050c73d: FXCH
// 0050c73f: FSUBP ST6,ST0
// 0050c741: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050c746: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0050c74a: FMUL ST6
// 0050c74c: MOV [0x02f0d38c],EAX
//   XREF to: 02f0d38c (WRITE)
// 0050c751: FSUBP ST3,ST0
// 0050c753: MOV EAX,[0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050c758: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0050c75c: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 0050c760: MOV [0x02f0d390],EAX
//   XREF to: 02f0d390 (WRITE)
// 0050c765: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050c76a: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 0050c76e: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050c772: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050c776: MOV [0x02f0d394],EAX
//   XREF to: 02f0d394 (WRITE)
// 0050c77b: FSUBR float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0050c77f: MOV EAX,[0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050c784: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (WRITE)
// 0050c788: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0050c78c: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050c790: MOV [0x02f0d398],EAX
//   XREF to: 02f0d398 (WRITE)
// 0050c795: FXCH ST2
// 0050c797: FSUBP ST4,ST0
// 0050c799: MOV EAX,[0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050c79e: FSUBP ST4,ST0
// 0050c7a0: MOV [0x02f0d39c],EAX
//   XREF to: 02f0d39c (WRITE)
// 0050c7a5: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050c7aa: FXCH ST2
// 0050c7ac: FCHS
// 0050c7ae: MOV [0x02f0d3a0],EAX
//   XREF to: 02f0d3a0 (WRITE)
// 0050c7b3: MOV EAX,[0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050c7b8: FXCH ST3
// 0050c7ba: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 0050c7be: MOV [0x02f0d3a4],EAX
//   XREF to: 02f0d3a4 (WRITE)
// 0050c7c3: MOV EAX,[0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050c7c8: FXCH ST2
// 0050c7ca: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0050c7ce: MOV [0x02f0d3a8],EAX
//   XREF to: 02f0d3a8 (WRITE)
// 0050c7d3: FXCH ST2
// 0050c7d5: FCHS
// 0050c7d7: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (WRITE)
// 0050c7db: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050c7e0: FADDP
// 0050c7e2: MOV [0x02f0d3ac],EAX
//   XREF to: 02f0d3ac (WRITE)
// 0050c7e7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c7ea: FLD float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c7ed: FDIVR double ptr [0x00635a45]
//   XREF to: 00635a45 (READ)
// 0050c7f3: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (READ)
// 0050c7f7: FLD ST0
// 0050c7f9: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 0050c7fd: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0050c801: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0050c805: FMUL ST1
// 0050c807: FLD ST3
// 0050c809: FMULP ST2
// 0050c80b: FXCH ST3
// 0050c80d: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050c811: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0050c815: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0050c819: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0050c81d: FXCH
// 0050c81f: FSUBP ST4,ST0
// 0050c821: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0050c825: FXCH ST3
// 0050c827: FCHS
// 0050c829: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 0050c82d: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0050c831: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0050c835: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0050c839: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0050c83d: FXCH ST4
// 0050c83f: FSUBP ST5,ST0
// 0050c841: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0050c845: FXCH ST6
// 0050c847: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c84a: FXCH ST5
// 0050c84c: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c84f: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0050c853: FXCH ST6
// 0050c855: FSUBP ST3,ST0
// 0050c857: FXCH ST5
// 0050c859: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c85c: FXCH ST2
// 0050c85e: FCHS
// 0050c860: FXCH ST4
// 0050c862: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c865: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0050c869: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c86c: FXCH ST4
// 0050c86e: FSUBP ST2,ST0
// 0050c870: FXCH
// 0050c872: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (WRITE)
// 0050c876: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0050c87a: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c87d: FXCH ST4
// 0050c87f: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c882: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0050c886: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c889: FXCH ST6
// 0050c88b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c890: FISTP dword ptr [0x02f0d364]
//   XREF to: 02f0d364 (WRITE)
// 0050c896: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0050c89a: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c89d: FXCH ST3
// 0050c89f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8a4: FISTP dword ptr [0x02f0d368]
//   XREF to: 02f0d368 (WRITE)
// 0050c8aa: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (READ)
// 0050c8ae: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0050c8b1: FXCH ST2
// 0050c8b3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8b8: FXCH ST4
// 0050c8ba: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8bf: FXCH ST5
// 0050c8c1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8c6: FXCH
// 0050c8c8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8cd: FXCH ST6
// 0050c8cf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8d4: FXCH ST3
// 0050c8d6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8db: FXCH ST2
// 0050c8dd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c8e2: FXCH ST4
// 0050c8e4: FISTP dword ptr [0x02f0d36c]
//   XREF to: 02f0d36c (WRITE)
// 0050c8ea: FXCH ST4
// 0050c8ec: FISTP dword ptr [0x02f0d370]
//   XREF to: 02f0d370 (WRITE)
// 0050c8f2: FXCH ST3
// 0050c8f4: FISTP dword ptr [0x02f0d374]
//   XREF to: 02f0d374 (WRITE)
// 0050c8fa: FXCH ST3
// 0050c8fc: FISTP dword ptr [0x02f0d378]
//   XREF to: 02f0d378 (WRITE)
// 0050c902: FXCH ST2
// 0050c904: FISTP dword ptr [0x02f0d37c]
//   XREF to: 02f0d37c (WRITE)
// 0050c90a: FISTP dword ptr [0x02f0d380]
//   XREF to: 02f0d380 (WRITE)
// 0050c910: FISTP dword ptr [0x02f0d384]
//   XREF to: 02f0d384 (WRITE)
// 0050c916: MOV ESP,EBP
// 0050c918: POP EBP
// 0050c919: RET
