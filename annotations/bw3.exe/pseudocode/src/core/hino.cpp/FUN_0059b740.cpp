// Name: core_hino.cpp_FUN_0059b740
// Address: 0059b740
// Address Range: [[0059b740, 0059b769]]
// Convention: unknown
// Signature: int core_hino_cpp_FUN_0059b740(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_hino_cpp_FUN_0059b740(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 * (float10)_DAT_005d9bdc * (float10)_DAT_005d9be4;
  round();
  return (int)ROUND(fVar1);
}
