// Name: wincore_winrun.cpp_getTime_FUN_005806a0
// Address: 005806a0
// Address Range: [[005806a0, 0058076c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_005806a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getTime_FUN_005806a0(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (_DAT_02d202d4 == 0) {
    _DAT_02d202b0 = _DAT_02d202b8;
    _DAT_02d202b4 = _DAT_02d202bc;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02d202b8);
    iVar1 = _DAT_02d202d0;
    dVar3 = ((((double)_DAT_02d202b8 + (double)_DAT_02d202bc * _DAT_005d7c4b) -
             ((double)_DAT_02d202b0 + (double)_DAT_02d202b4 * _DAT_005d7c4b)) / _DAT_02d202c8) *
            _DAT_005d7c53 * _DAT_005d7c5b;
    if (0.0 < dVar3) {
      dVar3 = round(dVar3);
      _DAT_02d202d0 = iVar1 + (int)ROUND(dVar3);
    }
    return _DAT_02d202d0;
  }
  DVar2 = timeGetTime();
  return DVar2 * 0x49c;
}
