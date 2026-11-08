// Name: FUN_00409980
// Address: 00409980
// Address Range: [[00409980, 00409c3e]]
// Convention: unknown
// Signature: void FUN_00409980(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409980(int param_1)

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
  
  FUN_005a30d7(afStack_9c,10,&DAT_005db0f0);
  iStack_18 = (**(code **)(*(int *)(param_1 + 0x154) + 0x54))(param_1,afStack_9c);
  pfVar6 = afStack_9c;
  iVar4 = 0;
  if (0 < iStack_18) {
    do {
      uStack_14 = (uint)DAT_01c69c70;
      iStack_24 = (int)ROUND(*pfVar6 * _DAT_005dafd0);
      iStack_20 = (int)ROUND(pfVar6[1] * _DAT_005dafd0);
      iStack_1c = (int)ROUND(pfVar6[2] * _DAT_005dafd0);
      FUN_005632a3(*0x01BDD7E4 + 0x124f50,&iStack_24);
      iVar5 = *0x01BDD7E4;
      if ((*(byte *)(iVar5 + 0x124f63) & 0x80) == 0) {
        iVar3 = *(int *)(iVar5 + 0x124f60) >> 0x10;
        _DAT_01c6b5c0 = uStack_14;
        iVar5 = *(int *)(iVar5 + 0x124f64) >> 0x10;
        if ((((-1 < iVar3) && (-1 < iVar5)) && (iVar3 < DAT_005fba18)) && (iVar5 < DAT_005fba1c)) {
          FUN_00401130(iVar3,iVar5);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005fba18)) && (iVar2 < DAT_005fba1c)) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005fba18)) && (iVar2 < DAT_005fba1c)) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar3 + 2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005fba18 && (iVar2 < DAT_005fba1c)))) {
          FUN_00401130(iVar1,iVar2);
        }
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + 2;
        if (((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_005fba18 && (iVar5 < DAT_005fba1c)))) {
          FUN_00401130(iVar3,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar4 < iStack_18);
  }
  return;
}
