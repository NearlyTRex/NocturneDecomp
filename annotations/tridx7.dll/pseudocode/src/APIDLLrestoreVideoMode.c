// Name: APIDLLrestoreVideoMode
// Address: 10002be0
// Address Range: [[10002be0, 10002c46]]
// Convention: unknown
// Signature: undefined4 APIDLLrestoreVideoMode(void)

#include "nocturne.h"

uint APIDLLrestoreVideoMode(void)

{
  int iVar1;
  
                    /* 0x2be0  24  APIDLLrestoreVideoMode */
  if (DAT_100141f8 != 0) {
    iVar1 = FUN_10002c50();
    if (iVar1 == 0) {
      FUN_10002340("Cannot unlock back buffer");
    }
  }
  (**(code **)(*DAT_10014184 + 0x28))(DAT_10014184);
  (**(code **)(*DAT_10014188 + 0x4c))(DAT_10014188);
  (**(code **)(*DAT_10014188 + 0x50))(DAT_10014188,DAT_10138fb8,8);
  FUN_10002370();
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 1);
  return 1;
}
