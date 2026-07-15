// Name: APIDLLlockFrame
// Address: 10002d90
// Address Range: [[10002d90, 10002db9]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLlockFrame(void)

#include "nocturne.h"

int __cdecl APIDLLlockFrame(void)

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
