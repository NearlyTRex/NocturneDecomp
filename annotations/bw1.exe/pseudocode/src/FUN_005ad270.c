// Name: FUN_005ad270
// Address: 005ad270
// Address Range: [[005ad270, 005ad2b0]]
// Convention: unknown
// Signature: void FUN_005ad270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad270(void)

{
  int iVar1;
  
  if ((_DAT_02c83370 != 0) && (_DAT_02c99318 != 0)) {
    iVar1 = FUN_005c04e0(&DAT_006257d0,"trigl.dll");
    if (iVar1 != 0) {
      FUN_00582310();
    }
    ShowWindow(_DAT_02c9be68,6);
    return;
  }
  return;
}
