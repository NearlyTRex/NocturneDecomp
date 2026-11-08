// Name: FUN_005a3a90
// Address: 005a3a90
// Address Range: [[005a3a90, 005a3ad0]]
// Convention: unknown
// Signature: undefined4 FUN_005a3a90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a3a90(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  (*(code *)PTR_FUN_006079b4)();
  puVar1 = _DAT_02d252a0;
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      (*(code *)PTR_FUN_006079b8)();
      return 0xffffffff;
    }
    if (param_1 == puVar1[1]) break;
    puVar1 = (uint *)*puVar1;
  }
  (*(code *)PTR_FUN_006079b8)();
  uVar2 = FUN_005a3ad4(param_1,1);
  return uVar2;
}
