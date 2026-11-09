// Name: wincore_winrun.cpp_FUN_005b2420
// Address: 005b2420
// Address Range: [[005b2420, 005b24ec]]
// Convention: unknown
// Signature: int wincore_winrun_cpp_FUN_005b2420(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int wincore_winrun_cpp_FUN_005b2420(void)

{
  double dVar1;
  int iVar2;
  DWORD DVar3;
  float10 fVar4;
  
  if (_DAT_02c9a5c4 == 0) {
    _DAT_02c9a5a0 = _DAT_02c9a5a8;
    _DAT_02c9a5a4 = _DAT_02c9a5ac;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02c9a5a8);
    iVar2 = _DAT_02c9a5c0;
    dVar1 = ((((double)_DAT_02c9a5a8 + (double)_DAT_02c9a5ac * _DAT_005f9c2a) -
             ((double)_DAT_02c9a5a0 + (double)_DAT_02c9a5a4 * _DAT_005f9c2a)) / _DAT_02c9a5b8) *
            _DAT_005f9c32 * _DAT_005f9c3a;
    if (0.0 < dVar1) {
      fVar4 = (float10)dVar1;
      round();
      _DAT_02c9a5c0 = iVar2 + (int)ROUND(fVar4);
    }
    return _DAT_02c9a5c0;
  }
  DVar3 = timeGetTime();
  return DVar3 * 0x49c;
}
