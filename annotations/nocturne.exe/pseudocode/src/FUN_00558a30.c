// Name: FUN_00558a30
// Address: 00558a30
// Address Range: [[00558a30, 00558adf]]
// Convention: unknown
// Signature: int FUN_00558a30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00558a30(void)

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
  fVar3 = ((((float10)_DAT_02de07d8 + (float10)_DAT_02de07dc * (float10)_DAT_00597f31) -
           ((float10)_DAT_02de07d0 + (float10)_DAT_02de07d4 * (float10)_DAT_00597f31)) /
          (float10)_DAT_02de07e8) * (float10)_DAT_00597f39 * (float10)_DAT_00597f41;
  FUN_00563a30();
  _DAT_02de07f0 = iVar1 + (int)ROUND(fVar3);
  return iVar1 + (int)ROUND(fVar3);
}
