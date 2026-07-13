// Name: APIDLLbuildCardList
// Address: 100052e0
// Address Range: [[100052e0, 10005341]]
// Convention: unknown
// Signature: undefined4 APIDLLbuildCardList(int *param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

#include "nocturne.h"

uint APIDLLbuildCardList(int *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
                    /* 0x52e0  7  APIDLLbuildCardList */
  iVar2 = DAT_1020de34;
  *param_1 = DAT_1020de34;
  if (0 < iVar2) {
    puVar4 = &DAT_101386b0;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_5 = *puVar4;
      puVar4 = puVar4 + 1;
      param_5 = param_5 + 1;
    }
    puVar4 = &DAT_10138ef0;
    for (iVar1 = iVar2; iVar3 = 0, iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_4 = *puVar4;
      puVar4 = puVar4 + 1;
      param_4 = param_4 + 1;
    }
    do {
      *param_2 = (int)&DAT_101398d0 + iVar3;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
      *param_3 = (int)&DAT_10236910 + iVar3;
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 0x200;
    } while (iVar2 != 0);
  }
  return 1;
}
