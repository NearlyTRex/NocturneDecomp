// Name: wincore_winrun.cpp_getTime_FUN_00558a30
// Address: 00558a30
// Address Range: [[00558a30, 00558adf]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void)

{
  int iVar1;
  DWORD DVar2;
  float10 fVar3;
  
  if (_DAT_02de07f4 != 0) {
    DVar2 = timeGetTime();
    return DVar2 * 0x49c;
  }
  _DAT_02de07d0 = _DAT_02de07d8;
  _DAT_02de07d4 = _DAT_02de07dc;
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02de07d8);
  iVar1 = _DAT_02de07f0;
  fVar3 = (float10)round
                             (((((float10)_DAT_02de07d8 +
                                (float10)_DAT_02de07dc * (float10)4294967296) -
                               ((float10)_DAT_02de07d0 +
                               (float10)_DAT_02de07d4 * (float10)4294967296)) /
                              (float10)_DAT_02de07e8) * (float10)65536 *
                              (float10)18);
  _DAT_02de07f0 = iVar1 + (int)ROUND(fVar3);
  return iVar1 + (int)ROUND(fVar3);
}
