// Name: FUN_0043e450
// Address: 0043e450
// Address Range: [[0043e450, 0043e721]]
// Convention: unknown
// Signature: void FUN_0043e450(int param_1,float *param_2,CMatrix3x3f *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e450(int param_1,float *param_2,CMatrix3x3f *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  double dVar5;
  float afStackY_1010 [1010];
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  CVector3f CStack_10;
  
  bVar4 = 0;
  *(uint *)(param_1 + 0x148c) = *(uint *)(param_1 + 0x16c);
  *(uint *)(param_1 + 0x1490) = *(uint *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x1494) = *(uint *)(param_1 + 0x174);
  if ((uint *)(param_1 + 0x1498) != (uint *)(param_1 + 4)) {
    *(uint *)(param_1 + 0x1498) = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 0x149c) = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 0x14a0) = *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0x14a4) = *(uint *)(param_1 + 0x178);
  *(uint *)(param_1 + 0x14a8) = *(uint *)(param_1 + 0x17c);
  *(uint *)(param_1 + 0x14ac) = *(uint *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x14b0) = *(uint *)(param_1 + 0x184);
  *(uint *)(param_1 + 0x14b4) = *(uint *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x14b8) = *(uint *)(param_1 + 0x18c);
  *(uint *)(param_1 + 0x14bc) = *(uint *)(param_1 + 400);
  *(uint *)(param_1 + 0x14c0) = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x14c4) = *(uint *)(param_1 + 0x198);
  pfVar1 = (float *)(param_1 + 4);
  CStack_34.x = *param_2 - *pfVar1;
  CStack_34.y = param_2[1] - *(float *)(param_1 + 8);
  CStack_34.z = param_2[2] - *(float *)(param_1 + 0xc);
  afStack_24[2] = CStack_34.x;
  afStack_24[3] = CStack_34.y;
  fStack_14 = CStack_34.z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0(param_3,&CStack_34,&CStack_10);
  fStack_28 = CStack_10.x;
  afStack_24[(uint)bVar4 * -2] = *(float *)((int)&CStack_10 + (uint)bVar4 * -8 + 4);
  afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_10 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (pfVar1 != &fStack_28) {
    *pfVar1 = fStack_28;
    *(float *)(param_1 + 8) = afStack_24[0];
    *(float *)(param_1 + 0xc) = afStack_24[1];
  }
  *(int *)(param_1 + 0x16c) = (int)ROUND(*(float *)(param_1 + 4) * _DAT_005f4dcc);
  *(int *)(param_1 + 0x170) = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005f4dcc);
  *(int *)(param_1 + 0x174) = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005f4dcc);
  iVar2 = *(int *)(param_1 + 0x14a4);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14ac) * param_3->m[2].x +
                             (float)*(int *)(param_1 + 0x14a4) * param_3->m[0].x +
                             (float)*(int *)(param_1 + 0x14a8) * param_3->m[1].x));
  *(int *)(param_1 + 0x178) = (int)ROUND(dVar5);
  iVar3 = *(int *)(param_1 + 0x14a4);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14ac) * param_3->m[2].y +
                             (float)*(int *)(param_1 + 0x14a8) * param_3->m[1].y +
                             (float)iVar2 * param_3->m[0].y));
  *(int *)(param_1 + 0x17c) = (int)ROUND(dVar5);
  iVar2 = *(int *)(param_1 + 0x14b4);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14ac) * param_3->m[2].z +
                             (float)*(int *)(param_1 + 0x14a8) * param_3->m[1].z +
                             (float)iVar3 * param_3->m[0].z));
  *(int *)(param_1 + 0x180) = (int)ROUND(dVar5);
  iVar3 = *(int *)(param_1 + 0x14b0);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14b8) * param_3->m[2].x +
                             (float)*(int *)(param_1 + 0x14b0) * param_3->m[0].x +
                             (float)iVar2 * param_3->m[1].x));
  *(int *)(param_1 + 0x184) = (int)ROUND(dVar5);
  iVar2 = *(int *)(param_1 + 0x14b0);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14b8) * param_3->m[2].y +
                             (float)*(int *)(param_1 + 0x14b4) * param_3->m[1].y +
                             (float)iVar3 * param_3->m[0].y));
  *(int *)(param_1 + 0x188) = (int)ROUND(dVar5);
  iVar3 = *(int *)(param_1 + 0x14c0);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14b8) * param_3->m[2].z +
                             (float)*(int *)(param_1 + 0x14b4) * param_3->m[1].z +
                             (float)iVar2 * param_3->m[0].z));
  *(int *)(param_1 + 0x18c) = (int)ROUND(dVar5);
  iVar2 = *(int *)(param_1 + 0x14bc);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14c4) * param_3->m[2].x +
                             (float)*(int *)(param_1 + 0x14bc) * param_3->m[0].x +
                             (float)iVar3 * param_3->m[1].x));
  *(int *)(param_1 + 400) = (int)ROUND(dVar5);
  iVar3 = *(int *)(param_1 + 0x14bc);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14c4) * param_3->m[2].y +
                             (float)*(int *)(param_1 + 0x14c0) * param_3->m[1].y +
                             (float)iVar2 * param_3->m[0].y));
  *(int *)(param_1 + 0x194) = (int)ROUND(dVar5);
  dVar5 = round
                    ((double)((float)*(int *)(param_1 + 0x14c4) * param_3->m[2].z +
                             (float)*(int *)(param_1 + 0x14c0) * param_3->m[1].z +
                             (float)iVar3 * param_3->m[0].z));
  *(int *)(param_1 + 0x198) = (int)ROUND(dVar5);
  return;
}
