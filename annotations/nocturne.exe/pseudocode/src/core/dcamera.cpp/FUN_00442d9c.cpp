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
  float *pfVar3;
  uint *puVar4;
  int in_EDX;
  int unaff_EBP;
  float10 fVar5;
  float fStack00000004;
  float fStack00000008;
  float *in_stack_00000028;
  
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
  puVar4 = (uint *)
           core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                     (in_stack_00000028,&stack0x0000000c,&stack0x00000000);
  pfVar3 = in_stack_00000028;
  if ((uint *)(unaff_EBP + 0x104) != puVar4) {
    *(uint *)(unaff_EBP + 0x104) = *puVar4;
    *(uint *)(unaff_EBP + 0x108) = puVar4[1];
    *(uint *)(unaff_EBP + 0x10c) = puVar4[2];
  }
  *(int *)(unaff_EBP + 0x16c) = (int)ROUND(*(float *)(unaff_EBP + 0x104) * 256.0f);
  *(int *)(unaff_EBP + 0x170) = (int)ROUND(*(float *)(unaff_EBP + 0x108) * 256.0f);
  *(int *)(unaff_EBP + 0x174) = (int)ROUND(*(float *)(unaff_EBP + 0x10c) * 256.0f);
  iVar1 = *(int *)(unaff_EBP + 0x14a4);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14ac) * (float10)in_stack_00000028[6]
                              + (float10)*(int *)(unaff_EBP + 0x14a4) * (float10)*in_stack_00000028
                                + (float10)*(int *)(unaff_EBP + 0x14a8) *
                                  (float10)in_stack_00000028[3]);
  *(int *)(unaff_EBP + 0x178) = (int)ROUND(fVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14a4);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14ac) * (float10)pfVar3[7] +
                              (float10)*(int *)(unaff_EBP + 0x14a8) * (float10)pfVar3[4] +
                              (float10)iVar1 * (float10)pfVar3[1]);
  *(int *)(unaff_EBP + 0x17c) = (int)ROUND(fVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14b4);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14ac) * (float10)pfVar3[8] +
                              (float10)*(int *)(unaff_EBP + 0x14a8) * (float10)pfVar3[5] +
                              (float10)iVar2 * (float10)pfVar3[2]);
  *(int *)(unaff_EBP + 0x180) = (int)ROUND(fVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14b0);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14b8) * (float10)pfVar3[6] +
                              (float10)*(int *)(unaff_EBP + 0x14b0) * (float10)*pfVar3 +
                              (float10)iVar1 * (float10)pfVar3[3]);
  *(int *)(unaff_EBP + 0x184) = (int)ROUND(fVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14b0);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14b8) * (float10)pfVar3[7] +
                              (float10)*(int *)(unaff_EBP + 0x14b4) * (float10)pfVar3[4] +
                              (float10)iVar2 * (float10)pfVar3[1]);
  *(int *)(unaff_EBP + 0x188) = (int)ROUND(fVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14c0);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14b8) * (float10)pfVar3[8] +
                              (float10)*(int *)(unaff_EBP + 0x14b4) * (float10)pfVar3[5] +
                              (float10)iVar1 * (float10)pfVar3[2]);
  *(int *)(unaff_EBP + 0x18c) = (int)ROUND(fVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14bc);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14c4) * (float10)pfVar3[6] +
                              (float10)*(int *)(unaff_EBP + 0x14bc) * (float10)*pfVar3 +
                              (float10)iVar2 * (float10)pfVar3[3]);
  *(int *)(unaff_EBP + 400) = (int)ROUND(fVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14bc);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14c4) * (float10)pfVar3[7] +
                              (float10)*(int *)(unaff_EBP + 0x14c0) * (float10)pfVar3[4] +
                              (float10)iVar1 * (float10)pfVar3[1]);
  *(int *)(unaff_EBP + 0x194) = (int)ROUND(fVar5);
  fVar5 = (float10)round
                             ((float10)*(int *)(unaff_EBP + 0x14c4) * (float10)pfVar3[8] +
                              (float10)*(int *)(unaff_EBP + 0x14c0) * (float10)pfVar3[5] +
                              (float10)iVar2 * (float10)pfVar3[2]);
  *(int *)(unaff_EBP + 0x198) = (int)ROUND(fVar5);
  return;
}
