// Name: FUN_00425650
// Address: 00425650
// Address Range: [[00425650, 004257ba]]
// Convention: unknown
// Signature: void FUN_00425650(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425650(int param_1)

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
    fVar2 = (float)iStack_28 * _DAT_005fd228;
    fVar1 = *(float *)(param_1 + 0x19d98);
    iStack_1c = iStack_28 * 0x30;
    iVar3 = 0;
    iVar5 = iStack_2c;
    do {
      iStack_3c = (int)ROUND((fVar2 + fVar1) * _DAT_005fd210);
      iStack_38 = (int)ROUND((*(float *)(iVar5 + 0x12c64) + (float)_DAT_005d5048) * _DAT_005fd210);
      iStack_34 = (int)ROUND(((float)iVar3 * _DAT_005fd228 + *(float *)(param_1 + 0x19d9c)) *
                             _DAT_005fd210);
      iStack_18 = iVar3;
      FUN_00580173(*DAT_00612560 + iStack_1c,&iStack_3c);
      iVar5 = iVar5 + 4;
      iStack_1c = iStack_1c + 0x240;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iStack_28 = iStack_28 + 1;
    iStack_2c = iStack_2c + 0x30;
  } while (iStack_28 < 0xc);
  FUN_00483ce0(DAT_00612560,0xffffffff);
  iStack_24 = 0xc;
  do {
    iStack_20 = iStack_24;
    iVar4 = 1;
    iVar5 = iStack_24;
    iVar3 = iStack_24 + -0xb;
    do {
      iStack_30 = iStack_20 + iVar4;
      FUN_00483e70(DAT_00612560,iStack_30,iVar5);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
      FUN_00483e70(DAT_00612560,iStack_30,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar4 < 0xc);
    iStack_24 = iStack_24 + 0xc;
  } while (iStack_24 != 0x90);
  return;
}
