// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80
// Address: 005f2b80
// Address Range: [[005f2b80, 005f2da8]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void)

{
  BOOL BVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  int in_stack_00000008;
  int iVar5;
  int iVar6;
  
  BVar1 = (*QueryPerformanceFrequency)(&g_PerformanceFrequency);
  if (BVar1 == 1) {
    g_TimerCalibration =
         (double)g_PerformanceFrequency._0_4_ +
         (double)g_PerformanceFrequency.s.HighPart * 4294967296;
    (*QueryPerformanceCounter)(&g_PerformanceCounter);
  }
  else {
    g_UseMultimediaTimer = 1;
    MVar3 = (*timeBeginPeriod)(1);
    if (MVar3 != 0) {
      iVar5 = (*MessageBoxA)(g_MainWindowHandle,"Unable to set timer",
                             g_ApplicationTimerTitle,0x31);
      if (iVar5 == 2) {
        g_InputDisabled = 1;
      }
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  do {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 99;
    } while (uVar4 < 100000000);
    iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar5 = iVar5 + 0x7080000U / (uint)(iVar2 - in_stack_00000008);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  g_CalibratedCPUSpeed = iVar5 / 5;
  return;
}
