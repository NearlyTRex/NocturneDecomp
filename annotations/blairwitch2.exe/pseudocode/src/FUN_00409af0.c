// Name: FUN_00409af0
// Address: 00409af0
// Address Range: [[00409af0, 00409dae]]
// Convention: unknown
// Signature: void FUN_00409af0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409af0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float afStack_9c [30];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  FUN_005b7f5f(afStack_9c,10,&DAT_005f22b0);
  iStack_18 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x5c))(param_1,afStack_9c);
  pfVar6 = afStack_9c;
  iVar4 = 0;
  if (0 < iStack_18) {
    do {
      uStack_14 = (uint)DAT_01c34510;
      iStack_24 = (int)ROUND(*pfVar6 * _DAT_005f2160);
      iStack_20 = (int)ROUND(pfVar6[1] * _DAT_005f2160);
      iStack_1c = (int)ROUND(pfVar6[2] * _DAT_005f2160);
      FUN_0055d723(*0x01BA5C50 + 0xea5d0,&iStack_24);
      iVar5 = *0x01BA5C50;
      if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
        iVar3 = *(int *)(iVar5 + 0xea5e0) >> 0x10;
        _DAT_01c35e60 = uStack_14;
        iVar5 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
        if ((((-1 < iVar3) && (-1 < iVar5)) && (iVar3 < DAT_006141b8)) && (iVar5 < DAT_006141bc)) {
          FUN_00401130(iVar3,iVar5);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_006141b8)) && (iVar2 < DAT_006141bc)) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_006141b8)) && (iVar2 < DAT_006141bc)) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_006141b8 && (iVar2 < DAT_006141bc)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + 2;
        if (((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_006141b8 && (iVar5 < DAT_006141bc)))) {
          FUN_00401130(iVar3,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar4 < iStack_18);
  }
  return;
}
