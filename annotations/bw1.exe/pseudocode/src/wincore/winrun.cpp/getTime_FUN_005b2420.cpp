// Name: wincore_winrun.cpp_getTime_FUN_005b2420
// Address: 005b2420
// Address Range: [[005b2420, 005b24ec]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getTime_FUN_005b2420(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getTime_FUN_005b2420(void)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  
  if (g_INT_ARRAY_02c9a5c4[0] == 0) {
    _DAT_02c9a5a0 = g_struct_19_02c9a5a8.LowPart;
    g_INT_02c9a5a4 = g_struct_19_02c9a5a8.HighPart;
    QueryPerformanceCounter((LARGE_INTEGER *)&g_struct_19_02c9a5a8);
    iVar1 = g_INT_02c9a5c0;
    dVar3 = ((((double)g_struct_19_02c9a5a8.LowPart +
              (double)g_struct_19_02c9a5a8.HighPart * 4294967296) -
             ((double)_DAT_02c9a5a0 + (double)g_INT_02c9a5a4 * 4294967296)) /
            g_DOUBLE_02c9a5b8) * 65536 * 18;
    if (0.0 < dVar3) {
      dVar3 = round(dVar3);
      g_INT_02c9a5c0 = iVar1 + (int)ROUND(dVar3);
    }
    return g_INT_02c9a5c0;
  }
  DVar2 = timeGetTime();
  return DVar2 * 0x49c;
}
