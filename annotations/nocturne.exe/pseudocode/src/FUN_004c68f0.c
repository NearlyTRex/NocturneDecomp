// Name: FUN_004c68f0
// Address: 004c68f0
// Address Range: [[004c68f0, 004c6966]]
// Convention: unknown
// Signature: undefined4 FUN_004c68f0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004c68f0(int param_1,uint param_2)

{
  byte local_20 [8];
  float local_18;
  
  if (*(int *)(param_1 + 0x804) != 2) {
    FUN_0040a290(param_1,local_20,param_2);
    if ((*(int *)(param_1 + 0x804) != 0) || (local_18 <= 0.0)) {
      if ((*(int *)(param_1 + 0x804) == 1) && (local_18 < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}
