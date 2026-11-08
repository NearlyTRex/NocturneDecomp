// Name: FUN_00534610
// Address: 00534610
// Address Range: [[00534610, 0053463f]]
// Convention: unknown
// Signature: void FUN_00534610(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00534610(int param_1,uint param_2)

{
  if (*(int *)(DAT_0060b280 + 0x18) != 0) {
    FUN_004fac90(*(uint *)(param_1 + 0x161664),param_2);
    return;
  }
  FUN_004699a0(DAT_0060b280,param_2);
  return;
}
