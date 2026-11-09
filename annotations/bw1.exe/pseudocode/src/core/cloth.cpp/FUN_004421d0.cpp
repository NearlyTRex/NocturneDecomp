// Name: core_cloth.cpp_FUN_004421d0
// Address: 004421d0
// Address Range: [[004421d0, 00442320]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_004421d0(int param_1,float *param_2)

#include "nocturne.h"

void core_cloth_cpp_FUN_004421d0(int param_1,float *param_2)

{
  float *pfVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1048 [1006];
  CMatrix3x3f aCStack_88 [40];
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float afStack_38 [4];
  float fStack_28;
  uint uStack_24;
  float afStack_20 [2];
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  pfVar1 = (float *)(param_1 + 0x3ab14);
  fStack_48 = *param_2 - *pfVar1;
  fStack_44 = param_2[1] - *(float *)(param_1 + 0x3ab18);
  fStack_40 = param_2[2] - *(float *)(param_1 + 0x3ab1c);
  if (pfVar1 != param_2) {
    *pfVar1 = *param_2;
    *(float *)(param_1 + 0x3ab18) = param_2[1];
    *(float *)(param_1 + 0x3ab1c) = param_2[2];
  }
  afStack_38[2] = fStack_48;
  afStack_38[3] = fStack_44;
  fStack_28 = fStack_40;
  core_dirmat_cpp_FUN_0045f3e0(aCStack_88,(CVector3f *)&fStack_48);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iStack_18 = param_1 + 0x398;
    pfVar1 = (float *)(param_1 + 0x3bc);
    do {
      puVar2 = (uint *)(iStack_14 * 0x11c + iStack_18);
      core_dirmat_cpp_FUN_0045f700(aCStack_88,puVar2);
      uStack_3c = uStack_24;
      afStack_38[(uint)bVar3 * -2] = afStack_20[(uint)bVar3 * -2];
      afStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (puVar2 != &uStack_3c) {
        *puVar2 = uStack_3c;
        puVar2[1] = afStack_38[0];
        puVar2[2] = afStack_38[1];
      }
      core_dirmat_cpp_FUN_0045f700(aCStack_88,iStack_14 * 0x11c + iStack_18);
      afStack_5c[2] = fStack_60;
      afStack_5c[(uint)bVar3 * -2 + 3] = afStack_5c[(uint)bVar3 * -2];
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (pfVar1 != afStack_5c + 2) {
        *pfVar1 = afStack_5c[2];
        pfVar1[1] = afStack_5c[3];
        pfVar1[2] = fStack_4c;
      }
      iStack_14 = iStack_14 + 1;
      pfVar1 = pfVar1 + 0x47;
    } while (iStack_14 < *(int *)(param_1 + 0x104));
  }
  return;
}
