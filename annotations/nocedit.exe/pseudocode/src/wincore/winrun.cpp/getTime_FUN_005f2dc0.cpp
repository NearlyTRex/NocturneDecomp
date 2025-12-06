// Name: wincore_winrun.cpp_getTime_FUN_005f2dc0
// Address: 005f2dc0
// Address Range: [[005f2dc0, 005f2e6f]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_getTime_FUN_005f2dc0(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void)

{
  int iVar1;
  DWORD DVar2;
  uint extraout_EDX;
  float10 fVar3;
  
  if (g_UseMultimediaTimer != 0) {
    DVar2 = (*timeGetTime)();
    return DVar2 * 0x49c;
  }
  g_PreviousCounterLow = g_PerformanceCounter.s.LowPart;
  g_PreviousCounterHigh = g_PerformanceCounter.s.HighPart;
  (*QueryPerformanceCounter)(&g_PerformanceCounter);
  iVar1 = g_AccumulatedGameTime;
  fVar3 = ((((float10)g_PerformanceCounter._0_4_ +
            (float10)g_PerformanceCounter.s.HighPart * (float10)4294967296) -
           ((float10)g_PreviousCounterLow +
           (float10)(int)g_PreviousCounterHigh * (float10)4294967296)) /
          (float10)g_TimerCalibration) * (float10)65536 * (float10)18;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,g_PerformanceCounter.s.LowPart));
  g_AccumulatedGameTime = iVar1 + (int)ROUND(fVar3);
  return iVar1 + (int)ROUND(fVar3);
}
