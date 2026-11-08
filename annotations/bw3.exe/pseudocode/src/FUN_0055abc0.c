// Name: FUN_0055abc0
// Address: 0055abc0
// Address Range: [[0055abc0, 0055abfc]]
// Convention: unknown
// Signature: int FUN_0055abc0(float param_1)

#include "nocturne.h"

int FUN_0055abc0(float param_1)

{
  float10 fVar1;
  uint local_4;
  
  fVar1 = (float10)param_1;
  FUN_005a3120();
  local_4 = (int)ROUND(fVar1);
  if (local_4 < 100) {
    local_4 = 100;
  }
  else if (100000 < local_4) {
    return 100000;
  }
  return local_4;
}
