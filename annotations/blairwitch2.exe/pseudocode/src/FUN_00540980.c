// Name: FUN_00540980
// Address: 00540980
// Address Range: [[00540980, 00540a02]]
// Convention: unknown
// Signature: void FUN_00540980(int param_1,int param_2)

#include "nocturne.h"

void FUN_00540980(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_005027b0(param_1);
  }
  *(uint *)(param_1 + 0x1d1f8) = 0;
  *(uint *)(param_1 + 0x1e00c) = 0;
  FUN_005b7fce(*(uint *)(param_1 + 0x1e010));
  FUN_005b7fce(*(uint *)(param_1 + 0x1e014));
  FUN_005b7fce(*(uint *)(param_1 + 0x1e018));
  *(uint *)(param_1 + 0x1e010) = 0;
  *(uint *)(param_1 + 0x1e014) = 0;
  *(uint *)(param_1 + 0x1e018) = 0;
  *(byte *)(param_1 + 0x1d1a8) = 0;
  return;
}
