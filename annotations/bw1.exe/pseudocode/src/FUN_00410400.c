// Name: FUN_00410400
// Address: 00410400
// Address Range: [[00410400, 00410420]]
// Convention: unknown
// Signature: void FUN_00410400(int param_1,int param_2)

#include "nocturne.h"

void FUN_00410400(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  FUN_004319e0(param_1,param_2);
  return;
}
