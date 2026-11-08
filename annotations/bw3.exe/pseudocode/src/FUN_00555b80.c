// Name: FUN_00555b80
// Address: 00555b80
// Address Range: [[00555b80, 00555bc1]]
// Convention: unknown
// Signature: undefined4 FUN_00555b80(int param_1)

#include "nocturne.h"

uint FUN_00555b80(int param_1)

{
  if (*(int *)(param_1 + 0x124) < 2) {
    if ((*(int *)(param_1 + 0x110) <= *(int *)(param_1 + 0x128)) && (*(int *)(param_1 + 0x13c) < 1))
    {
      if ((*(int *)(param_1 + 0x110) <= *(int *)(param_1 + 0x128)) &&
         (*(int *)(param_1 + 0x13c) == 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 2;
}
