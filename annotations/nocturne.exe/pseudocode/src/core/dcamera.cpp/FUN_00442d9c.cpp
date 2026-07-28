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
  double dVar5;
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
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * in_stack_00000028[6] +
                             (float)*(int *)(unaff_EBP + 0x14a4) * *in_stack_00000028 +
                             (float)*(int *)(unaff_EBP + 0x14a8) * in_stack_00000028[3]));
  *(int *)(unaff_EBP + 0x178) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14a4);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * pfVar3[7] +
                             (float)*(int *)(unaff_EBP + 0x14a8) * pfVar3[4] +
                             (float)iVar1 * pfVar3[1]));
  *(int *)(unaff_EBP + 0x17c) = (int)ROUND(dVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14b4);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14ac) * pfVar3[8] +
                             (float)*(int *)(unaff_EBP + 0x14a8) * pfVar3[5] +
                             (float)iVar2 * pfVar3[2]));
  *(int *)(unaff_EBP + 0x180) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14b0);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * pfVar3[6] +
                             (float)*(int *)(unaff_EBP + 0x14b0) * *pfVar3 +
                             (float)iVar1 * pfVar3[3]));
  *(int *)(unaff_EBP + 0x184) = (int)ROUND(dVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14b0);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * pfVar3[7] +
                             (float)*(int *)(unaff_EBP + 0x14b4) * pfVar3[4] +
                             (float)iVar2 * pfVar3[1]));
  *(int *)(unaff_EBP + 0x188) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14c0);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14b8) * pfVar3[8] +
                             (float)*(int *)(unaff_EBP + 0x14b4) * pfVar3[5] +
                             (float)iVar1 * pfVar3[2]));
  *(int *)(unaff_EBP + 0x18c) = (int)ROUND(dVar5);
  iVar1 = *(int *)(unaff_EBP + 0x14bc);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * pfVar3[6] +
                             (float)*(int *)(unaff_EBP + 0x14bc) * *pfVar3 +
                             (float)iVar2 * pfVar3[3]));
  *(int *)(unaff_EBP + 400) = (int)ROUND(dVar5);
  iVar2 = *(int *)(unaff_EBP + 0x14bc);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * pfVar3[7] +
                             (float)*(int *)(unaff_EBP + 0x14c0) * pfVar3[4] +
                             (float)iVar1 * pfVar3[1]));
  *(int *)(unaff_EBP + 0x194) = (int)ROUND(dVar5);
  dVar5 = round
                    ((double)((float)*(int *)(unaff_EBP + 0x14c4) * pfVar3[8] +
                             (float)*(int *)(unaff_EBP + 0x14c0) * pfVar3[5] +
                             (float)iVar2 * pfVar3[2]));
  *(int *)(unaff_EBP + 0x198) = (int)ROUND(dVar5);
  return;
}
