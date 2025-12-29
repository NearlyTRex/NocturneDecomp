// Name: core_xform.cpp_inverse_FUN_005f6210
// Address: 005f6210
// Address Range: [[005f6210, 005f6458]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix)

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *output_matrix,CMatrix3x4f *input_matrix)

{
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  CMatrix3x4f *unaff_EDI;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  double dVar6;
  uint local_8c;
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
  float local_60;
  float fStack_5c;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_28;
  uint local_20;
  int iStack_1c;
  uint local_18;
  
  bVar5 = 0;
  dVar6 = core_xform_cpp_determinant_FUN_005f61c0(output_matrix);
  iStack_1c = SUB84 /* extract 2-byte value */(dVar6,0);
  local_18 = (uint)((ulonglong)dVar6 >> 0x20);
  uVar1 = local_18;
  if ((((ulonglong)dVar6 & 0x7fffffff00000000) == 0) && (iStack_1c == 0)) {
    g_CurrentFilename = "..\\core\\xform.cpp";
    g_CurrentLineNumber = 0x23e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("inverse() - Singular matrix");
  }
  local_88 = output_matrix->m[1].x * output_matrix->m[2].y -
             output_matrix->m[1].y * output_matrix->m[2].x;
  local_58 = (double)local_88;
  local_78 = -(output_matrix->m[1].w * output_matrix->m[2].y -
              output_matrix->m[1].y * output_matrix->m[2].w);
  dVar6 = (double)local_78;
  local_20 = SUB84 /* extract 2-byte value */(dVar6,0);
  iStack_1c = (int)((ulonglong)dVar6 >> 0x20);
  dVar6 = 1.0 / (double)CONCAT44 /* combine 2-byte values */(local_8c,uVar1);
  local_68 = output_matrix->m[1].w * output_matrix->m[2].x -
             output_matrix->m[1].x * output_matrix->m[2].w;
  dStack_40 = (double)local_68;
  local_84 = -(output_matrix->m[0].x * output_matrix->m[2].y -
              output_matrix->m[0].y * output_matrix->m[2].x);
  local_50 = (double)local_84;
  local_74 = output_matrix->m[0].w * output_matrix->m[2].y -
             output_matrix->m[0].y * output_matrix->m[2].w;
  local_48 = (double)local_74;
  local_88 = local_88 * (float)dVar6;
  local_84 = local_84 * (float)dVar6;
  local_80 = (output_matrix->m[0].x * output_matrix->m[1].y -
             output_matrix->m[0].y * output_matrix->m[1].x) * (float)dVar6;
  local_78 = local_78 * (float)dVar6;
  local_60 = output_matrix->m[0].w * output_matrix->m[1].x -
             output_matrix->m[0].x * output_matrix->m[1].w;
  local_28 = (double)local_60;
  local_74 = local_74 * (float)dVar6;
  local_70 = -(output_matrix->m[0].w * output_matrix->m[1].y -
              output_matrix->m[0].y * output_matrix->m[1].w) * (float)dVar6;
  local_68 = local_68 * (float)dVar6;
  local_64 = -(output_matrix->m[0].w * output_matrix->m[2].x -
              output_matrix->m[0].x * output_matrix->m[2].w) * (float)dVar6;
  local_60 = local_60 * (float)dVar6;
  local_7c = -(output_matrix->m[2].z * local_80 +
              output_matrix->m[0].z * local_88 + output_matrix->m[1].z * local_84);
  local_6c = -(output_matrix->m[2].z * local_70 +
              output_matrix->m[1].z * local_74 + output_matrix->m[0].z * local_78);
  fStack_5c = -(output_matrix->m[2].z * local_60 +
               output_matrix->m[1].z * local_64 + output_matrix->m[0].z * local_68);
  pfVar3 = &local_88;
  pCVar4 = unaff_EDI;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return unaff_EDI;
}
