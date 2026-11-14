// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_0058e7a0
// Address: 0058e7a0
// Address Range: [[0058e7a0, 0058e9c8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_0058e7a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_0058e7a0(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_02662d70);
  if (BVar1 == 1) {
    _DAT_02662d78 = (double)_DAT_02662d70 + (double)_DAT_02662d74 * _DAT_005ee84a;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02662d68);
  }
  else {
    _DAT_02662d84 = 1;
    MVar4 = timeBeginPeriod(1);
    if (MVar4 != 0) {
      iVar2 = MessageBoxA(_DAT_02664628,"@Unable to set timer" + 1,
                          PTR_s_Coffin_Rock_0061e988,0x31);
      if (iVar2 == 2) {
        _DAT_02664630 = 1;
      }
    }
  }
  local_18 = 0;
  local_14 = 0;
  do {
    iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 99;
    } while (uVar5 < 100000000);
    iVar3 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    local_18 = local_18 + 0x7080000U / (uint)(iVar3 - iVar2);
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  _DAT_01c38b48 = local_18 / 5;
  return;
}
