// Name: APIDLLdrawPolygon2
// Address: 100043c0
// Address Range: [[100043c0, 100044ac]]
// Convention: unknown
// Signature: undefined4 APIDLLdrawPolygon2(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

uint APIDLLdrawPolygon2(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x43c0  14  APIDLLdrawPolygon2 */
  if (DAT_10014204 == 0) {
    return 0;
  }
  FUN_10003f10(param_3);
  iVar6 = *(int *)(*param_1 + 8);
  if (1 < param_2) {
    iVar4 = param_2 + -1;
    piVar5 = param_1;
    do {
      piVar5 = piVar5 + 1;
      if (iVar6 < *(int *)(*piVar5 + 8)) {
        iVar6 = *(int *)(*piVar5 + 8);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar7 = iVar4 + 1;
      FUN_100044b0(param_1[iVar4],&DAT_1013b8d8 + (DAT_10014228 + iVar4) * 0x20,param_3,iVar6);
      iVar4 = iVar7;
    } while (iVar7 < param_2);
  }
  iVar4 = 0;
  iVar6 = param_2 + -2;
  if (0 < iVar6) {
    sVar1 = (short)DAT_10014228;
    iVar7 = DAT_1001422c * 2;
    DAT_1001422c = DAT_1001422c + iVar6 * 3;
    psVar3 = (short *)(&DAT_10238910 + iVar7);
    do {
      *psVar3 = sVar1;
      sVar2 = (short)iVar4;
      psVar3[1] = sVar1 + 1 + sVar2;
      iVar4 = iVar4 + 1;
      psVar3[2] = sVar1 + 2 + sVar2;
      psVar3 = psVar3 + 3;
    } while (iVar4 < iVar6);
  }
  DAT_10014228 = DAT_10014228 + param_2;
  if (0x3e76 < DAT_10014228) {
    FUN_100047b0();
  }
  if (0x3e76 < DAT_1001422c) {
    FUN_100047b0();
  }
  return 1;
}
