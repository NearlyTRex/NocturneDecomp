// Name: FUN_004a5770
// Address: 004a5770
// Address Range: [[004a5770, 004a57b1]]
// Convention: unknown
// Signature: void FUN_004a5770(int param_1,int param_2)

#include "nocturne.h"

void FUN_004a5770(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x2d4) == 2) && (param_2 == 1)) {
    FUN_00556be0(*(uint *)(param_1 + 0x25c4));
    *(uint *)(param_1 + 0x25c4) = 0;
  }
  FUN_0057b7f0(param_1,param_2);
  return;
}
