// Name: FUN_0040c870
// Address: 0040c870
// Address Range: [[00408b80, 00408b85] [0040c870, 0040c88f]]
// Convention: unknown
// Signature: undefined4 FUN_0040c870(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0040c870(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(param_1 + 0x38)) break;
    param_1 = *(int *)(param_1 + 0x28);
  }
  return 1;
}
