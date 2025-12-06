// Name: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// Address: 005f7000
// Address Range: [[005f7000, 005f713c]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_buildMirrorTransform_FUN_005f7000(CMatrix3x4f * matrix_out, CVector3f * axis_vector, float distance)

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_buildMirrorTransform_FUN_005f7000
          (CMatrix3x4f *matrix_out,CVector3f *axis_vector,float distance)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *euler_angles;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *unaff_ESI;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  CMatrix3x4f *in_stack_fffffe64;
  CMatrix3x4f *in_stack_fffffe68;
  CMatrix3x4f *in_stack_fffffe6c;
  CMatrix3x4f *in_stack_fffffe70;
  uint auStack_160 [13];
  float afStack_12c [9];
  uint uStack_108;
  CMatrix3x4f CStack_104;
  uint uStack_d4;
  CMatrix3x4f CStack_d0;
  byte auStack_80 [12];
  CMatrix3x4f CStack_74;
  float local_24;
  byte local_20 [20];
  float local_c;
  
  bVar10 = 0;
  fVar1 = matrix_out->m[0].x;
  fVar2 = matrix_out->m[0].w;
  fVar3 = matrix_out->m[0].y;
  local_c = (float)axis_vector / (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_24 = matrix_out->m[0].w * local_c;
  local_20._0_4_ = matrix_out->m[0].x * local_c;
  local_20._4_4_ = matrix_out->m[0].y * local_c;
  euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           ((CVector3f *)(local_20 + 8),(CVector3f *)matrix_out);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_80,(CVector3f *)local_20,euler_angles);
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)(auStack_80 + 4),in_stack_fffffe64);
  pfVar6 = &CStack_74.m[2].z;
  pfVar7 = &CStack_d0.m[2].x;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0((CMatrix3x4f *)0x0,(float)&CStack_d0.m[2].y);
  puVar5 = (uint *)&stack0xfffffe6c;
  puVar8 = &uStack_108;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_74,&CStack_104,in_stack_fffffe68);
  puVar5 = auStack_160;
  puVar8 = &uStack_d4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_d0,in_stack_fffffe6c,in_stack_fffffe70);
  pfVar6 = afStack_12c;
  pCVar9 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar9->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
  }
  return unaff_ESI;
}
