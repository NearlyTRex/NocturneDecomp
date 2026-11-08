// Name: FUN_004d61e0
// Address: 004d61e0
// Address Range: [[004d61e0, 004d62df]]
// Convention: unknown
// Signature: void FUN_004d61e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d61e0(void)

{
  int iVar1;
  int extraout_EDX;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  if ((_DAT_01cd0c7c != 0) && (*(int *)(0x01CC8004 + 0x40) == 0)) {
    if ((_DAT_01cd0c7c < 4) && ((_DAT_01cd0c7c != 1 && (0x3f7fffff < (int)_DAT_01cd0c80)))) {
      FUN_004d60b0();
      if (DAT_0061b4a0 == 0x20) {
        fVar5 = (float10)_DAT_01cd0c80 * (float10)_DAT_01cd0c80;
        iVar4 = 0;
        FUN_005c03a0();
        if (0 < extraout_EDX) {
          iVar3 = 0;
          do {
            puVar2 = *(uint **)(&DAT_01c4354c + iVar3);
            iVar1 = 0;
            if (0 < DAT_0061b498) {
              do {
                if ((int)ROUND(fVar5) <
                    (_DAT_01cd0c88 - iVar4) * (_DAT_01cd0c88 - iVar4) +
                    (_DAT_01cd0c84 - iVar1) * (_DAT_01cd0c84 - iVar1)) {
                  *puVar2 = 0;
                }
                iVar1 = iVar1 + 1;
                puVar2 = puVar2 + 1;
              } while (iVar1 < DAT_0061b498);
            }
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_0061b49c);
        }
      }
    }
    else {
      FUN_004031c0(0,0,DAT_0061b498 + -1,DAT_0061b49c + -1,0);
    }
  }
  return;
}
