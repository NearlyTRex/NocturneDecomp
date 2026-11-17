// Name: wincore_winrun.cpp_getTime_FUN_0058e9e0
// Address: 0058e9e0
// Address Range: [[0058e9e0, 0058eaac]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_0058e9e0(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getTime_FUN_0058e9e0(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (g_UseMultimediaTimer[0] == 0) {
    g_PreviousCounterLow = g_PerformanceCounter.LowPart;
    g_PreviousCounterHigh = g_PerformanceCounter.HighPart;
    QueryPerformanceCounter((LARGE_INTEGER *)&g_PerformanceCounter);
    iVar1 = g_AccumulatedGameTime;
    dVar3 = ((((double)g_PerformanceCounter.LowPart +
              (double)g_PerformanceCounter.HighPart * 4294967296) -
             ((double)g_PreviousCounterLow + (double)g_PreviousCounterHigh * 4294967296))
            / g_TimerCalibration) * 65536 * 18;
    if (0.0 < dVar3) {
      dVar3 = round(dVar3);
      g_AccumulatedGameTime = iVar1 + (int)ROUND(dVar3);
    }
    return g_AccumulatedGameTime;
  }
  DVar2 = timeGetTime();
  return DVar2 * 0x49c;
}
