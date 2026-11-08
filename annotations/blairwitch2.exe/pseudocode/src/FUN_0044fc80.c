// Name: FUN_0044fc80
// Address: 0044fc80
// Address Range: [[0044fc80, 0044fc9f]]
// Convention: unknown
// Signature: int FUN_0044fc80(int param_1)

#include "nocturne.h"

int FUN_0044fc80(int param_1)

{
  *(byte *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x178) = 0;
  FUN_0044fca0(param_1);
  return param_1;
}
