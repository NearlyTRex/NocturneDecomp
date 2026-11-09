// Name: sound_snddx.cpp_FUN_0055ab20
// Address: 0055ab20
// Address Range: [[0055ab20, 0055abb8]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_0055ab20(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_0055ab20(float param_1)

{
  float10 fVar1;
  double dVar2;
  uint local_10;
  
  dVar2 = (double)param_1;
  if (dVar2 <= 0.0) {
    return -10000;
  }
  if (1.0 <= dVar2) {
    return 0;
  }
  dVar2 = floor(dVar2 * 0.6931471805599453 * _DAT_005d45a5);
  fVar1 = (float10)dVar2;
  round();
  local_10 = (int)ROUND(fVar1);
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
