// Name: FUN_004d15d0
// Address: 004d15d0
// Address Range: [[004d15d0, 004d161f]]
// Convention: unknown
// Signature: undefined4 FUN_004d15d0(int param_1)

#include "nocturne.h"

uint FUN_004d15d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x2471c) != 0) {
    iVar1 = FUN_0046b960(DAT_0060b280);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x246fc) == 4)) {
      iVar1 = FUN_005035c0(param_1 + 0x2b4);
      if (*(int *)(iVar1 + 0x24) == 10) {
        return 0;
      }
    }
  }
  uVar2 = FUN_00510900(param_1);
  return uVar2;
}
