// Name: FUN_004444c0
// Address: 004444c0
// Address Range: [[004444c0, 004444e9]]
// Convention: unknown
// Signature: undefined4 FUN_004444c0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_004444c0(int param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 4) {
    return 1;
  }
  if (*(int *)(param_1 + 0xd844) != 0) {
    return 0;
  }
  uVar1 = FUN_00430430(param_1,param_2);
  return uVar1;
}
