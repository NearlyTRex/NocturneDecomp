// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
// Address: 005f2b80
// Address Range: [[005f2b80, 005f2da8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  int iVar1;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = (*g_QueryPerformanceFrequencyFunc)((LARGE_INTEGER *)&g_PerformanceFrequency);
  if (BVar1 == 1) {
    g_TimerCalibration =
         (double)g_PerformanceFrequency.LowPart +
         (double)g_PerformanceFrequency.HighPart * 4294967296;
    (*g_QueryPerformanceCounterFunc)((LARGE_INTEGER *)&g_PerformanceCounter);
  }
  else {
    g_UseMultimediaTimer = 1;
    MVar4 = (*g_timeBeginPeriodFunc)(1);
    if (MVar4 != 0) {
      iVar1 = (*g_MessageBoxAFunc)
                        (g_MainWindowHandle,"Unable to set timer",g_ApplicationTimerTitle,
                         0x31);
      if (iVar1 == 2) {
        g_InputDisabled = 1;
      }
    }
  }
  local_18 = 0;
  local_14 = 0;
  do {
    iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 99;
    } while (uVar5 < 100000000);
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_18 = local_18 + 0x7080000U / (uint)(iVar3 - iVar2);
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  g_CalibratedCPUSpeed = local_18 / 5;
  return;
}
