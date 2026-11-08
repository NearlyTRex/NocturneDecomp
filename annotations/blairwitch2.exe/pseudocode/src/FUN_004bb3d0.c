// Name: FUN_004bb3d0
// Address: 004bb3d0
// Address Range: [[004bb3d0, 004bb4d4]]
// Convention: unknown
// Signature: void FUN_004bb3d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb3d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int local_18;
  
  if (*(int *)(param_1 + 0xaf4) == 0x3f800000) {
    FUN_004031c0(0,0,DAT_006141b8 + -1,DAT_006141bc + -1,0);
  }
  if (((_DAT_01cb80e0 != 0) && (*(int *)(0x01CAF56C + 0x40) == 0)) &&
     (FUN_004bb2c0(), DAT_006141c0 == 0x20)) {
    fVar4 = (float10)_DAT_01cb810c * (float10)_DAT_01cb810c;
    iVar3 = 0;
    iVar1 = FUN_005b7ff0();
    if (0 < iVar1) {
      local_18 = 0;
      do {
        iVar2 = 0;
        iVar1 = *(int *)(&DAT_01c2a38c + local_18);
        if (0 < DAT_006141b8) {
          do {
            if ((int)ROUND(fVar4) <
                (_DAT_01cb8110 - iVar2) * (_DAT_01cb8110 - iVar2) +
                (_DAT_01cb8114 - iVar3) * (_DAT_01cb8114 - iVar3)) {
              *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 0x10;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 4;
          } while (iVar2 < DAT_006141b8);
        }
        iVar3 = iVar3 + 1;
        local_18 = local_18 + 4;
      } while (iVar3 < DAT_006141bc);
    }
  }
  return;
}
