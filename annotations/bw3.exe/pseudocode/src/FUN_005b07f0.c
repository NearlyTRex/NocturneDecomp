// Name: FUN_005b07f0
// Address: 005b07f0
// Address Range: [[005b07f0, 005b083c]]
// Convention: unknown
// Signature: void FUN_005b07f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005b07f0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005b0eb0(2);
  FUN_005b0ee0(*(uint *)(&DAT_00607ef4 + param_1 * 4),uVar1);
  FUN_005b0ee0(&DAT_005daf55,uVar1);
  FUN_005b0ee0(param_2,uVar1);
  FUN_005a5d70(10,uVar1);
  return;
}
