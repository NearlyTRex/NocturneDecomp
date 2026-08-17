// Name: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_00442d9c
// Address: 00442d9c
// Address Range: [[00442d9c, 00443047]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_00442d9c(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_00442d9c(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)

{
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  int unaff_EBP;
  double dVar4;
  CMatrix3x3f *in_stack_00000028;
  
  *(uint *)(unaff_EBP + 0x148c) = *(uint *)(unaff_EBP + 0x16c);
  *(uint *)(unaff_EBP + 0x1490) = *(uint *)(unaff_EBP + 0x170);
  *(uint *)(unaff_EBP + 0x1494) = *(uint *)(unaff_EBP + 0x174);
  if ((uint *)(unaff_EBP + 0x1498) != (uint *)(unaff_EBP + 0x104)) {
    *(uint *)(unaff_EBP + 0x1498) = *(uint *)(unaff_EBP + 0x104);
    *(uint *)(unaff_EBP + 0x149c) = *(uint *)(unaff_EBP + 0x108);
    *(uint *)(unaff_EBP + 0x14a0) = *(uint *)(unaff_EBP + 0x10c);
  }
  *(uint *)(unaff_EBP + 0x14a4) = *(uint *)(unaff_EBP + 0x178);
  *(uint *)(unaff_EBP + 0x14a8) = *(uint *)(unaff_EBP + 0x17c);
  *(uint *)(unaff_EBP + 0x14ac) = *(uint *)(unaff_EBP + 0x180);
  *(uint *)(unaff_EBP + 0x14b0) = *(uint *)(unaff_EBP + 0x184);
  *(uint *)(unaff_EBP + 0x14b4) = *(uint *)(unaff_EBP + 0x188);
  *(uint *)(unaff_EBP + 0x14b8) = *(uint *)(unaff_EBP + 0x18c);
  *(uint *)(unaff_EBP + 0x14bc) = *(uint *)(unaff_EBP + 400);
  *(uint *)(unaff_EBP + 0x14c0) = *(uint *)(unaff_EBP + 0x194);
  *(uint *)(unaff_EBP + 0x14c4) = *(uint *)(unaff_EBP + 0x198);
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                     (in_stack_00000028,(CVector3f *)&rotation_matrix,(CVector3f *)&stack0x00000000)
  ;
  if ((CVector3f *)(unaff_EBP + 0x104) != pCVar3) {
    ((CVector3f *)(unaff_EBP + 0x104))->x = pCVar3->x;
    *(float *)(unaff_EBP + 0x108) = pCVar3->y;
    *(float *)(unaff_EBP + 0x10c) = pCVar3->z;
  }
  *(int *)(unaff_EBP + 0x16c) = (int)ROUND(*(float *)(unaff_EBP + 0x104) * 256.0f);
  *(int *)(unaff_EBP + 0x170) = (int)ROUND(*(float *)(unaff_EBP + 0x108) * 256.0f);
  *(int *)(unaff_EBP + 0x174) = (int)ROUND(*(float *)(unaff_EBP + 0x10c) * 256.0f);
  iVar1 = *(int *)(unaff_EBP + 0x14a4);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * in_stack_00000028->m[2].x +
                             (float)*(int *)(unaff_EBP + 0x14a4) * in_stack_00000028->m[0].x +
                             (float)*(int *)(unaff_EBP + 0x14a8) * in_stack_00000028->m[1].x));
  *(int *)(unaff_EBP + 0x178) = (int)ROUND(dVar4);
  iVar2 = *(int *)(unaff_EBP + 0x14a4);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * in_stack_00000028->m[2].y +
                             (float)*(int *)(unaff_EBP + 0x14a8) * in_stack_00000028->m[1].y +
                             (float)iVar1 * in_stack_00000028->m[0].y));
  *(int *)(unaff_EBP + 0x17c) = (int)ROUND(dVar4);
  iVar1 = *(int *)(unaff_EBP + 0x14b4);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * in_stack_00000028->m[2].z +
                             (float)*(int *)(unaff_EBP + 0x14a8) * in_stack_00000028->m[1].z +
                             (float)iVar2 * in_stack_00000028->m[0].z));
  *(int *)(unaff_EBP + 0x180) = (int)ROUND(dVar4);
  iVar2 = *(int *)(unaff_EBP + 0x14b0);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * in_stack_00000028->m[2].x +
                             (float)*(int *)(unaff_EBP + 0x14b0) * in_stack_00000028->m[0].x +
                             (float)iVar1 * in_stack_00000028->m[1].x));
  *(int *)(unaff_EBP + 0x184) = (int)ROUND(dVar4);
  iVar1 = *(int *)(unaff_EBP + 0x14b0);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * in_stack_00000028->m[2].y +
                             (float)*(int *)(unaff_EBP + 0x14b4) * in_stack_00000028->m[1].y +
                             (float)iVar2 * in_stack_00000028->m[0].y));
  *(int *)(unaff_EBP + 0x188) = (int)ROUND(dVar4);
  iVar2 = *(int *)(unaff_EBP + 0x14c0);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * in_stack_00000028->m[2].z +
                             (float)*(int *)(unaff_EBP + 0x14b4) * in_stack_00000028->m[1].z +
                             (float)iVar1 * in_stack_00000028->m[0].z));
  *(int *)(unaff_EBP + 0x18c) = (int)ROUND(dVar4);
  iVar1 = *(int *)(unaff_EBP + 0x14bc);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * in_stack_00000028->m[2].x +
                             (float)*(int *)(unaff_EBP + 0x14bc) * in_stack_00000028->m[0].x +
                             (float)iVar2 * in_stack_00000028->m[1].x));
  *(int *)(unaff_EBP + 400) = (int)ROUND(dVar4);
  iVar2 = *(int *)(unaff_EBP + 0x14bc);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * in_stack_00000028->m[2].y +
                             (float)*(int *)(unaff_EBP + 0x14c0) * in_stack_00000028->m[1].y +
                             (float)iVar1 * in_stack_00000028->m[0].y));
  *(int *)(unaff_EBP + 0x194) = (int)ROUND(dVar4);
  dVar4 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * in_stack_00000028->m[2].z +
                             (float)*(int *)(unaff_EBP + 0x14c0) * in_stack_00000028->m[1].z +
                             (float)iVar2 * in_stack_00000028->m[0].z));
  *(int *)(unaff_EBP + 0x198) = (int)ROUND(dVar4);
  return;
}
