// Name: FUN_0049e680
// Address: 0049e680
// Address Range: [[0049e680, 0049e6d8]]
// Convention: unknown
// Signature: void FUN_0049e680(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e680(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_0049a1b0(&DAT_01c9cd98 + _DAT_01c9cd94 * 0x24,param_2,param_3,param_5);
    _DAT_01c9cd94 = _DAT_01c9cd94 + 1;
    if (499 < _DAT_01c9cd94) {
      _DAT_01c9cd94 = 0;
    }
  }
  return;
}
