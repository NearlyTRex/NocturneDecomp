// Name: core_wateract.cpp_FUN_00587180
// Address: 00587180
// Address Range: [[00587180, 0058726e]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00587180(int param_1)

#include "nocturne.h"

void core_wateract_cpp_FUN_00587180(int param_1)

{
  CMatrix3x3f *this_ptr;
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1038 [1016];
  CVector3f *input;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CMatrix3x3f *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar3 = 0;
  iStack_18 = 0;
  if (0 < *(int *)(param_1 + 0x3f4)) {
    iStack_1c = param_1 + 0x3f8;
    pfStack_14 = (float *)(param_1 + 0x20);
    pfVar1 = (float *)(param_1 + 0x404);
    pCStack_20 = (CMatrix3x3f *)(param_1 + 0x3c);
    do {
      this_ptr = pCStack_20;
      pfVar2 = (float *)(iStack_18 * 0x20 + iStack_1c);
      fStack_2c = *pfVar1 - *pfStack_14;
      afStack_28[0] = pfVar1[1] - pfStack_14[1];
      input = &CStack_44;
      afStack_28[1] = pfVar1[2] - pfStack_14[2];
      CStack_44.x = *pfVar1 - *pfStack_14;
      *(float *)((int)&CStack_44 + (uint)bVar3 * -8 + 4) = afStack_28[(uint)bVar3 * -2];
      *(float *)((int)&CStack_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0(this_ptr,input,&CStack_38);
      fStack_50 = CStack_38.x;
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_38 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (pfVar2 != &stack0xffffffb0) {
        *pfVar2 = fStack_50;
        pfVar2[1] = fStack_4c;
        pfVar2[2] = fStack_48;
      }
      iStack_18 = iStack_18 + 1;
      pfVar1 = pfVar1 + 8;
    } while (iStack_18 < *(int *)(param_1 + 0x3f4));
  }
  return;
}
