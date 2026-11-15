// Name: sound_snddx.cpp_FUN_00555020
// Address: 00555020
// Address Range: [[00555020, 0055505c]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00555020(float param_1)

#include "nocturne.h"

int sound_snddx_cpp_FUN_00555020(float param_1)

{
  double dVar1;
  uint uStack_8;
  
  dVar1 = round((double)param_1);
  uStack_8 = (int)ROUND(dVar1);
  if (uStack_8 < 100) {
    uStack_8 = 100;
  }
  else if (100000 < uStack_8) {
    return 100000;
  }
  return uStack_8;
}
