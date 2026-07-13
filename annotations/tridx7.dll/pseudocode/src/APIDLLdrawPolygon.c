// Name: APIDLLdrawPolygon
// Address: 10004380
// Address Range: [[10004380, 100043b3]]
// Convention: unknown
// Signature: void APIDLLdrawPolygon(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void APIDLLdrawPolygon(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x4380  13  APIDLLdrawPolygon */
  if (0 < param_2) {
    piVar2 = &DAT_10138fc0;
    iVar1 = param_2;
    do {
      *piVar2 = param_1;
      piVar2 = piVar2 + 1;
      param_1 = param_1 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  APIDLLdrawPolygon2(&DAT_10138fc0,param_2,param_3);
  return;
}
