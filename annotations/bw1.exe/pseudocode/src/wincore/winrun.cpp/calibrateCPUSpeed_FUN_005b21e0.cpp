// Name: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005b21e0
// Address: 005b21e0
// Address Range: [[005b21e0, 005b2408]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005b21e0(void)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&g_struct_19_02c9a5b0);
  if (BVar1 == 1) {
    g_DOUBLE_02c9a5b8 =
         (double)g_struct_19_02c9a5b0.LowPart +
         (double)g_struct_19_02c9a5b0.HighPart * 4294967296;
    QueryPerformanceCounter((LARGE_INTEGER *)&g_struct_19_02c9a5a8);
  }
  else {
    g_INT_ARRAY_02c9a5c4[0] = 1;
    MVar4 = timeBeginPeriod(1);
    if (MVar4 != 0) {
      iVar2 = MessageBoxA(g_HWND_02c9be68,"Unable to set timer",PTR_s_Nocturne_006260e0,
                          0x31);
      if (iVar2 == 2) {
        g_INT_02c9be70 = 1;
      }
    }
  }
  local_18 = 0;
  local_14 = 0;
  do {
    iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 99;
    } while (uVar5 < 100000000);
    iVar3 = wincore_winrun_cpp_getTime_FUN_005b2420();
    local_18 = local_18 + 0x7080000U / (uint)(iVar3 - iVar2);
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  g_INT_01c51d08 = local_18 / 5;
  return;
}
