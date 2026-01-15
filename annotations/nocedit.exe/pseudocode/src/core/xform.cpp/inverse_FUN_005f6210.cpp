// Name: core_xform.cpp_inverse_FUN_005f6210
// Address: 005f6210
// Address Range: [[005f6210, 005f6458]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix)

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *output_matrix,CMatrix3x4f *input_matrix)

{
  int iVar1;
  CMatrix3x4f *unaff_ESI;
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
  
  bVar4 = 0;
  dVar5 = core_xform_cpp_determinant_FUN_005f61c0(output_matrix);
  local_20 = dVar5;
  local_98 = SUB84 /* extract 2-byte value */(dVar5,0);
  if ((((ulonglong)dVar5 & 0x7fffffff00000000) == 0) && (local_98 == 0)) {
    g_CurrentFilename = "..\\core\\xform.cpp";
    g_CurrentLineNumber = 0x23e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("inverse() - Singular matrix");
  }
  local_90 = output_matrix->m[1].x * output_matrix->m[2].y -
             output_matrix->m[1].y * output_matrix->m[2].x;
  local_60 = (double)local_90;
  local_80 = -(output_matrix->m[1].w * output_matrix->m[2].y -
              output_matrix->m[1].y * output_matrix->m[2].w);
  local_28 = (double)local_80;
  dVar5 = 1.0 / dVar5;
  local_70 = output_matrix->m[1].w * output_matrix->m[2].x -
             output_matrix->m[1].x * output_matrix->m[2].w;
  local_48 = (double)local_70;
  local_8c = -(output_matrix->m[0].x * output_matrix->m[2].y -
              output_matrix->m[0].y * output_matrix->m[2].x);
  local_58 = (double)local_8c;
  local_7c = output_matrix->m[0].w * output_matrix->m[2].y -
             output_matrix->m[0].y * output_matrix->m[2].w;
  local_50 = (double)local_7c;
  local_6c = -(output_matrix->m[0].w * output_matrix->m[2].x -
              output_matrix->m[0].x * output_matrix->m[2].w);
  local_18 = (double)local_6c;
  local_90 = local_90 * (float)dVar5;
  local_8c = local_8c * (float)dVar5;
  local_88 = (output_matrix->m[0].x * output_matrix->m[1].y -
             output_matrix->m[0].y * output_matrix->m[1].x) * (float)dVar5;
  local_80 = local_80 * (float)dVar5;
  local_68 = output_matrix->m[0].w * output_matrix->m[1].x -
             output_matrix->m[0].x * output_matrix->m[1].w;
  local_30 = (double)local_68;
  local_7c = local_7c * (float)dVar5;
  local_78 = -(output_matrix->m[0].w * output_matrix->m[1].y -
              output_matrix->m[0].y * output_matrix->m[1].w) * (float)dVar5;
  local_70 = local_70 * (float)dVar5;
  local_6c = local_6c * (float)dVar5;
  local_68 = local_68 * (float)dVar5;
  local_84 = -(output_matrix->m[2].z * local_88 +
              output_matrix->m[0].z * local_90 + output_matrix->m[1].z * local_8c);
  local_74 = -(output_matrix->m[2].z * local_78 +
              output_matrix->m[1].z * local_7c + output_matrix->m[0].z * local_80);
  local_64 = -(output_matrix->m[2].z * local_68 +
              output_matrix->m[1].z * local_6c + output_matrix->m[0].z * local_70);
  pfVar2 = &local_90;
  pCVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return unaff_ESI;
}
