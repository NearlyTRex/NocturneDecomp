// Name: FUN_004a3960
// Address: 004a3960
// Address Range: [[004a3960, 004a3a4f]]
// Convention: unknown
// Signature: void FUN_004a3960(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3960(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  float10 fVar5;
  
  if (_DAT_01c78b04 != 0) {
    if (((_DAT_01c78b04 < 4) && (_DAT_01c78b04 != 1)) && (0x3f7fffff < (int)_DAT_01c78b08)) {
      FUN_004a3860();
      if (DAT_005b7624 == 0x20) {
        fVar5 = (float10)_DAT_01c78b08 * (float10)_DAT_01c78b08;
        iVar4 = 0;
        iVar1 = FUN_00563a30();
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            puVar3 = *(uint **)(&DAT_01bd2fa0 + iVar1);
            iVar2 = 0;
            if (0 < DAT_005b761c) {
              do {
                if ((int)ROUND(fVar5) <
                    (_DAT_01c78b10 - iVar4) * (_DAT_01c78b10 - iVar4) +
                    (_DAT_01c78b0c - iVar2) * (_DAT_01c78b0c - iVar2)) {
                  *puVar3 = 0;
                }
                iVar2 = iVar2 + 1;
                puVar3 = puVar3 + 1;
              } while (iVar2 < DAT_005b761c);
            }
            iVar1 = iVar1 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_005b7620);
        }
      }
    }
    else {
      FUN_00403e60(0,0,DAT_005b761c + -1,DAT_005b7620 + -1,0);
    }
  }
  return;
}
