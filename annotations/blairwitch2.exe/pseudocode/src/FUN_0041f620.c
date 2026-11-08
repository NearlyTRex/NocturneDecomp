// Name: FUN_0041f620
// Address: 0041f620
// Address Range: [[0041f620, 0041f78a]]
// Convention: unknown
// Signature: void FUN_0041f620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f620(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_28 = 0;
  iStack_2c = param_1;
  do {
    fVar2 = (float)iStack_28 * _DAT_005f3e28;
    fVar1 = *(float *)(param_1 + 0x1e628);
    iStack_1c = iStack_28 * 0x30;
    iVar3 = 0;
    iVar5 = iStack_2c;
    do {
      iStack_3c = (int)ROUND((fVar2 + fVar1) * _DAT_005f3e10);
      iStack_38 = (int)ROUND((*(float *)(iVar5 + 0x174f4) + (float)_DAT_005cc959) * _DAT_005f3e10);
      iStack_34 = (int)ROUND(((float)iVar3 * _DAT_005f3e28 + *(float *)(param_1 + 0x1e62c)) *
                             _DAT_005f3e10);
      iStack_18 = iVar3;
      FUN_0055d723(*DAT_0060b280 + iStack_1c,&iStack_3c);
      iVar5 = iVar5 + 4;
      iStack_1c = iStack_1c + 0x240;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iStack_28 = iStack_28 + 1;
    iStack_2c = iStack_2c + 0x30;
  } while (iStack_28 < 0xc);
  FUN_0046b7e0(DAT_0060b280,0xffffffff);
  iStack_24 = 0xc;
  do {
    iStack_20 = iStack_24;
    iVar4 = 1;
    iVar5 = iStack_24;
    iVar3 = iStack_24 + -0xb;
    do {
      iStack_30 = iStack_20 + iVar4;
      FUN_0046b970(DAT_0060b280,iStack_30,iVar5);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
      FUN_0046b970(DAT_0060b280,iStack_30,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar4 < 0xc);
    iStack_24 = iStack_24 + 0xc;
  } while (iStack_24 != 0x90);
  return;
}
