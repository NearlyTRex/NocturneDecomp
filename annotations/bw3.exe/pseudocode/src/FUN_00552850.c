// Name: FUN_00552850
// Address: 00552850
// Address Range: [[00552850, 005528f3]]
// Convention: unknown
// Signature: int FUN_00552850(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00552850(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_02cf3280 != (int *)0x0) {
    do {
      iVar2 = (**(code **)(*_DAT_02cf3280 + 0x30))(_DAT_02cf3280,&stack0x00000004);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = 0;
      iVar2 = _DAT_02cebc20;
      do {
        iVar2 = iVar2 + 1;
        if (0x3f < iVar2) {
          iVar2 = 0;
        }
        iVar1 = iVar2 * 0x1b0;
        if ((((*(int *)(&DAT_02cebd78 + iVar1) == 0) && (*(int *)(iVar1 + 0x2cebd7c) != 0)) &&
            (*(int *)(iVar1 + 0x2cebd74) == 0)) &&
           ((*(int *)(iVar1 + 0x2cebd80) == 0 && (*(int *)(_DAT_02cebc20 * 0x1b0 + 0x2cebdd0) == 0))
           )) {
          FUN_00553520(iVar1 + 0x2cebc24);
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40);
    } while (iVar3 < 0x40);
    FUN_0055a560("allocateHwSample - failed\n");
  }
  return 0;
}
