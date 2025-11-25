// Name: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
// Address: 005151e0
// Address Range: [[005151e0, 00515836]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count, CVector3f * positions, float * values, CVector3f * normal, CVector3f * out_gradient, float * out_offset)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 (00517530) at 00517605 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00637345 = 2
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0
          (int point_count,CVector3f *positions,float *values,CVector3f *normal,
          CVector3f *out_gradient,float *out_offset)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  CVector3f *pCVar19;
  float *pfVar20;
  BADSPACEBASE *in_ESP;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  int local_a0;
  undefined4 uStack_9c;
  CMatrix3x3f local_98;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  double local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  local_98.m[0].z = normal->x;
  local_98.m[1].z = normal->y;
  local_98.m[2].z = normal->z;
  local_18 = ABS(normal->y);
  local_1c = ABS(normal->z);
  local_2c = ABS(normal->x);
  fVar9 = normal->x;
  fVar10 = normal->y;
  local_70.z = normal->z;
  if ((local_2c < local_18) || (local_2c < local_1c)) {
    if ((local_18 < local_2c) || (local_18 < local_1c)) {
      local_70.z = -local_70.z;
      local_24 = local_70.z;
      local_70.x = local_70.z;
      local_70.y = fVar10;
      local_70.z = fVar9;
    }
    else {
      local_70.y = -fVar10;
      local_28 = local_70.y;
      local_70.x = local_70.y;
      local_70.y = fVar9;
    }
  }
  else {
    local_70.x = -fVar9;
    local_20 = local_70.x;
    local_70.y = local_70.x;
    local_70.x = fVar10;
  }
  local_58.x = normal->y * local_70.z - normal->z * local_70.y;
  local_58.y = normal->z * local_70.x - normal->x * local_70.z;
  local_58.z = normal->x * local_70.y - normal->y * local_70.x;
  if (&local_70 != &local_58) {
    local_70.x = local_58.x;
    local_70.y = local_58.y;
    local_70.z = local_58.z;
  }
  local_98.m[0].x = local_70.x;
  local_98.m[1].x = local_70.y;
  local_98.m[2].x = local_70.z;
  local_64.x = normal->y * local_70.z - normal->z * local_70.y;
  local_64.y = normal->z * local_70.x - normal->x * local_70.z;
  local_64.z = normal->x * local_70.y - normal->y * local_70.x;
  if (&local_70 != &local_64) {
    local_70.x = local_64.x;
    local_70.y = local_64.y;
    local_70.z = local_64.z;
  }
  iVar21 = 0;
  local_98.m[0].y = local_70.x;
  dVar11 = 0.0;
  dVar1 = 0.0;
  dVar12 = 0.0;
  dVar2 = 0.0;
  dVar13 = 0.0;
  dVar3 = 0.0;
  dVar14 = 0.0;
  dVar4 = 0.0;
  dVar15 = 0.0;
  dVar5 = 0.0;
  dVar16 = 0.0;
  dVar6 = 0.0;
  dVar17 = 0.0;
  dVar7 = 0.0;
  local_98.m[1].y = local_70.y;
  dVar18 = 0.0;
  dVar8 = 0.0;
  local_98.m[2].y = local_70.z;
  pfVar20 = values;
  if (0 < point_count) {
    do {
      pCVar19 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&local_98,&local_4c,positions);
      if (&local_70 != pCVar19) {
        local_70.x = pCVar19->x;
        local_70.y = pCVar19->y;
        local_70.z = pCVar19->z;
      }
      dVar1 = (double)(local_70.x + (float)dVar11);
      positions = positions + 1;
      iVar21 = iVar21 + 1;
      dVar2 = (double)(local_70.y + (float)dVar12);
      dVar3 = (double)(*pfVar20 + (float)dVar13);
      dVar4 = (double)(local_70.x * local_70.x + (float)dVar14);
      dVar5 = (double)(local_70.y * local_70.y + (float)dVar15);
      dVar6 = (double)(local_70.x * local_70.y + (float)dVar16);
      dVar7 = (double)(*pfVar20 * local_70.x + (float)dVar17);
      dVar8 = (double)(*pfVar20 * local_70.y + (float)dVar18);
      pfVar20 = pfVar20 + 1;
      dVar11 = dVar1;
      dVar12 = dVar2;
      dVar13 = dVar3;
      dVar14 = dVar4;
      dVar15 = dVar5;
      dVar16 = dVar6;
      dVar17 = dVar7;
      dVar18 = dVar8;
    } while (iVar21 < point_count);
  }
  uStack_f4 = (undefined4)((ulonglong)dVar8 >> 0x20);
  uStack_c4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_c8 = SUB84(dVar7,0);
  uStack_e4 = (undefined4)((ulonglong)dVar6 >> 0x20);
  local_e8 = SUB84(dVar6,0);
  uStack_cc = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_d0 = SUB84(dVar5,0);
  uStack_bc = (undefined4)((ulonglong)dVar4 >> 0x20);
  local_c0 = SUB84(dVar4,0);
  uStack_d4 = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_d8 = SUB84(dVar3,0);
  uStack_ec = (undefined4)((ulonglong)dVar2 >> 0x20);
  local_f0 = SUB84(dVar2,0);
  uStack_dc = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_e0 = SUB84(dVar1,0);
  local_14 = point_count;
  local_b8 = SUB84((double)point_count,0);
  dVar11 = dVar2 * dVar2 * dVar4 +
           dVar5 * dVar1 * dVar1 +
           (((double)point_count * dVar6 * dVar6 - dVar6 * DOUBLE_00637345 * dVar1 * dVar2) -
           dVar5 * (double)point_count * dVar4);
  local_a0 = SUB84(dVar11,0);
  uStack_9c = (undefined4)((ulonglong)dVar11 >> 0x20);
  if ((((ulonglong)dVar11 & 0x7fffffff00000000) == 0) && (local_a0 == 0)) {
    out_gradient->z = 0.0;
    out_gradient->y = out_gradient->z;
    out_gradient->x = out_gradient->y;
    iVar21 = 0;
    *out_offset = 0.0;
    if (0 < point_count) {
      do {
        fVar9 = *values;
        values = values + 1;
        iVar21 = iVar21 + 1;
        *out_offset = fVar9 + *out_offset;
      } while (iVar21 < point_count);
    }
    *out_offset = *out_offset / (float)point_count;
    return;
  }
  fVar22 = (float10)dVar1;
  local_34 = (double)(fVar22 * (float10)dVar2);
  fVar23 = (float10)dVar3;
  fVar24 = (float10)((double)point_count * dVar6);
  fVar25 = (float10)dVar7;
  local_70.z = 0.0;
  local_70.x = (float)(-((float10)dVar2 * (float10)dVar6 * fVar23 +
                        fVar25 * (float10)point_count * (float10)dVar5 +
                        (((fVar22 * (float10)dVar2 * (float10)dVar8 -
                          fVar22 * fVar23 * (float10)dVar5) - fVar24 * (float10)dVar8) -
                        (float10)(dVar2 * dVar2) * fVar25)) * ((float10)1 / (float10)dVar11));
  local_70.y = (float)(((float10)dVar8 * fVar22 * fVar22 +
                       (((float10)dVar2 * fVar23 * (float10)dVar4 +
                        ((fVar24 * fVar25 + -(float10)dVar6 * fVar22 * fVar23) -
                        (float10)local_34 * fVar25)) -
                       (float10)dVar8 * (float10)point_count * (float10)dVar4)) *
                      ((float10)1 / (float10)dVar11));
  pCVar19 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_98,&local_40,&local_70);
  if (pCVar19 != out_gradient) {
    out_gradient->x = pCVar19->x;
    out_gradient->y = pCVar19->y;
    out_gradient->z = pCVar19->z;
  }
  fVar22 = (float10)(double)CONCAT44(local_e0,uStack_e4);
  *out_offset = (float)(-((float10)(double)CONCAT44(local_d0,uStack_d4) *
                          (float10)(double)CONCAT44(local_c8,uStack_cc) *
                          (float10)(double)CONCAT44(local_b8,uStack_bc) +
                         ((((float10)(double)CONCAT44(local_e8,uStack_ec) * fVar22 *
                            (float10)(double)CONCAT44(local_c0,uStack_c4) +
                           ((float10)(double)CONCAT44(local_d8,uStack_dc) * fVar22 *
                            (float10)(double)CONCAT44(local_f0,uStack_f4) -
                           (float10)(double)CONCAT44(local_d8,uStack_dc) *
                           (float10)(double)CONCAT44(local_c0,uStack_c4) *
                           (float10)(double)CONCAT44(local_c8,uStack_cc))) -
                          (float10)(double)CONCAT44(local_e8,uStack_ec) *
                          (float10)(double)CONCAT44(local_f0,uStack_f4) *
                          (float10)(double)CONCAT44(local_b8,uStack_bc)) -
                         (float10)(double)CONCAT44(local_d0,uStack_d4) * fVar22 * fVar22)) /
                       (float10)(double)CONCAT44(local_98.m[0].x,uStack_9c));
  return;
}


// Assembly code:
// 005151e0: PUSH EBX
//   Label: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
// 005151e1: PUSH ESI
// 005151e2: PUSH EDI
// 005151e3: PUSH EBP
// 005151e4: MOV EBP,ESP
// 005151e6: SUB ESP,0xe8
// 005151ec: AND ESP,0xfffffff8
// 005151ef: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005151f2: MOV EAX,dword ptr [EDX]
// 005151f4: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005151f8: MOV EAX,dword ptr [EDX + 0x4]
// 005151fb: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005151ff: MOV EAX,dword ptr [EDX + 0x8]
// 00515202: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00515209: FLD float ptr [EDX + 0x4]
// 0051520c: FABS
// 0051520e: FLD float ptr [EDX + 0x8]
// 00515211: FABS
// 00515213: FLD float ptr [EDX]
// 00515215: FABS
// 00515217: MOV EAX,dword ptr [EDX]
// 00515219: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00515220: LEA EAX,[EDX + 0x4]
// 00515223: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (WRITE)
// 0051522a: MOV EAX,dword ptr [EAX]
// 0051522c: FXCH
// 0051522e: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (WRITE)
// 00515235: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0051523c: LEA EAX,[EDX + 0x8]
// 0051523f: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00515246: MOV EAX,dword ptr [EAX]
// 00515248: FLD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (READ)
// 0051524f: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00515256: FCOMP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 0051525d: FNSTSW AX
// 0051525f: SAHF
// 00515260: JC 0x0051563f
//   XREF to: 0051563f (CONDITIONAL_JUMP)
// 00515266: FLD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (READ)
// 0051526d: FCOMP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 00515274: FNSTSW AX
// 00515276: SAHF
// 00515277: JC 0x0051563f
//   XREF to: 0051563f (CONDITIONAL_JUMP)
// 0051527d: XOR byte ptr [ESP + 0x8b],0x80
//   XREF to: Stack[-0x6d] (READ_WRITE)
// 00515285: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 0051528c: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00515293: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 0051529a: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005152a1: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x20] (READ)
// 005152a8: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005152af: FLD float ptr [EDX + 0x4]
//   Label: LAB_005152af
// 005152b2: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 005152b9: FLD float ptr [EDX + 0x8]
// 005152bc: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005152c3: FSUBP
// 005152c5: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x58] (WRITE)
// 005152cc: FLD float ptr [EDX + 0x8]
// 005152cf: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005152d6: FLD float ptr [EDX]
// 005152d8: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 005152df: FSUBP
// 005152e1: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x54] (WRITE)
// 005152e8: FLD float ptr [EDX]
// 005152ea: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005152f1: FLD float ptr [EDX + 0x4]
// 005152f4: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005152fb: LEA EBX,[ESP + 0xa0]
//   XREF to: Stack[-0x58] (DATA)
// 00515302: FSUBP
// 00515304: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x70] (DATA)
// 0051530b: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (WRITE)
// 00515312: CMP EAX,EBX
// 00515314: JZ 0x00515340
//   XREF to: 00515340 (CONDITIONAL_JUMP)
// 00515316: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x58] (READ)
// 0051531d: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00515324: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x54] (READ)
// 0051532b: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00515332: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (READ)
// 00515339: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00515340: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_00515340
//   XREF to: Stack[-0x70] (READ)
//   XREF to: Stack[-0x70] (DATA)
// 00515347: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0051534b: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 00515352: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00515356: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 0051535d: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00515361: FLD float ptr [EDX + 0x4]
// 00515364: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 0051536b: FLD float ptr [EDX + 0x8]
// 0051536e: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 00515375: FSUBP
// 00515377: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x64] (WRITE)
// 0051537e: FLD float ptr [EDX + 0x8]
// 00515381: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 00515388: FLD float ptr [EDX]
// 0051538a: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 00515391: FSUBP
// 00515393: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x60] (WRITE)
// 0051539a: FLD float ptr [EDX]
// 0051539c: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005153a3: FLD float ptr [EDX + 0x4]
// 005153a6: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005153ad: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x64] (DATA)
// 005153b4: FSUBP
// 005153b6: LEA EDX,[ESP + 0x88]
//   XREF to: Stack[-0x70] (DATA)
// 005153bd: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x5c] (WRITE)
// 005153c4: CMP EDX,EAX
// 005153c6: JZ 0x005153f2
//   XREF to: 005153f2 (CONDITIONAL_JUMP)
// 005153c8: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x64] (DATA)
// 005153cf: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005153d6: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x60] (READ)
// 005153dd: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005153e4: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x5c] (READ)
// 005153eb: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005153f2: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_005153f2
//   XREF to: Stack[-0x70] (READ)
// 005153f9: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005153fc: XOR EDX,EDX
// 005153fe: XOR ESI,ESI
// 00515400: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 00515404: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xe0] (WRITE)
// 00515408: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0xdc] (WRITE)
// 0051540c: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0xf0] (WRITE)
// 00515410: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0xec] (WRITE)
// 00515414: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0xd8] (WRITE)
// 00515418: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0xd4] (WRITE)
// 0051541c: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0xc0] (WRITE)
// 00515420: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0xbc] (WRITE)
// 00515424: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0xd0] (WRITE)
// 00515428: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0xcc] (WRITE)
// 0051542c: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xe8] (WRITE)
// 00515430: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xe4] (WRITE)
// 00515434: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0xc8] (WRITE)
// 00515438: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 0051543c: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 00515443: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0xf8] (DATA)
// 00515446: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0051544a: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 00515451: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xf4] (WRITE)
// 00515455: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00515459: TEST EDI,EDI
// 0051545b: JLE 0x00515551
//   XREF to: 00515551 (CONDITIONAL_JUMP)
// 00515461: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00515464: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00515467: PUSH EDI
//   Label: LAB_00515467
// 00515468: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x4c] (DATA)
// 0051546f: PUSH EAX
// 00515470: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x98] (DATA)
// 00515474: PUSH EAX
// 00515475: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0051547a: MOV EDX,EAX
// 0051547c: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x70] (DATA)
// 00515483: ADD ESP,0xc
// 00515486: CMP EAX,EDX
// 00515488: JZ 0x005154a7
//   XREF to: 005154a7 (CONDITIONAL_JUMP)
// 0051548a: MOV EAX,dword ptr [EDX]
// 0051548c: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00515493: MOV EAX,dword ptr [EDX + 0x4]
// 00515496: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0051549d: MOV EAX,dword ptr [EDX + 0x8]
// 005154a0: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005154a7: FLD float ptr [ESP + 0x88]
//   Label: LAB_005154a7
//   XREF to: Stack[-0x70] (READ)
// 005154ae: FMUL ST0
// 005154b0: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005154b7: FMUL ST0
// 005154b9: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005154c0: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005154c7: FLD float ptr [EBX]
// 005154c9: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005154d0: FLD float ptr [EBX]
// 005154d2: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005154d9: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005154e0: FADD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xe0] (READ)
// 005154e4: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 005154eb: FXCH
// 005154ed: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xe0] (WRITE)
// 005154f1: FLD float ptr [EBX]
// 005154f3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005154f6: ADD EDI,0xc
// 005154f9: ADD EBX,0x4
// 005154fc: INC ESI
// 005154fd: FXCH
// 005154ff: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 00515503: FXCH
// 00515505: FADD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd8] (READ)
// 00515509: FXCH
// 0051550b: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (WRITE)
// 0051550f: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd8] (WRITE)
// 00515513: FXCH ST4
// 00515515: FADD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc0] (READ)
// 00515519: FXCH ST3
// 0051551b: FADD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd0] (READ)
// 0051551f: FXCH ST2
// 00515521: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe8] (READ)
// 00515525: FXCH
// 00515527: FADD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc8] (READ)
// 0051552b: FXCH ST4
// 0051552d: FADD double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00515530: FXCH ST3
// 00515532: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc0] (WRITE)
// 00515536: FXCH
// 00515538: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd0] (WRITE)
// 0051553c: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe8] (WRITE)
// 00515540: FXCH
// 00515542: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc8] (WRITE)
// 00515546: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00515549: CMP ESI,EAX
// 0051554b: JL 0x00515467
//   XREF to: 00515467 (CONDITIONAL_JUMP)
// 00515551: FLD double ptr [ESP + 0x10]
//   Label: LAB_00515551
//   XREF to: Stack[-0xe8] (READ)
// 00515555: FLD ST0
// 00515557: FMUL double ptr [0x00637345]
//   XREF to: 00637345 (READ)
// 0051555d: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xe0] (READ)
// 00515561: FXCH
// 00515563: FMUL ST1
// 00515565: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00515568: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 0051556c: FXCH
// 0051556e: FMUL ST1
// 00515570: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00515577: FILD dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x14] (READ)
// 0051557e: FST double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb8] (WRITE)
// 00515582: FMUL ST4
// 00515584: FST double ptr [ESP + 0x50]
//   XREF to: Stack[-0xa8] (WRITE)
// 00515588: FMULP ST4
// 0051558a: FSUBP ST3,ST0
// 0051558c: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd0] (READ)
// 00515590: FLD ST0
// 00515592: FMUL double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb8] (READ)
// 00515596: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc0] (READ)
// 0051559a: FXCH
// 0051559c: FMUL ST1
// 0051559e: FSUBP ST5,ST0
// 005155a0: FXCH
// 005155a2: FMUL ST3
// 005155a4: FMULP ST3
// 005155a6: FXCH ST2
// 005155a8: FADDP ST3,ST0
// 005155aa: FMUL ST0
// 005155ac: FST double ptr [ESP + 0x48]
//   XREF to: Stack[-0xb0] (WRITE)
// 005155b0: FMULP
// 005155b2: FADDP
// 005155b4: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0xa0] (WRITE)
// 005155b8: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x9c] (READ)
// 005155bc: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0xa0] (READ)
// 005155c0: TEST EDX,0x7fffffff
// 005155c6: JNZ 0x005156d3
//   XREF to: 005156d3 (CONDITIONAL_JUMP)
// 005155cc: TEST ECX,ECX
// 005155ce: JNZ 0x005156d3
//   XREF to: 005156d3 (CONDITIONAL_JUMP)
// 005155d4: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005155d7: MOV dword ptr [EAX + 0x8],0x0
// 005155de: MOV EDX,dword ptr [EAX + 0x8]
// 005155e1: MOV dword ptr [EAX + 0x4],EDX
// 005155e4: MOV EDX,dword ptr [EAX + 0x4]
// 005155e7: MOV dword ptr [EAX],EDX
// 005155e9: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005155ec: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005155ef: XOR EDX,EDX
// 005155f1: MOV dword ptr [EAX],0x0
// 005155f7: TEST EDI,EDI
// 005155f9: JLE 0x00515620
//   XREF to: 00515620 (CONDITIONAL_JUMP)
// 005155fb: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005155fe: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00515601: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00515604: FLD float ptr [EAX]
//   Label: LAB_00515604
// 00515606: ADD EAX,0x4
// 00515609: FADD float ptr [EBX]
// 0051560b: INC EDX
// 0051560c: FSTP float ptr [EBX]
// 0051560e: CMP EDX,ECX
// 00515610: JL 0x00515604
//   XREF to: 00515604 (CONDITIONAL_JUMP)
// 00515612: LEA EAX,[EAX]
// 00515618: LEA EDX,[EDX]
// 0051561e: MOV EAX,EAX
// 00515620: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00515620
//   XREF to: Stack[0x4] (READ)
// 00515623: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051562a: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0051562d: FILD dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x14] (READ)
// 00515634: FDIVR float ptr [EAX]
// 00515636: FSTP float ptr [EAX]
// 00515638: MOV ESP,EBP
// 0051563a: POP EBP
// 0051563b: POP EDI
// 0051563c: POP ESI
// 0051563d: POP EBX
// 0051563e: RET
// 0051563f: FLD float ptr [ESP + 0xe0]
//   Label: LAB_0051563f
//   XREF to: Stack[-0x18] (READ)
// 00515646: FCOMP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (READ)
// 0051564d: FNSTSW AX
// 0051564f: SAHF
// 00515650: JC 0x0051569c
//   XREF to: 0051569c (CONDITIONAL_JUMP)
// 00515652: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 00515659: FCOMP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 00515660: FNSTSW AX
// 00515662: SAHF
// 00515663: JC 0x0051569c
//   XREF to: 0051569c (CONDITIONAL_JUMP)
// 00515665: XOR byte ptr [ESP + 0x8f],0x80
//   XREF to: Stack[-0x69] (READ_WRITE)
// 0051566d: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x6c] (READ)
// 00515674: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0051567b: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 00515682: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00515689: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x28] (READ)
// 00515690: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00515697: JMP 0x005152af
//   XREF to: 005152af (UNCONDITIONAL_JUMP)
// 0051569c: XOR byte ptr [ESP + 0x93],0x80
//   Label: LAB_0051569c
//   XREF to: Stack[-0x65] (READ_WRITE)
// 005156a4: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x68] (READ)
// 005156ab: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005156b2: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x70] (READ)
// 005156b9: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005156c0: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x24] (READ)
// 005156c7: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005156ce: JMP 0x005152af
//   XREF to: 005152af (UNCONDITIONAL_JUMP)
// 005156d3: FLD double ptr [ESP + 0x18]
//   Label: LAB_005156d3
//   XREF to: Stack[-0xe0] (READ)
// 005156d7: FLD ST0
// 005156d9: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 005156dd: FST double ptr [ESP + 0xc4]
//   XREF to: Stack[-0x34] (WRITE)
// 005156e4: FMUL double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005156e7: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd8] (READ)
// 005156eb: FLD ST2
// 005156ed: FMUL ST1
// 005156ef: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd0] (READ)
// 005156f3: FXCH
// 005156f5: FMUL ST1
// 005156f7: FSUBP ST3,ST0
// 005156f9: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0xa8] (READ)
// 005156fd: FLD ST0
// 005156ff: FMUL double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00515702: FSUBP ST4,ST0
// 00515704: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc8] (READ)
// 00515708: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0xb0] (READ)
// 0051570c: FMUL ST1
// 0051570e: FSUBP ST5,ST0
// 00515710: FLD ST0
// 00515712: FMUL double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb8] (READ)
// 00515716: FMULP ST3
// 00515718: FXCH ST2
// 0051571a: FADDP ST4,ST0
// 0051571c: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe8] (READ)
// 00515720: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 00515724: FMUL ST1
// 00515726: FMUL ST4
// 00515728: FADDP ST5,ST0
// 0051572a: FXCH ST4
// 0051572c: FCHS
// 0051572e: FLD1
// 00515730: FDIV double ptr [ESP + 0x58]
//   XREF to: Stack[-0xa0] (READ)
// 00515734: FXCH ST5
// 00515736: FCHS
// 00515738: FMUL ST6
// 0051573a: FMUL ST4
// 0051573c: FXCH ST2
// 0051573e: FMUL ST3
// 00515740: FADDP ST2,ST0
// 00515742: FLD double ptr [ESP + 0xc4]
//   XREF to: Stack[-0x34] (READ)
// 00515749: FMULP ST3
// 0051574b: FXCH ST2
// 0051574d: FSUBP
// 0051574f: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 00515753: FMULP ST3
// 00515755: FXCH ST2
// 00515757: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc0] (READ)
// 0051575b: FXCH
// 0051575d: FMUL ST1
// 0051575f: FADDP ST3,ST0
// 00515761: FLD double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00515764: FMUL double ptr [ESP + 0x40]
//   XREF to: Stack[-0xb8] (READ)
// 00515768: FMULP
// 0051576a: FSUBP ST2,ST0
// 0051576c: FLD double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 0051576f: FMUL ST4
// 00515771: FMULP ST4
// 00515773: FMUL ST2
// 00515775: FXCH ST3
// 00515777: FADDP
// 00515779: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x70] (DATA)
// 00515780: FMULP
// 00515782: PUSH EAX
// 00515783: LEA EAX,[ESP + 0xbc]
//   XREF to: Stack[-0x40] (DATA)
// 0051578a: XOR EBX,EBX
// 0051578c: PUSH EAX
// 0051578d: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x98] (DATA)
// 00515791: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x68] (WRITE)
// 00515798: PUSH EAX
// 00515799: FXCH
// 0051579b: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x70] (WRITE)
// 005157a2: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x6c] (WRITE)
// 005157a9: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005157ae: ADD ESP,0xc
// 005157b1: MOV ESI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005157b4: CMP EAX,ESI
// 005157b6: JZ 0x005157c8
//   XREF to: 005157c8 (CONDITIONAL_JUMP)
// 005157b8: MOV EDX,dword ptr [EAX]
// 005157ba: MOV dword ptr [ESI],EDX
// 005157bc: MOV EDX,dword ptr [EAX + 0x4]
// 005157bf: MOV dword ptr [ESI + 0x4],EDX
// 005157c2: MOV EDX,dword ptr [EAX + 0x8]
// 005157c5: MOV dword ptr [ESI + 0x8],EDX
// 005157c8: FLD double ptr [ESP + 0x18]
//   Label: LAB_005157c8
//   XREF to: Stack[-0xe0] (READ)
// 005157cc: FLD ST0
// 005157ce: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe8] (READ)
// 005157d2: FXCH
// 005157d4: FMUL ST1
// 005157d6: FLD double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005157d9: FXCH
// 005157db: FMUL ST1
// 005157dd: FXCH ST3
// 005157df: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0xc8] (READ)
// 005157e3: FXCH
// 005157e5: FMUL ST1
// 005157e7: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd0] (READ)
// 005157eb: FXCH
// 005157ed: FMUL ST1
// 005157ef: FSUBP ST5,ST0
// 005157f1: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 005157f5: FLD ST0
// 005157f7: FMUL ST5
// 005157f9: FMULP ST3
// 005157fb: FXCH ST2
// 005157fd: FADDP ST5,ST0
// 005157ff: FXCH
// 00515801: FMULP ST2
// 00515803: FXCH
// 00515805: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc0] (READ)
// 00515809: FXCH
// 0051580b: FMUL ST1
// 0051580d: FSUBP ST4,ST0
// 0051580f: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xd8] (READ)
// 00515813: FLD ST0
// 00515815: FMUL ST4
// 00515817: FMULP ST4
// 00515819: FXCH ST3
// 0051581b: FSUBP ST4,ST0
// 0051581d: FXCH ST2
// 0051581f: FMULP
// 00515821: FMULP
// 00515823: FADDP
// 00515825: FCHS
// 00515827: FDIV double ptr [ESP + 0x58]
//   XREF to: Stack[-0xa0] (READ)
// 0051582b: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0051582e: FSTP float ptr [EAX]
// 00515830: MOV ESP,EBP
// 00515832: POP EBP
// 00515833: POP EDI
// 00515834: POP ESI
// 00515835: POP EBX
// 00515836: RET
