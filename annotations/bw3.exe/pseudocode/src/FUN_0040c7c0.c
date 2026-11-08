// Name: FUN_0040c7c0
// Address: 0040c7c0
// Address Range: [[00408990, 00408995] [0040c7c0, 0040c7df]]
// Convention: unknown
// Signature: undefined4 FUN_0040c7c0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0040c7c0(int param_1,int param_2)

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
