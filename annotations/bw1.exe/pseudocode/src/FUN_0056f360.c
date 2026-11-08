// Name: FUN_0056f360
// Address: 0056f360
// Address Range: [[0056f360, 0056f3f4]]
// Convention: unknown
// Signature: int FUN_0056f360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056f360(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_02c80650 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02c80650 + 0x30))(_DAT_02c80650,&stack0x00000004);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar3 = 0;
      iVar1 = _DAT_02c78ff0;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        iVar2 = iVar1 * 0x1b0;
        if ((((*(int *)(&DAT_02c79148 + iVar2) == 0) && (*(int *)(&DAT_02c7914c + iVar2) != 0)) &&
            (*(int *)(iVar2 + 0x2c79144) == 0)) &&
           ((*(int *)(iVar2 + 0x2c79150) == 0 && (*(int *)(_DAT_02c78ff0 * 0x1b0 + 0x2c791a0) == 0))
           )) {
          FUN_00570020(iVar2 + 0x2c78ff4);
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40);
    } while (iVar3 < 0x40);
    FUN_005773f0("?allocateHwSample - failed\n" + 1);
  }
  return 0;
}
