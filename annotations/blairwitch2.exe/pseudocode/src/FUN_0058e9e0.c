// Name: FUN_0058e9e0
// Address: 0058e9e0
// Address Range: [[0058e9e0, 0058eaac]]
// Convention: unknown
// Signature: int FUN_0058e9e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058e9e0(void)

{
  double dVar1;
  int iVar2;
  DWORD DVar3;
  float10 fVar4;
  
  if (_DAT_02662d84 == 0) {
    _DAT_02662d60 = _DAT_02662d68;
    _DAT_02662d64 = _DAT_02662d6c;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02662d68);
    iVar2 = _DAT_02662d80;
    dVar1 = ((((double)_DAT_02662d68 + (double)_DAT_02662d6c * _DAT_005ee852) -
             ((double)_DAT_02662d60 + (double)_DAT_02662d64 * _DAT_005ee852)) / _DAT_02662d78) *
            _DAT_005ee85a * _DAT_005ee862;
    if (0.0 < dVar1) {
      fVar4 = (float10)dVar1;
      FUN_005b7ff0();
      _DAT_02662d80 = iVar2 + (int)ROUND(fVar4);
    }
    return _DAT_02662d80;
  }
  DVar3 = timeGetTime();
  return DVar3 * 0x49c;
}
