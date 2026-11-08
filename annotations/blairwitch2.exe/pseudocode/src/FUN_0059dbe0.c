// Name: FUN_0059dbe0
// Address: 0059dbe0
// Address Range: [[0059dbe0, 0059dbff]]
// Convention: unknown
// Signature: undefined4 FUN_0059dbe0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0059dbe0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x838) != 0) {
    return *(uint *)(param_1 + 0x210 + param_2 * 0x20);
  }
  return 0;
}
