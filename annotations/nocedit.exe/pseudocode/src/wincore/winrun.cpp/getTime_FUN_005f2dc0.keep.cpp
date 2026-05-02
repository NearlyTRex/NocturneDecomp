// Name: wincore_winrun.cpp_getTime_FUN_005f2dc0
// Address: 005f2dc0
// MANUAL RECONSTRUCTION
// Address Range: [[005f2dc0, 005f2e6f]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)

{
  DWORD DVar1;
  
  if (g_UseMultimediaTimer != 0) {
    DVar1 = (*g_timeGetTimeFunc)();
    return DVar1 * 0x49c;
  }
  g_PreviousCounterLow = g_PerformanceCounter.LowPart;
  g_PreviousCounterHigh = g_PerformanceCounter.HighPart;
  (*g_QueryPerformanceCounterFunc)((LARGE_INTEGER *)&g_PerformanceCounter);
  g_AccumulatedGameTime =
       g_AccumulatedGameTime +
       (int)ROUND(ROUND(((((double)g_PerformanceCounter.LowPart +
                          (double)g_PerformanceCounter.HighPart * 4294967296) -
                         ((double)g_PreviousCounterLow +
                         (double)(int)g_PreviousCounterHigh * 4294967296)) /
                        g_TimerCalibration) * 65536 * 18));
  return g_AccumulatedGameTime;
}
