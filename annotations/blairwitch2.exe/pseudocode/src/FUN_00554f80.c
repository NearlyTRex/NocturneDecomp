// Name: FUN_00554f80
// Address: 00554f80
// Address Range: [[00554f80, 00555018]]
// Convention: unknown
// Signature: int FUN_00554f80(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00554f80(float param_1)

{
  double dVar1;
  float10 fVar2;
  uint local_10;
  
  dVar1 = (double)param_1;
  if (dVar1 <= 0.0) {
    return -10000;
  }
  if (1.0 <= dVar1) {
    return 0;
  }
  dVar1 = (double)FUN_005b84d0(dVar1 * 0.6931471805599453 * _DAT_005e9ab1);
  fVar2 = (float10)dVar1;
  FUN_005b7ff0();
  local_10 = (int)ROUND(fVar2);
  if (local_10 < 1) {
    if (local_10 < -10000) {
      return -10000;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}
