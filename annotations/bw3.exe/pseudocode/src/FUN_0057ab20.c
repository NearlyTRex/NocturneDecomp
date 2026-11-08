// Name: FUN_0057ab20
// Address: 0057ab20
// Address Range: [[0057ab20, 0057ab60]]
// Convention: unknown
// Signature: void FUN_0057ab20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057ab20(void)

{
  int iVar1;
  
  if ((_DAT_02cf5fcc != 0) && (_DAT_02d0bcf8 != 0)) {
    iVar1 = FUN_005a3260(&DAT_00606730,"trigl.dll");
    if (iVar1 != 0) {
      FUN_00565be0();
    }
    ShowWindow(_DAT_02d21b78,6);
    return;
  }
  return;
}
