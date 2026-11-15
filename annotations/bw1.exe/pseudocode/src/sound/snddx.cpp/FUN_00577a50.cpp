// Name: sound_snddx.cpp_FUN_00577a50
// Address: 00577a50
// Address Range: [[00577a50, 00577a8c]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00577a50(float param_1)

#include "nocturne.h"

int sound_snddx_cpp_FUN_00577a50(float param_1)

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
