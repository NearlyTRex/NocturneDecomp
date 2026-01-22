// Name: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// Address: 005f7000
// Address Range: [[005f7000, 005f713c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * core_xform.cpp_buildMirrorTransform_FUN_005f7000(CMatrix3x4f * matrix_out, CVector3f * axis_vector, float distance)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi
core_xform_cpp_buildMirrorTransform_FUN_005f7000
          (CMatrix3x4f *matrix_out,CVector3f *axis_vector,float distance)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *euler_angles;
  int iVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float local_1a4 [12];
  CMatrix3x4f local_174;
  CMatrix3x4f local_144;
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  bVar9 = 0;
  fVar1 = matrix_out->m[0].x;
  fVar2 = matrix_out->m[0].w;
  fVar3 = matrix_out->m[0].y;
  local_c = (float)axis_vector / (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_24.x = matrix_out->m[0].w * local_c;
  local_24.y = matrix_out->m[0].x * local_c;
  local_24.z = matrix_out->m[0].y * local_c;
  euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_18,(CVector3f *)matrix_out);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&local_84,&local_24,euler_angles);
  core_xform_cpp_inverse_FUN_005f6210(&local_84,&local_54);
  pCVar7 = &local_b4;
  pCVar6 = &local_54;
  pCVar8 = &local_b4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar8->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0((CMatrix3x4f *)0x0,(float)local_1a4);
  pfVar5 = local_1a4;
  pCVar6 = &local_114;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar6->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_84,&local_114,&local_174);
  pCVar6 = &local_174;
  pCVar8 = &local_e4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar8->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_e4,pCVar7,&local_144);
  pCVar7 = &local_144;
  pfVar5 = (float *)distance;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = pCVar7->m[0].w;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
  }
  return (CMatrix3x4f *)distance;
}
