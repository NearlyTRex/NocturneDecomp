// Name: FUN_005aede0
// Address: 005aede0
// Address Range: [[005aede0, 005aee24]]
// Convention: unknown
// Signature: undefined4 FUN_005aede0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005aede0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    iVar1 = FUN_005af2a0(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_005ac9c0(param_1);
    iVar1 = FUN_005b08a0(param_2,uVar2);
    if (iVar1 != 0) break;
    param_1 = FUN_005aca00(param_1);
  }
  return param_1;
}
