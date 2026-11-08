// Name: FUN_005a18c0
// Address: 005a18c0
// Address Range: [[005a18c0, 005a18ea]]
// Convention: unknown
// Signature: uint FUN_005a18c0(int param_1,byte param_2)

#include "nocturne.h"

uint FUN_005a18c0(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = (uint)param_2;
    uVar1 = FUN_005c2f00(uVar2,*(int *)(param_1 + 4));
    if (uVar1 == uVar2) {
      return uVar1 ^ uVar2;
    }
  }
  return 0xfffffffe;
}
