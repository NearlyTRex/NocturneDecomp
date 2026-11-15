// Name: sound_snddx.cpp_FUN_00554f80
// Address: 00554f80
// Address Range: [[00554f80, 00555018]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00554f80(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_00554f80(float param_1)

{
  double dVar1;
  uint uStack_14;
  
  dVar1 = (double)param_1;
  if (dVar1 <= 0.0) {
    return -10000;
  }
  if (1.0 <= dVar1) {
    return 0;
  }
  dVar1 = floor(dVar1 * 0.6931471805599453 * _DAT_005e9ab1);
  dVar1 = round(dVar1);
  uStack_14 = (int)ROUND(dVar1);
  if (uStack_14 < 1) {
    if (uStack_14 < -10000) {
      return -10000;
    }
  }
  else {
    uStack_14 = 0;
  }
  return uStack_14;
}
