// Name: thunk_FUN_00574db0
// Address: 004037f0
// Address Range: [[004037f0, 004037f4]]
// Convention: unknown
// Signature: void thunk_FUN_00574db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00574db0(void)

{
  int iVar1;
  
  FUN_005739a0(_DAT_02652eb0);
  iVar1 = _DAT_02652eb0;
  if (_DAT_02652eb0 == 0) {
    _DAT_02652eb0 = 0;
    return;
  }
  FUN_005739b0(_DAT_02652eb0);
  FUN_005b7fdc(iVar1);
  _DAT_02652eb0 = 0;
  return;
}
