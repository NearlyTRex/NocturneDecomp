// Name: APIDLLendScene
// Address: 10002d10
// Address Range: [[10002d10, 10002d43]]
// Convention: unknown
// Signature: bool APIDLLendScene(void)

#include "nocturne.h"

bool APIDLLendScene(void)

{
  int iVar1;
  
                    /* 0x2d10  15  APIDLLendScene */
  if (DAT_10014204 == 0) {
    return false;
  }
  FUN_10002d50();
  FUN_100047b0();
  DAT_10014204 = 0;
  iVar1 = (**(code **)(*DAT_100141e0 + 0x28))(DAT_100141e0);
  return iVar1 == 0;
}
