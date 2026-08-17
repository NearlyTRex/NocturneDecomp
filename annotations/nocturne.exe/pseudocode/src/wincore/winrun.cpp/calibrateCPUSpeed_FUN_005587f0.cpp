// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005587f0
// Address: 005587f0
// Address Range: [[005587f0, 00558a18]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_02de07e0);
  if (BVar1 == 1) {
    _DAT_02de07e8 = (double)_DAT_02de07e0 + (double)_DAT_02de07e4 * 4294967296;
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_02de07d8);
  }
  else {
    _DAT_02de07f4 = 1;
    MVar4 = timeBeginPeriod(1);
    if (MVar4 != 0) {
      iVar2 = MessageBoxA(g_HWND_02de2098,"Unable to set timer",PTR_s_Nocturne_005c165c,
                          0x31);
      if (iVar2 == 2) {
        _DAT_02de20a0 = 1;
      }
    }
  }
  local_18 = 0;
  local_14 = 0;
  do {
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 99;
    } while (uVar5 < 100000000);
    iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_18 = local_18 + 0x7080000U / (uint)(iVar3 - iVar2);
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  _DAT_01c03950 = local_18 / 5;
  return;
}
