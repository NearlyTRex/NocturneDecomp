// Name: FUN_0048c3c0
// Address: 0048c3c0
// Address Range: [[0048c3c0, 0048c418]]
// Convention: unknown
// Signature: void FUN_0048c3c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c3c0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_00488280(&DAT_01c62ebc + _DAT_01c62eb8 * 0x24,param_2,param_3,param_5);
    _DAT_01c62eb8 = _DAT_01c62eb8 + 1;
    if (499 < _DAT_01c62eb8) {
      _DAT_01c62eb8 = 0;
    }
  }
  return;
}
