// Name: FUN_00407980
// Address: 00407980
// Address Range: [[00407980, 004079e9]]
// Convention: unknown
// Signature: void FUN_00407980(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407980(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_007ba070 != 0) {
    if (_DAT_01c37788 != 0) {
      FUN_0055f950(&DAT_00622014,0x7ba074,_DAT_007ba070,0xcd);
      _DAT_007ba070 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < _DAT_007ba070) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)(iVar2 + 0x7ba074);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        FUN_00405b70(*puVar1);
      } while (iVar3 < _DAT_007ba070);
    }
    _DAT_007ba070 = 0;
  }
  return;
}
