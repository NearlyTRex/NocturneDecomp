// Name: wincore_winrun.cpp_getTime_FUN_00558a30
// Address: 00558a30
// Address Range: [[00558a30, 00558adf]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (g_UseMultimediaTimer != 0) {
    DVar2 = timeGetTime();
    return DVar2 * 0x49c;
  }
  g_PreviousCounterLow = g_PerformanceCounter.LowPart;
  g_PreviousCounterHigh = g_PerformanceCounter.HighPart;
  QueryPerformanceCounter((LARGE_INTEGER *)&g_PerformanceCounter);
  iVar1 = g_AccumulatedGameTime;
  dVar3 = round
                    (((((double)g_PerformanceCounter.LowPart +
                       (double)g_PerformanceCounter.HighPart * 4294967296) -
                      ((double)g_PreviousCounterLow +
                      (double)g_PreviousCounterHigh * 4294967296)) / g_TimerCalibration) *
                     65536 * 18);
  g_AccumulatedGameTime = iVar1 + (int)ROUND(dVar3);
  return iVar1 + (int)ROUND(dVar3);
}
