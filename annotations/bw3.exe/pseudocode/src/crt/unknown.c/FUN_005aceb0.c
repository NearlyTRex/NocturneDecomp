// Name: crt_unknown.c_FUN_005aceb0
// Address: 005aceb0
// Address Range: [[005aceb0, 005acebe]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aceb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aceb0(void)

{
  uint *puVar1;
  
  FUN_005acecc(0);
  while (_DAT_02d252a4 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02d252a4;
    FUN_005a3770(_DAT_02d252a4);
    _DAT_02d252a4 = puVar1;
  }
  return;
}
