// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005587f0
// Address: 005587f0
// Address Range: [[005587f0, 00558a18]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&g_PerformanceFrequency);
  if (BVar1 == 1) {
    g_TimerCalibration =
         (double)g_PerformanceFrequency.LowPart +
         (double)g_PerformanceFrequency.HighPart * 4294967296;
    QueryPerformanceCounter((LARGE_INTEGER *)&g_PerformanceCounter);
  }
  else {
    g_UseMultimediaTimer = 1;
    MVar4 = timeBeginPeriod(1);
    if (MVar4 != 0) {
      iVar2 = MessageBoxA(g_MainWindowHandle,"Unable to set timer",PTR_s_Nocturne_005c165c,
                          0x31);
      if (iVar2 == 2) {
        g_InputDisabled = 1;
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
  g_CalibratedCPUSpeed = local_18 / 5;
  return;
}
