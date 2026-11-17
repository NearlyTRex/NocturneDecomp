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
  
  if (g_INT_ARRAY_02662d84[0] == 0) {
    g_DWORD_02662d60 = g_struct_19_02662d68.LowPart;
    g_INT_02662d64 = g_struct_19_02662d68.HighPart;
    QueryPerformanceCounter((LARGE_INTEGER *)&g_struct_19_02662d68);
    iVar1 = g_INT_02662d80;
    dVar3 = ((((double)g_struct_19_02662d68.LowPart +
              (double)g_struct_19_02662d68.HighPart * 4294967296) -
             ((double)g_DWORD_02662d60 + (double)g_INT_02662d64 * 4294967296)) /
            g_DOUBLE_02662d78) * 65536 * 18;
    if (0.0 < dVar3) {
      dVar3 = round(dVar3);
      g_INT_02662d80 = iVar1 + (int)ROUND(dVar3);
    }
    return g_INT_02662d80;
  }
  DVar2 = timeGetTime();
  return DVar2 * 0x49c;
}
