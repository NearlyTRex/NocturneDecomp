// Name: core_xform.cpp_buildMirrorTransform_FUN_0055caf0
// Address: 0055caf0
// Address Range: [[0055caf0, 0055cc2c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_0055caf0(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_0055caf0(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)

{
  CVector3f *euler_angles;
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
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
  local_c = distance /
            (axis_vector->z * axis_vector->z +
            axis_vector->x * axis_vector->x + axis_vector->y * axis_vector->y);
  local_24.x = axis_vector->x * local_c;
  local_24.y = axis_vector->y * local_c;
  local_24.z = axis_vector->z * local_c;
  euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (&local_18,axis_vector);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(&local_84,&local_24,euler_angles);
  core_xform_cpp_inverse_FUN_0055bd00(&local_84,&local_54);
  pCVar3 = &local_b4;
  pCVar2 = &local_54;
  pCVar4 = &local_b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0.0,&local_1a4);
  pCVar2 = &local_1a4;
  pCVar4 = &local_114;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_84,&local_114,&local_174);
  pCVar2 = &local_174;
  pCVar4 = &local_e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_e4,pCVar3,&local_144);
  pCVar3 = &local_144;
  pCVar2 = matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return matrix_out;
}
