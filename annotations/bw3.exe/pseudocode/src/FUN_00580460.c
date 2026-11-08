// Name: FUN_00580460
// Address: 00580460
// Address Range: [[00580460, 00580688]]
// Convention: unknown
// Signature: void FUN_00580460(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00580460(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_02d202c0);
  if (BVar1 == 1) {
    _DAT_02d202c8 = (double)_DAT_02d202c0 + (double)_DAT_02d202c4 * _DAT_005d7c43;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02d202b8);
  }
  else {
    _DAT_02d202d4 = 1;
    MVar4 = timeBeginPeriod(1);
    if (MVar4 != 0) {
      iVar2 = MessageBoxA(_DAT_02d21b78,"@Unable to set timer" + 1,
                          PTR_s_Blair_Witch_3_00607284,0x31);
      if (iVar2 == 2) {
        _DAT_02d21b80 = 1;
      }
    }
  }
  local_18 = 0;
  local_14 = 0;
  do {
    iVar2 = FUN_005806a0();
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 99;
    } while (uVar5 < 100000000);
    iVar3 = FUN_005806a0();
    local_18 = local_18 + 0x7080000U / (uint)(iVar3 - iVar2);
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  _DAT_01c6e2a8 = local_18 / 5;
  return;
}
