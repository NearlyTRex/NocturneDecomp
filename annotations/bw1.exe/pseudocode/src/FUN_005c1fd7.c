// Name: FUN_005c1fd7
// Address: 005c1fd7
// Address Range: [[005c1fd7, 005c1ff7]]
// Convention: unknown
// Signature: undefined4 FUN_005c1fd7(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005c1fd7(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = 0;
  FUN_005c8e45(param_1,param_2);
  return uVar1;
}
