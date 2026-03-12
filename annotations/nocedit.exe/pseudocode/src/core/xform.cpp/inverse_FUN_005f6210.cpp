// Name: core_xform.cpp_inverse_FUN_005f6210
// Address: 005f6210
// Address Range: [[005f6210, 005f6458]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  double dVar5;
  int local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  CMatrix3x4f *local_10;
  
  bVar4 = 0;
  local_10 = matrix_out;
  dVar5 = core_xform_cpp_determinant_FUN_005f61c0(matrix_in);
  local_20 = dVar5;
  local_98 = SUB84(__BITCAST_UINT64(dVar5),0);
  if ((((ulonglong)dVar5 & 0x7fffffff00000000) == 0) && (local_98 == 0)) {
    g_CurrentFilename = "..\\core\\xform.cpp";
    g_CurrentLineNumber = 0x23e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("inverse() - Singular matrix");
  }
  fVar1 = matrix_in->m[1].x * matrix_in->m[2].y - matrix_in->m[1].y * matrix_in->m[2].x;
  local_60 = (double)fVar1;
  fVar2 = -(matrix_in->m[1].w * matrix_in->m[2].y - matrix_in->m[1].y * matrix_in->m[2].w);
  local_28 = (double)fVar2;
  dVar7 = 1.0 / dVar5;
  fVar3 = matrix_in->m[1].w * matrix_in->m[2].x - matrix_in->m[1].x * matrix_in->m[2].w;
  local_48 = (double)fVar3;
  fVar4 = -(matrix_in->m[0].x * matrix_in->m[2].y - matrix_in->m[0].y * matrix_in->m[2].x);
  local_58 = (double)fVar4;
  fVar5 = matrix_in->m[0].w * matrix_in->m[2].y - matrix_in->m[0].y * matrix_in->m[2].w;
  local_50 = (double)fVar5;
  fVar6 = -(matrix_in->m[0].w * matrix_in->m[2].x - matrix_in->m[0].x * matrix_in->m[2].w);
  local_18 = (double)fVar6;
  local_90 = fVar1 * (float)dVar7;
  local_8c = fVar4 * (float)dVar7;
  local_88 = (matrix_in->m[0].x * matrix_in->m[1].y - matrix_in->m[0].y * matrix_in->m[1].x) *
             (float)dVar7;
  local_80 = fVar2 * (float)dVar7;
  fVar1 = matrix_in->m[0].w * matrix_in->m[1].x - matrix_in->m[0].x * matrix_in->m[1].w;
  local_30 = (double)fVar1;
  local_7c = fVar5 * (float)dVar7;
  local_78 = -(matrix_in->m[0].w * matrix_in->m[1].y - matrix_in->m[0].y * matrix_in->m[1].w) *
             (float)dVar7;
  local_70 = fVar3 * (float)dVar7;
  local_6c = fVar6 * (float)dVar7;
  local_68 = fVar1 * (float)dVar7;
  local_84 = -(matrix_in->m[2].z * local_88 +
              matrix_in->m[0].z * local_90 + matrix_in->m[1].z * local_8c);
  local_74 = -(matrix_in->m[2].z * local_78 +
              matrix_in->m[1].z * local_7c + matrix_in->m[0].z * local_80);
  local_64 = -(matrix_in->m[2].z * local_68 +
              matrix_in->m[1].z * local_6c + matrix_in->m[0].z * local_70);
  pfVar2 = &local_90;
  pCVar3 = local_10;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2;
    pCVar3 = pCVar3;
  }
  return local_10;
}
