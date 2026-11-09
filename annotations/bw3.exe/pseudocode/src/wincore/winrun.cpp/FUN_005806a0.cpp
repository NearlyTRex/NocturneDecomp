// Name: wincore_winrun.cpp_FUN_005806a0
// Address: 005806a0
// Address Range: [[005806a0, 0058076c]]
// Convention: unknown
// Signature: int wincore_winrun_cpp_FUN_005806a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int wincore_winrun_cpp_FUN_005806a0(void)

{
  double dVar1;
  int iVar2;
  DWORD DVar3;
  float10 fVar4;
  
  if (_DAT_02d202d4 == 0) {
    _DAT_02d202b0 = _DAT_02d202b8;
    _DAT_02d202b4 = _DAT_02d202bc;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02d202b8);
    iVar2 = _DAT_02d202d0;
    dVar1 = ((((double)_DAT_02d202b8 + (double)_DAT_02d202bc * _DAT_005d7c4b) -
             ((double)_DAT_02d202b0 + (double)_DAT_02d202b4 * _DAT_005d7c4b)) / _DAT_02d202c8) *
            _DAT_005d7c53 * _DAT_005d7c5b;
    if (0.0 < dVar1) {
      fVar4 = (float10)dVar1;
      round();
      _DAT_02d202d0 = iVar2 + (int)ROUND(fVar4);
    }
    return _DAT_02d202d0;
  }
  DVar3 = timeGetTime();
  return DVar3 * 0x49c;
}
