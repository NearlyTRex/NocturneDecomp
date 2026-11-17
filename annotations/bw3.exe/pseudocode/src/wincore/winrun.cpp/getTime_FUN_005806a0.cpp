// Name: wincore_winrun.cpp_getTime_FUN_005806a0
// Address: 005806a0
// Address Range: [[005806a0, 0058076c]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_005806a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getTime_FUN_005806a0(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (g_INT_ARRAY_02d202d4[0] == 0) {
    _DAT_02d202b0 = g_struct_19_02d202b8.LowPart;
    g_INT_02d202b4 = g_struct_19_02d202b8.HighPart;
    QueryPerformanceCounter((LARGE_INTEGER *)&g_struct_19_02d202b8);
    iVar1 = g_INT_02d202d0;
    dVar3 = ((((double)g_struct_19_02d202b8.LowPart +
              (double)g_struct_19_02d202b8.HighPart * 4294967296) -
             ((double)_DAT_02d202b0 + (double)g_INT_02d202b4 * 4294967296)) /
            g_DOUBLE_02d202c8) * 65536 * 18;
    if (0.0 < dVar3) {
      dVar3 = round(dVar3);
      g_INT_02d202d0 = iVar1 + (int)ROUND(dVar3);
    }
    return g_INT_02d202d0;
  }
  DVar2 = timeGetTime();
  return DVar2 * 0x49c;
}
