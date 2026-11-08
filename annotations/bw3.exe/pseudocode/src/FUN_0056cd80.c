// Name: FUN_0056cd80
// Address: 0056cd80
// Address Range: [[0056cd80, 0056cdae]]
// Convention: unknown
// Signature: undefined4 FUN_0056cd80(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0056cd80(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2d8) == 0) &&
     (iVar1 = FUN_0040c790(param_2,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
