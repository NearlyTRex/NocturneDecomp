// Name: FUN_0045c500
// Address: 0045c500
// Address Range: [[0045c500, 0045c522]]
// Convention: unknown
// Signature: void FUN_0045c500(int param_1)

#include "nocturne.h"

void FUN_0045c500(int param_1)

{
  if (*(int *)(param_1 + 0x2f9c) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x2f9c) = 0;
  return;
}
