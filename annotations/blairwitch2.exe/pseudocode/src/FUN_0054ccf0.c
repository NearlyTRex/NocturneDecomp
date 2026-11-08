// Name: FUN_0054ccf0
// Address: 0054ccf0
// Address Range: [[0054ccf0, 0054cd84]]
// Convention: unknown
// Signature: int FUN_0054ccf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054ccf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_02648e80 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02648e80 + 0x30))(_DAT_02648e80,&stack0x00000004);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar3 = 0;
      iVar1 = _DAT_02641920;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        iVar2 = iVar1 * 0x1ac;
        if ((((*(int *)(&DAT_02641a78 + iVar2) == 0) && (*(int *)(iVar2 + 0x2641a7c) != 0)) &&
            (*(int *)(iVar2 + 0x2641a74) == 0)) &&
           ((*(int *)(iVar2 + 0x2641a80) == 0 && (*(int *)(_DAT_02641920 * 0x1ac + 0x2641acc) == 0))
           )) {
          FUN_0054d9b0(iVar2 + 0x2641924);
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40);
    } while (iVar3 < 0x40);
    FUN_005549c0("allocateHwSample - failed\n");
  }
  return 0;
}
