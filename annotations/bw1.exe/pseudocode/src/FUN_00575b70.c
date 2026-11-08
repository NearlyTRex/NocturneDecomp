// Name: FUN_00575b70
// Address: 00575b70
// Address Range: [[00575b70, 00575ba8]]
// Convention: unknown
// Signature: undefined4 FUN_00575b70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575b70(void)

{
  int iVar1;
  
  FUN_00575d20();
  if (_DAT_02c81038 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c81038 + 8))(_DAT_02c81038);
    if (iVar1 == 0) {
      FUN_00573e70();
      return 0;
    }
  }
  _DAT_02c8103c = 0;
  FUN_00573e70();
  return 1;
}
