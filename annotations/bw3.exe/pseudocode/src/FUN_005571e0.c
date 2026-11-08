// Name: FUN_005571e0
// Address: 005571e0
// Address Range: [[005571e0, 00557257]]
// Convention: unknown
// Signature: undefined4 FUN_005571e0(double param_1,double param_2,double param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005571e0(double param_1,double param_2,double param_3)

{
  if ((_DAT_02cf28bc != 0) &&
     ((param_3 - _DAT_02cf2850) * (param_3 - _DAT_02cf2850) +
      (param_2 - _DAT_02cf2840) * (param_2 - _DAT_02cf2840) +
      (param_1 - _DAT_02cf2830) * (param_1 - _DAT_02cf2830) <=
      (param_3 - _DAT_02cf2848) * (param_3 - _DAT_02cf2848) +
      (param_2 - _DAT_02cf2838) * (param_2 - _DAT_02cf2838) +
      (param_1 - _DAT_02cf2828) * (param_1 - _DAT_02cf2828))) {
    return 1;
  }
  return 0;
}
