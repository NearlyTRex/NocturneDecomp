// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005b21e0
// Address: 005b21e0
// Address Range: [[005b21e0, 005b2408]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_02c9a5b0);
  if (BVar1 == 1) {
    _DAT_02c9a5b8 = (double)_DAT_02c9a5b0 + (double)_DAT_02c9a5b4 * _DAT_005f9c22;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02c9a5a8);
  }
  else {
    _DAT_02c9a5c4 = 1;
    MVar4 = timeBeginPeriod(1);
    if (MVar4 != 0) {
      iVar2 = MessageBoxA(_DAT_02c9be68,"@Unable to set timer" + 1,PTR_s_Nocturne_006260e0,
                          0x31);
      if (iVar2 == 2) {
        _DAT_02c9be70 = 1;
      }
    }
  }
  local_18 = 0;
  local_14 = 0;
  do {
    iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 99;
    } while (uVar5 < 100000000);
    iVar3 = wincore_winrun_cpp_getTime_FUN_005b2420();
    local_18 = local_18 + 0x7080000U / (uint)(iVar3 - iVar2);
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  _DAT_01c51d08 = local_18 / 5;
  return;
}
