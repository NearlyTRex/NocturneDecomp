// Name: FUN_0049a240
// Address: 0049a240
// Address Range: [[0049a240, 0049a31c]]
// Convention: unknown
// Signature: void FUN_0049a240(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a240(void)

{
  int iVar1;
  
  _DAT_01c78acc = 0;
  _DAT_01c78ad4 = 0;
  iVar1 = FUN_00471430(0x01BCD074,"?Enter Movie FPS" + 1,&DAT_005b9360,1,0x3e800000,
                       0x43700000,1);
  if (iVar1 != 0) {
    iVar1 = FUN_00471360(0x01BCD074,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",&DAT_01c78ad0,1,0,
                         99999,1);
    if (iVar1 != 0) {
      iVar1 = FUN_00471360(0x01BCD074,"Enter image width",&DAT_005b9364,1,1,9999,1);
      if (iVar1 != 0) {
        iVar1 = FUN_00471360(0x01BCD074,"Enter image height",&DAT_005b9368,1,1,9999,1);
        if (iVar1 != 0) {
          FUN_0046fe60(0x01BCD074,"Press CTRL+V to begin recording.");
          _DAT_01c78ac8 = 1;
          return;
        }
      }
    }
  }
  return;
}
