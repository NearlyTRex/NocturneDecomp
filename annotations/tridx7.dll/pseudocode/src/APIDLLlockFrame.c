// Name: APIDLLlockFrame
// Address: 10002d90
// Address Range: [[10002d90, 10002db9]]
// Convention: unknown
// Signature: undefined4 APIDLLlockFrame(void)

#include "nocturne.h"

uint APIDLLlockFrame(void)

{
  int iVar1;
  
                    /* 0x2d90  21  APIDLLlockFrame */
  if (DAT_10014204 != 0) {
    APIDLLendScene();
  }
  iVar1 = FUN_10002dc0();
  if (iVar1 == 0) {
    return 0;
  }
  DAT_100141f8 = 1;
  return 1;
}
