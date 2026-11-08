// Name: FUN_004dea90
// Address: 004dea90
// Address Range: [[004dea90, 004deaab]]
// Convention: unknown
// Signature: undefined4 FUN_004dea90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004dea90(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c790(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
