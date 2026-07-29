// Name: core_dcamera.cpp_FUN_00442d9c
// Address: 00442d9c
// Address Range: [[00442d9c, 00443047]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00442d9c(void)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00442d9c(void)

{
  int iVar1;
  int iVar2;
  CMatrix3x3f *pCVar3;
  CVector3f *pCVar4;
  int in_EDX;
  int unaff_EBP;
  double dVar5;
  float fStack00000004;
  float fStack00000008;
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
  fStack00000004 = *(float *)(in_EDX + 4) - *(float *)(unaff_EBP + 0x108);
  fStack00000008 = *(float *)(in_EDX + 8) - *(float *)(unaff_EBP + 0x10c);
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                     (in_stack_00000028,(CVector3f *)&stack0x0000000c,(CVector3f *)&stack0x00000000)
  ;
  pCVar3 = in_stack_00000028;
  if ((CVector3f *)(unaff_EBP + 0x104) != pCVar4) {
    ((CVector3f *)(unaff_EBP + 0x104))->x = pCVar4->x;
    *(float *)(unaff_EBP + 0x108) = pCVar4->y;
    *(float *)(unaff_EBP + 0x10c) = pCVar4->z;
  }
  *(int *)(unaff_EBP + 0x16c) = (int)ROUND(*(float *)(unaff_EBP + 0x104) * 256.0f);
  *(int *)(unaff_EBP + 0x170) = (int)ROUND(*(float *)(unaff_EBP + 0x108) * 256.0f);
  *(int *)(unaff_EBP + 0x174) = (int)ROUND(*(float *)(unaff_EBP + 0x10c) * 256.0f);
  iVar1 = *(int *)(unaff_EBP + 0x14a4);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * in_stack_00000028->m[2].x +
                             (float)*(int *)(unaff_EBP + 0x14a4) * in_stack_00000028->m[0].x +
                             (float)*(int *)(unaff_EBP + 0x14a8) * in_stack_00000028->m[1].x));
  *(int *)(unaff_EBP + 0x178) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14a4);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * pCVar3->m[2].y +
                             (float)*(int *)(unaff_EBP + 0x14a8) * pCVar3->m[1].y +
                             (float)iVar1 * pCVar3->m[0].y));
  *(int *)(unaff_EBP + 0x17c) = (int)ROUND(dVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14b4);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * pCVar3->m[2].z +
                             (float)*(int *)(unaff_EBP + 0x14a8) * pCVar3->m[1].z +
                             (float)iVar2 * pCVar3->m[0].z));
  *(int *)(unaff_EBP + 0x180) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14b0);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * pCVar3->m[2].x +
                             (float)*(int *)(unaff_EBP + 0x14b0) * pCVar3->m[0].x +
                             (float)iVar1 * pCVar3->m[1].x));
  *(int *)(unaff_EBP + 0x184) = (int)ROUND(dVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14b0);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * pCVar3->m[2].y +
                             (float)*(int *)(unaff_EBP + 0x14b4) * pCVar3->m[1].y +
                             (float)iVar2 * pCVar3->m[0].y));
  *(int *)(unaff_EBP + 0x188) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14c0);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * pCVar3->m[2].z +
                             (float)*(int *)(unaff_EBP + 0x14b4) * pCVar3->m[1].z +
                             (float)iVar1 * pCVar3->m[0].z));
  *(int *)(unaff_EBP + 0x18c) = (int)ROUND(dVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14bc);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * pCVar3->m[2].x +
                             (float)*(int *)(unaff_EBP + 0x14bc) * pCVar3->m[0].x +
                             (float)iVar2 * pCVar3->m[1].x));
  *(int *)(unaff_EBP + 400) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14bc);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * pCVar3->m[2].y +
                             (float)*(int *)(unaff_EBP + 0x14c0) * pCVar3->m[1].y +
                             (float)iVar1 * pCVar3->m[0].y));
  *(int *)(unaff_EBP + 0x194) = (int)ROUND(dVar5);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * pCVar3->m[2].z +
                             (float)*(int *)(unaff_EBP + 0x14c0) * pCVar3->m[1].z +
                             (float)iVar2 * pCVar3->m[0].z));
  *(int *)(unaff_EBP + 0x198) = (int)ROUND(dVar5);
  return;
}
