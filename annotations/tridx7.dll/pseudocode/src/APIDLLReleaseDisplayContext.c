// Name: APIDLLReleaseDisplayContext
// Address: 10004da0
// Address Range: [[10004da0, 10004e04]]
// Convention: unknown
// Signature: void APIDLLReleaseDisplayContext(undefined4 param_1)

#include "nocturne.h"

void APIDLLReleaseDisplayContext(uint param_1)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
                    /* 0x4da0  3  APIDLLReleaseDisplayContext */
  bVar3 = 0;
  if (DAT_10014180 != (int *)0x0) {
    (**(code **)(*DAT_10014180 + 0x68))(DAT_10014180,param_1);
    if (DAT_10014230 != 0) {
      puVar2 = &DAT_10226e88;
      for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      }
      DAT_10226e88 = 0x7c;
      (**(code **)(*DAT_10014180 + 100))(DAT_10014180,0,&DAT_10226e88,1,0);
      DAT_100141f4 = 1;
      DAT_10014230 = 0;
    }
  }
  return;
}
