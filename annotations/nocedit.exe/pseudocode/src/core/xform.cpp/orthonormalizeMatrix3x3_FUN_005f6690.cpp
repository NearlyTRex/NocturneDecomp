// Name: core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
// Address: 005f6690
// Address Range: [[005f6690, 005f6bd0]]
// Convention: __cdecl
// Signature: void core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f * matrix, int preserve_scale)
// Cross-references:
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 (00442ea0) at 00442fae [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 (0058adb0) at 0058ae73 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 (0058aa10) at 0058ab5e [UNCONDITIONAL_CALL]
// Globals:
//   double g_GramSchmidtBlendFactor = 0.5

#include "nocturne.h"

void __cdecl
core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f *matrix,int preserve_scale)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].y;
  fVar3 = matrix->m[0].z;
  fVar4 = matrix->m[1].y;
  fVar5 = matrix->m[1].z;
  fVar6 = matrix->m[2].x;
  fVar7 = matrix->m[2].z;
  fVar8 = matrix[1].m[0].x;
  fVar9 = matrix[1].m[0].y;
  local_b0 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_80 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  local_88 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  if (local_b0 <= 0.0) {
    local_b0 = 1.0;
  }
  if (local_80 <= 0.0) {
    local_80 = 1.0;
  }
  if (local_88 <= 0.0) {
    local_88 = 1.0;
  }
  local_e8 = 1.0 / local_b0;
  local_c8 = 1.0 / local_80;
  local_f0 = (double)fVar1 * local_e8;
  local_90 = (double)fVar2 * local_e8;
  local_e8 = (double)fVar3 * local_e8;
  local_b8 = (double)fVar4 * local_c8;
  local_e0 = (double)fVar5 * local_c8;
  local_c8 = (double)fVar6 * local_c8;
  local_d0 = 1.0 / local_88;
  local_c0 = (double)fVar7 * local_d0;
  local_d8 = (double)fVar8 * local_d0;
  local_d0 = (double)fVar9 * local_d0;
  iVar16 = 0;
  do {
    dVar10 = local_f0 * g_GramSchmidtBlendFactor + (local_e0 * local_d0 - local_c8 * local_d8);
    dVar15 = local_90 * g_GramSchmidtBlendFactor + (local_c8 * local_c0 - local_b8 * local_d0);
    dVar11 = local_e8 * g_GramSchmidtBlendFactor + (local_b8 * local_d8 - local_c0 * local_e0);
    dVar14 = local_b8 * g_GramSchmidtBlendFactor + (local_d8 * local_e8 - local_d0 * local_90);
    dVar13 = local_e0 * g_GramSchmidtBlendFactor + (local_d0 * local_f0 - local_c0 * local_e8);
    dVar12 = local_c8 * g_GramSchmidtBlendFactor + (local_c0 * local_90 - local_d8 * local_f0);
    local_c0 = local_c0 * g_GramSchmidtBlendFactor + (local_90 * local_c8 - local_e8 * local_e0);
    local_d8 = local_d8 * g_GramSchmidtBlendFactor + (local_e8 * local_b8 - local_f0 * local_c8);
    local_d0 = local_d0 * g_GramSchmidtBlendFactor + (local_f0 * local_e0 - local_90 * local_b8);
    local_c8 = 1.0 / SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
    local_e8 = 1.0 / SQRT(dVar11 * dVar11 + dVar15 * dVar15 + dVar10 * dVar10);
    local_f0 = dVar10 * local_e8;
    local_90 = dVar15 * local_e8;
    local_e8 = dVar11 * local_e8;
    local_b8 = dVar14 * local_c8;
    local_e0 = dVar13 * local_c8;
    local_c8 = dVar12 * local_c8;
    dVar10 = 1.0 / SQRT(local_d0 * local_d0 + local_d8 * local_d8 + local_c0 * local_c0);
    local_c0 = local_c0 * dVar10;
    local_d8 = local_d8 * dVar10;
    local_d0 = local_d0 * dVar10;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  local_a8 = local_e0 * local_d0 - local_c8 * local_d8;
  local_a0 = local_c8 * local_c0 - local_b8 * local_d0;
  local_98 = local_b8 * local_d8 - local_c0 * local_e0;
  if (preserve_scale != 0) {
    local_a8 = local_a8 * local_b0;
    local_a0 = local_a0 * local_b0;
    local_98 = local_98 * local_b0;
    local_b8 = local_b8 * local_80;
    local_e0 = local_e0 * local_80;
    local_c8 = local_c8 * local_80;
    local_c0 = local_c0 * local_88;
    local_d8 = local_d8 * local_88;
    local_d0 = local_d0 * local_88;
  }
  matrix->m[0].y = (float)local_a0;
  matrix->m[0].z = (float)local_98;
  matrix->m[1].y = (float)local_b8;
  matrix->m[1].z = (float)local_e0;
  matrix->m[2].x = (float)local_c8;
  matrix->m[2].z = (float)local_c0;
  matrix[1].m[0].x = (float)local_d8;
  matrix[1].m[0].y = (float)local_d0;
  matrix->m[0].x = (float)local_a8;
  return;
}


// Assembly code:
// 005f6690: PUSH EBX
//   Label: core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
// 005f6691: PUSH ESI
// 005f6692: PUSH EDI
// 005f6693: PUSH EBP
// 005f6694: MOV EBP,ESP
// 005f6696: SUB ESP,0xe0
// 005f669c: AND ESP,0xfffffff8
// 005f669f: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f66a2: FLD float ptr [ECX]
// 005f66a4: FST double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f66a7: FMUL double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f66aa: FLD float ptr [ECX + 0x4]
// 005f66ad: FST double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (WRITE)
// 005f66b1: FMUL double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f66b5: FLD float ptr [ECX + 0x8]
// 005f66b8: FXCH
// 005f66ba: FADDP ST2,ST0
// 005f66bc: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (WRITE)
// 005f66c0: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f66c4: FADDP
// 005f66c6: FSQRT
// 005f66c8: FLD float ptr [ECX + 0x10]
// 005f66cb: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (WRITE)
// 005f66cf: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f66d3: FLD float ptr [ECX + 0x14]
// 005f66d6: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (WRITE)
// 005f66da: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f66de: FLD float ptr [ECX + 0x18]
// 005f66e1: FXCH
// 005f66e3: FADDP ST2,ST0
// 005f66e5: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (WRITE)
// 005f66e9: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f66ed: FADDP
// 005f66ef: FSQRT
// 005f66f1: FLD float ptr [ECX + 0x20]
// 005f66f4: FST double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (WRITE)
// 005f66f8: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f66fc: FLD float ptr [ECX + 0x24]
// 005f66ff: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 005f6703: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6707: FLD float ptr [ECX + 0x28]
// 005f670a: FXCH
// 005f670c: FADDP ST2,ST0
// 005f670e: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (WRITE)
// 005f6712: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f6716: FADDP
// 005f6718: FSQRT
// 005f671a: FLDZ
// 005f671c: FXCH ST3
// 005f671e: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb0] (WRITE)
// 005f6722: FXCH
// 005f6724: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x80] (WRITE)
// 005f6728: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (WRITE)
// 005f672c: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb0] (READ)
// 005f6730: FNSTSW AX
// 005f6732: SAHF
// 005f6733: JNC 0x005f6b2e
//   XREF to: 005f6b2e (CONDITIONAL_JUMP)
// 005f6739: FLDZ
//   Label: LAB_005f6739
// 005f673b: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x80] (READ)
// 005f673f: FNSTSW AX
// 005f6741: SAHF
// 005f6742: JC 0x005f6753
//   XREF to: 005f6753 (CONDITIONAL_JUMP)
// 005f6744: XOR ESI,ESI
// 005f6746: MOV EDI,0x3ff00000
// 005f674b: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x80] (WRITE)
// 005f674f: MOV dword ptr [ESP + 0x74],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 005f6753: FLDZ
//   Label: LAB_005f6753
// 005f6755: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (READ)
// 005f6759: FNSTSW AX
// 005f675b: SAHF
// 005f675c: JNC 0x005f6b42
//   XREF to: 005f6b42 (CONDITIONAL_JUMP)
// 005f6762: FLD1
//   Label: LAB_005f6762
// 005f6764: FDIV double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb0] (READ)
// 005f6768: FLD1
// 005f676a: FDIV double ptr [ESP + 0x70]
//   XREF to: Stack[-0x80] (READ)
// 005f676e: FLD double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f6771: FMUL ST2
// 005f6773: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f6777: FMUL ST3
// 005f6779: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f677d: FMULP ST4
// 005f677f: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6783: FXCH ST3
// 005f6785: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (WRITE)
// 005f678c: FXCH ST2
// 005f678e: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f6795: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6799: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f67a0: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f67a4: FXCH ST3
// 005f67a6: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f67a9: FLD1
// 005f67ab: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f67af: FXCH ST4
// 005f67b1: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f67b8: FXCH
// 005f67ba: FDIV double ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (READ)
// 005f67be: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (WRITE)
// 005f67c5: FXCH ST3
// 005f67c7: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f67ce: FXCH ST4
// 005f67d0: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (WRITE)
// 005f67d4: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f67d8: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f67df: FXCH ST5
// 005f67e1: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (WRITE)
// 005f67e5: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f67e9: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f67f0: XOR EDX,EDX
// 005f67f2: FXCH ST2
// 005f67f4: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (WRITE)
// 005f67f8: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (WRITE)
// 005f67fc: FXCH
// 005f67fe: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (WRITE)
// 005f6802: FXCH
// 005f6804: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (WRITE)
// 005f6808: FXCH
// 005f680a: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 005f680e: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (WRITE)
// 005f6812: FLD double ptr [ESP + 0x10]
//   Label: LAB_005f6812
//   XREF to: Stack[-0xe0] (READ)
// 005f6816: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f681a: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f681e: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f6822: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6826: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f682a: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f682e: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6832: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6836: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f683a: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f683e: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6842: FXCH ST2
// 005f6844: FSUBP ST5,ST0
// 005f6846: FSUBP ST3,ST0
// 005f6848: FLD double ptr [0x006583bd]
//   XREF to: 006583bd (READ)
// 005f684e: FLD double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f6851: FMUL ST1
// 005f6853: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f6857: FMUL ST2
// 005f6859: FXCH
// 005f685b: FADDP ST6,ST0
// 005f685d: FXCH ST5
// 005f685f: FST double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x40] (WRITE)
// 005f6866: FMUL double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x40] (READ)
// 005f686d: FXCH ST2
// 005f686f: FSUBP ST3,ST0
// 005f6871: FXCH ST4
// 005f6873: FADDP ST3,ST0
// 005f6875: FXCH ST2
// 005f6877: FST double ptr [ESP + 0x78]
//   XREF to: Stack[-0x78] (WRITE)
// 005f687b: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x78] (READ)
// 005f687f: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f6883: FMUL ST4
// 005f6885: FXCH
// 005f6887: FADDP ST3,ST0
// 005f6889: FADDP
// 005f688b: FST double ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (WRITE)
// 005f6892: FMUL double ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (READ)
// 005f6899: FADDP
// 005f689b: FSQRT
// 005f689d: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f68a1: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f68a5: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f68a9: FMUL double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f68ac: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f68b0: FMUL double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f68b4: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f68b8: FMUL double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f68bc: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f68c0: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f68c4: FXCH
// 005f68c6: FSUBP ST4,ST0
// 005f68c8: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f68cc: FMUL double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f68cf: FXCH
// 005f68d1: FSUBP ST3,ST0
// 005f68d3: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f68d7: FMUL ST6
// 005f68d9: FXCH
// 005f68db: FSUBP ST2,ST0
// 005f68dd: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f68e1: FMUL ST6
// 005f68e3: FXCH
// 005f68e5: FADDP ST4,ST0
// 005f68e7: FXCH ST3
// 005f68e9: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x68] (WRITE)
// 005f68f0: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f68f4: FMUL ST5
// 005f68f6: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x68] (READ)
// 005f68fd: FMUL ST0
// 005f68ff: FXCH ST4
// 005f6901: FADDP ST3,ST0
// 005f6903: FXCH ST2
// 005f6905: FST double ptr [ESP + 0x90]
//   XREF to: Stack[-0x60] (WRITE)
// 005f690c: FMUL double ptr [ESP + 0x90]
//   XREF to: Stack[-0x60] (READ)
// 005f6913: FXCH ST2
// 005f6915: FADDP
// 005f6917: FXCH
// 005f6919: FADDP ST2,ST0
// 005f691b: FST double ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (WRITE)
// 005f6922: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (READ)
// 005f6929: FADDP
// 005f692b: FSQRT
// 005f692d: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f6931: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f6935: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f6939: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f693d: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005f6941: FXCH
// 005f6943: FSUBP ST2,ST0
// 005f6945: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6949: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f694d: FMUL ST5
// 005f694f: FLD double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f6952: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f6956: FXCH
// 005f6958: FADDP ST3,ST0
// 005f695a: FLD double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f695d: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6961: FXCH
// 005f6963: FSUBP ST2,ST0
// 005f6965: FXCH ST2
// 005f6967: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x50] (WRITE)
// 005f696e: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6972: FMUL ST5
// 005f6974: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 005f6978: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f697c: FXCH
// 005f697e: FADDP ST2,ST0
// 005f6980: FLD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x50] (READ)
// 005f6987: FMUL ST0
// 005f6989: FXCH
// 005f698b: FSUBP ST3,ST0
// 005f698d: FXCH
// 005f698f: FST double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (WRITE)
// 005f6996: FMUL double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (READ)
// 005f699d: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f69a1: FMULP ST6
// 005f69a3: FADDP
// 005f69a5: FXCH ST4
// 005f69a7: FADDP
// 005f69a9: FST double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (WRITE)
// 005f69b0: FMUL double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (READ)
// 005f69b7: FADDP ST3,ST0
// 005f69b9: FXCH ST2
// 005f69bb: FSQRT
// 005f69bd: FLD1
// 005f69bf: FDIVRP ST3,ST0
// 005f69c1: FLD1
// 005f69c3: FDIVRP ST2,ST0
// 005f69c5: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x40] (READ)
// 005f69cc: FMUL ST2
// 005f69ce: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x78] (READ)
// 005f69d2: FMUL ST3
// 005f69d4: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (READ)
// 005f69db: FMULP ST4
// 005f69dd: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x68] (READ)
// 005f69e4: FXCH ST5
// 005f69e6: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (WRITE)
// 005f69ed: FXCH ST4
// 005f69ef: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f69f6: FXCH ST2
// 005f69f8: FSTP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x18] (WRITE)
// 005f69ff: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x60] (READ)
// 005f6a06: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f6a0d: FLD1
// 005f6a0f: FXCH ST2
// 005f6a11: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005f6a14: FLD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x50] (READ)
// 005f6a1b: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (READ)
// 005f6a22: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f6a29: FXCH ST3
// 005f6a2b: FDIV double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x18] (READ)
// 005f6a32: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (WRITE)
// 005f6a39: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f6a40: FXCH ST5
// 005f6a42: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (WRITE)
// 005f6a46: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (READ)
// 005f6a4d: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f6a54: FXCH ST4
// 005f6a56: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (WRITE)
// 005f6a5a: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (READ)
// 005f6a61: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 005f6a68: INC EDX
// 005f6a69: FXCH ST3
// 005f6a6b: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (WRITE)
// 005f6a6f: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (WRITE)
// 005f6a73: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (WRITE)
// 005f6a77: FXCH ST2
// 005f6a79: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (WRITE)
// 005f6a7d: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 005f6a81: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (WRITE)
// 005f6a85: CMP EDX,0xa
// 005f6a88: JL 0x005f6812
//   XREF to: 005f6812 (CONDITIONAL_JUMP)
// 005f6a8e: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f6a92: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6a96: FMUL ST1
// 005f6a98: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f6a9c: FLD ST0
// 005f6a9e: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f6aa2: FXCH
// 005f6aa4: FMUL ST1
// 005f6aa6: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6aaa: FLD ST0
// 005f6aac: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6ab0: FXCH ST4
// 005f6ab2: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6ab6: FXCH
// 005f6ab8: FMULP ST6
// 005f6aba: FXCH ST2
// 005f6abc: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6ac0: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f6ac3: FXCH ST2
// 005f6ac5: FSUBP ST4,ST0
// 005f6ac7: FSUBRP ST4,ST0
// 005f6ac9: FSUBP
// 005f6acb: FXCH ST2
// 005f6acd: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0xa0] (WRITE)
// 005f6ad1: FXCH
// 005f6ad3: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (WRITE)
// 005f6ad7: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0xa8] (WRITE)
// 005f6adb: TEST EBX,EBX
// 005f6add: JNZ 0x005f6b56
//   XREF to: 005f6b56 (CONDITIONAL_JUMP)
// 005f6adf: FLD double ptr [ESP + 0x48]
//   Label: LAB_005f6adf
//   XREF to: Stack[-0xa8] (READ)
// 005f6ae3: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0xa0] (READ)
// 005f6ae7: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (READ)
// 005f6aeb: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6aef: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6af3: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f6af7: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f6afb: FXCH ST5
// 005f6afd: FSTP float ptr [ECX + 0x4]
// 005f6b00: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6b04: FXCH ST4
// 005f6b06: FSTP float ptr [ECX + 0x8]
// 005f6b09: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f6b0d: FXCH ST3
// 005f6b0f: FSTP float ptr [ECX + 0x10]
// 005f6b12: FXCH
// 005f6b14: FSTP float ptr [ECX + 0x14]
// 005f6b17: FSTP float ptr [ECX + 0x18]
// 005f6b1a: FXCH ST2
// 005f6b1c: FSTP float ptr [ECX + 0x20]
// 005f6b1f: FSTP float ptr [ECX + 0x24]
// 005f6b22: FSTP float ptr [ECX + 0x28]
// 005f6b25: FSTP float ptr [ECX]
// 005f6b27: MOV ESP,EBP
// 005f6b29: POP EBP
// 005f6b2a: POP EDI
// 005f6b2b: POP ESI
// 005f6b2c: POP EBX
// 005f6b2d: RET
// 005f6b2e: XOR EDX,EDX
//   Label: LAB_005f6b2e
// 005f6b30: MOV EBX,0x3ff00000
// 005f6b35: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 005f6b39: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0xac] (WRITE)
// 005f6b3d: JMP 0x005f6739
//   XREF to: 005f6739 (UNCONDITIONAL_JUMP)
// 005f6b42: XOR EAX,EAX
//   Label: LAB_005f6b42
// 005f6b44: MOV EDX,0x3ff00000
// 005f6b49: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005f6b4d: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x84] (WRITE)
// 005f6b51: JMP 0x005f6762
//   XREF to: 005f6762 (UNCONDITIONAL_JUMP)
// 005f6b56: FLD double ptr [ESP + 0x40]
//   Label: LAB_005f6b56
//   XREF to: Stack[-0xb0] (READ)
// 005f6b5a: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0xa8] (READ)
// 005f6b5e: FMUL ST1
// 005f6b60: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0xa0] (READ)
// 005f6b64: FMUL ST2
// 005f6b66: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (READ)
// 005f6b6a: FMULP ST3
// 005f6b6c: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x80] (READ)
// 005f6b70: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 005f6b74: FMUL ST1
// 005f6b76: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005f6b7a: FMUL ST2
// 005f6b7c: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 005f6b80: FMULP ST3
// 005f6b82: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 005f6b86: FMUL double ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (READ)
// 005f6b8a: FXCH ST4
// 005f6b8c: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0xa0] (WRITE)
// 005f6b90: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005f6b94: FMUL double ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (READ)
// 005f6b98: FXCH ST6
// 005f6b9a: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (WRITE)
// 005f6b9e: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 005f6ba2: FMUL double ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (READ)
// 005f6ba6: FXCH ST2
// 005f6ba8: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (WRITE)
// 005f6bac: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (WRITE)
// 005f6bb0: FXCH
// 005f6bb2: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (WRITE)
// 005f6bb6: FXCH
// 005f6bb8: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (WRITE)
// 005f6bbc: FXCH ST2
// 005f6bbe: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 005f6bc2: FXCH
// 005f6bc4: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (WRITE)
// 005f6bc8: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0xa8] (WRITE)
// 005f6bcc: JMP 0x005f6adf
//   XREF to: 005f6adf (UNCONDITIONAL_JUMP)
