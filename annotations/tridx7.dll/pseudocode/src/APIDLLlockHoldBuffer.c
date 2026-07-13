// Name: APIDLLlockHoldBuffer
// Address: 10005350
// Address Range: [[10005350, 10005392]]
// Convention: unknown
// Signature: undefined4 APIDLLlockHoldBuffer(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint APIDLLlockHoldBuffer(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x5350  22  APIDLLlockHoldBuffer */
  iVar1 = FUN_10002e20(DAT_100141b8,&DAT_10226e88);
  if (iVar1 != 0) {
    iVar1 = DAT_10014178;
    iVar2 = DAT_10226eac;
    piVar3 = DAT_10138fb4;
    if (0 < DAT_10014178) {
      do {
        *piVar3 = iVar2;
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + _DAT_10226e98;
        piVar3 = piVar3 + 1;
      } while (iVar1 != 0);
    }
    return 1;
  }
  return 0;
}
