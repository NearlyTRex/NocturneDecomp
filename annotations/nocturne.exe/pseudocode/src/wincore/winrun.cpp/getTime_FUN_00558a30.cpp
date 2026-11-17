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
  
  if (g_BOOL_02de07f4 != 0) {
    DVar2 = timeGetTime();
    return DVar2 * 0x49c;
  }
  g_DWORD_02de07d0 = g_struct_19_02de07d8.LowPart;
  g_INT_02de07d4 = g_struct_19_02de07d8.HighPart;
  QueryPerformanceCounter((LARGE_INTEGER *)&g_struct_19_02de07d8);
  iVar1 = g_INT_02de07f0;
  dVar3 = round
                    (((((double)g_struct_19_02de07d8.LowPart +
                       (double)g_struct_19_02de07d8.HighPart * 4294967296) -
                      ((double)g_DWORD_02de07d0 + (double)g_INT_02de07d4 * 4294967296)) /
                     g_DOUBLE_02de07e8) * 65536 * 18);
  g_INT_02de07f0 = iVar1 + (int)ROUND(dVar3);
  return iVar1 + (int)ROUND(dVar3);
}
