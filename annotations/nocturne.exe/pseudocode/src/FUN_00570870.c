// Name: FUN_00570870
// Address: 00570870
// Address Range: [[00570870, 005708b4]]
// Convention: unknown
// Signature: undefined4 FUN_00570870(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00570870(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    iVar1 = FUN_00570ca0(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_0056d9f0(param_1);
    iVar1 = FUN_00572a90(param_2,uVar2);
    if (iVar1 != 0) break;
    param_1 = FUN_0056da80(param_1);
  }
  return param_1;
}
