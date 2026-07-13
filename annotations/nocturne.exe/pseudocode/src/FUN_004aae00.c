// Name: FUN_004aae00
// Address: 004aae00
// Address Range: [[004aae00, 004aae27]]
// Convention: unknown
// Signature: void FUN_004aae00(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004aae00(int param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0xbd44) == 0) && (*(int *)(param_1 + 0xbd40) < 1)) {
    FUN_0047a000(param_1,param_2);
    return;
  }
  return;
}
