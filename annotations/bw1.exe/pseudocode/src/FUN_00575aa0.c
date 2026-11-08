// Name: FUN_00575aa0
// Address: 00575aa0
// Address Range: [[00575aa0, 00575b1e]]
// Convention: unknown
// Signature: undefined4 FUN_00575aa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575aa0(void)

{
  int iVar1;
  
  iVar1 = FUN_00575980();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00575990();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00575d20();
  iVar1 = FUN_005759b0(_DAT_00623320,_DAT_00623324,_DAT_00623328,_DAT_02c81040);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*_DAT_02c81038 + 4))(_DAT_02c81038);
    if (iVar1 != 0) {
      _DAT_02c8103c = 1;
      FUN_00573e70();
      return 1;
    }
  }
  FUN_00573e70();
  return 0;
}
