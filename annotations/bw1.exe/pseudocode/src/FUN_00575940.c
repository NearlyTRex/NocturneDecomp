// Name: FUN_00575940
// Address: 00575940
// Address Range: [[00575940, 00575974]]
// Convention: unknown
// Signature: undefined4 FUN_00575940(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575940(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00575b70();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (_DAT_02c81038 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02c81038)(_DAT_02c81038);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02c81038 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
