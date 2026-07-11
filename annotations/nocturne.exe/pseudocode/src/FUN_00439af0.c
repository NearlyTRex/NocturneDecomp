// Name: FUN_00439af0
// Address: 00439af0
// Address Range: [[00439af0, 00439b22]]
// Convention: unknown
// Signature: undefined4 FUN_00439af0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00439af0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x2c) < 0) {
    return 1;
  }
  FUN_00439760(param_1 + 4,*(int *)(param_1 + 0x2c),param_2);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  return 1;
}
