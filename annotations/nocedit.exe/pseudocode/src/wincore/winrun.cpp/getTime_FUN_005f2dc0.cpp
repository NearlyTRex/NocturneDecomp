// Name: wincore_winrun.cpp_getTime_FUN_005f2dc0
// Address: 005f2dc0
// Address Range: [[005f2dc0, 005f2e6f]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (g_UseMultimediaTimer != 0) {
    DVar2 = (*g_timeGetTimeFunc)();
    return DVar2 * 0x49c;
  }
  g_PreviousCounterLow = g_PerformanceCounter.s.LowPart;
  g_PreviousCounterHigh = g_PerformanceCounter.s.HighPart;
  (*g_QueryPerformanceCounterFunc)(&g_PerformanceCounter);
  iVar1 = g_AccumulatedGameTime;
  dVar3 = round
                    (((((double)g_PerformanceCounter._0_4_ +
                       (double)g_PerformanceCounter.s.HighPart * 4294967296) -
                      ((double)g_PreviousCounterLow +
                      (double)(int)g_PreviousCounterHigh * 4294967296)) /
                     g_TimerCalibration) * 65536 * 18);
  g_AccumulatedGameTime = iVar1 + (int)ROUND(dVar3);
  return iVar1 + (int)ROUND(dVar3);
}
