// Name: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// Address: 005f7000
// Address Range: [[005f7000, 005f713c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_005f7000(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_005f7000(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)

{
  float fVar1;
  CVector3f *euler_angles;
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar7;
  byte bVar5;
  CMatrix3x4f local_1a4;
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
  
  bVar5 = 0;
  fVar1 = distance /
          (axis_vector->z * axis_vector->z +
          axis_vector->x * axis_vector->x + axis_vector->y * axis_vector->y);
  local_24.x = axis_vector->x * fVar1;
  local_24.y = axis_vector->y * fVar1;
  local_24.z = axis_vector->z * fVar1;
  euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_18,axis_vector);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&local_84,&local_24,euler_angles);
  core_xform_cpp_inverse_FUN_005f6210(&local_84,&local_54);
  pCVar7 = &local_b4;
  pCVar5 = &local_54;
  pCVar6 = &local_b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar6->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(0.0,&local_1a4);
  pCVar5 = &local_1a4;
  pCVar6 = &local_114;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_84,&local_114,&local_174);
  pCVar2 = &local_174;
  pCVar4 = &local_e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    pCVar4->m[0].w = pCVar2->m[0].w;
    pCVar2 = pCVar2;
    pCVar4 = pCVar4;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_e4,pCVar7,&local_144);
  pCVar3 = &local_144;
  pCVar7 = matrix_out;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pCVar7->m[0].w = pCVar3->m[0].w;
    pCVar3 = pCVar3;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return matrix_out;
}
