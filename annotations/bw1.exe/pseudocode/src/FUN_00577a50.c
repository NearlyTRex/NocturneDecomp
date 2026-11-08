// Name: FUN_00577a50
// Address: 00577a50
// Address Range: [[00577a50, 00577a8c]]
// Convention: unknown
// Signature: int FUN_00577a50(float param_1)

#include "nocturne.h"

int FUN_00577a50(float param_1)

{
  float10 fVar1;
  uint local_4;
  
  fVar1 = (float10)param_1;
  FUN_005c03a0();
  local_4 = (int)ROUND(fVar1);
  if (local_4 < 100) {
    local_4 = 100;
  }
  else if (100000 < local_4) {
    return 100000;
  }
  return local_4;
}
