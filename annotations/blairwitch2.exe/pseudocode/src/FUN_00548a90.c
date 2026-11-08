// Name: FUN_00548a90
// Address: 00548a90
// Address Range: [[00548a90, 00548cbd]]
// Convention: unknown
// Signature: void FUN_00548a90(float *param_1,int param_2)

#include "nocturne.h"

void FUN_00548a90(float *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1030 [1016];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  float *pfStack_14;
  
  bVar4 = 0;
  iStack_30 = FUN_00547890(param_2);
  iStack_1c = 0;
  if (0 < *(int *)(iStack_30 + 0x1d1f8)) {
    iStack_20 = 0;
    pfStack_18 = param_1 + 0x1f7;
    pfStack_24 = param_1 + 3;
    iStack_2c = param_2 + 0x58;
    pfVar2 = param_1;
    pfVar3 = param_1;
    iStack_28 = iStack_30;
    pfStack_14 = pfStack_18;
    do {
      iVar1 = iStack_1c;
      FUN_005938c0(pfStack_14,pfStack_24);
      if (pfVar2[0x193] != 1.0) {
        param_1[iVar1 * 0xc + 0x1f7] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1f7];
        param_1[iVar1 * 0xc + 0x1f8] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1f8];
        param_1[iVar1 * 0xc + 0x1f9] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1f9];
        param_1[iVar1 * 0xc + 0x1fb] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1fb];
        param_1[iVar1 * 0xc + 0x1fc] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1fc];
        param_1[iVar1 * 0xc + 0x1fd] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1fd];
        param_1[iVar1 * 0xc + 0x1ff] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1ff];
        param_1[iVar1 * 0xc + 0x200] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x200];
        param_1[iVar1 * 0xc + 0x201] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x201];
      }
      if (*(int *)(iStack_28 + 0x1d21c) < 0) {
        iVar1 = param_2 + iStack_20;
        pfVar3[0x1fa] = *(float *)(iVar1 + 0x58) + *param_1;
        pfVar3[0x1fe] = *(float *)(iVar1 + 0x5c) + param_1[1];
        pfVar3[0x202] = *(float *)(iVar1 + 0x60) + param_1[2];
      }
      else {
        FUN_00591530(iStack_2c + iStack_20,pfStack_18 + *(int *)(iStack_28 + 0x1d21c) * 0xc);
        fStack_48 = fStack_3c;
        *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        pfVar3[0x1fa] = fStack_48;
        pfVar3[0x1fe] = fStack_44;
        pfVar3[0x202] = fStack_40;
      }
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 0xc;
      pfStack_14 = pfStack_14 + 0xc;
      pfStack_24 = pfStack_24 + 4;
      iStack_20 = iStack_20 + 0xc;
      iStack_28 = iStack_28 + 0x24;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < *(int *)(iStack_30 + 0x1d1f8));
  }
  return;
}
