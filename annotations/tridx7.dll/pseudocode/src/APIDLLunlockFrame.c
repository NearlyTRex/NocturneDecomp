// Name: APIDLLunlockFrame
// Address: 10002e60
// Address Range: [[10002e60, 10002e91]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLunlockFrame(void)

#include "nocturne.h"

int __cdecl APIDLLunlockFrame(void)

{
  int iVar1;
  
                    /* 0x2e60  35  APIDLLunlockFrame */
  if (DAT_100141f8 == 0) {
    return 0;
  }
  DAT_100141f8 = 0;
  iVar1 = FUN_10002c50();
  if (iVar1 == 0) {
    FUN_10002340("Cannot unlock back buffer");
  }
  return 1;
}
