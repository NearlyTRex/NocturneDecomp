// Name: wincore_winrun.cpp_getTime_FUN_0058e9e0
// Address: 0058e9e0
// Address Range: [[0058e9e0, 0058eaac]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_0058e9e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getTime_FUN_0058e9e0(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (_DAT_02662d84 == 0) {
    _DAT_02662d60 = _DAT_02662d68;
    _DAT_02662d64 = _DAT_02662d6c;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02662d68);
    iVar1 = _DAT_02662d80;
    dVar3 = ((((double)_DAT_02662d68 + (double)_DAT_02662d6c * _DAT_005ee852) -
             ((double)_DAT_02662d60 + (double)_DAT_02662d64 * _DAT_005ee852)) / _DAT_02662d78) *
            _DAT_005ee85a * _DAT_005ee862;
    if (0.0 < dVar3) {
      dVar3 = round(dVar3);
      _DAT_02662d80 = iVar1 + (int)ROUND(dVar3);
    }
    return _DAT_02662d80;
  }
  DVar2 = timeGetTime();
  return DVar2 * 0x49c;
}
