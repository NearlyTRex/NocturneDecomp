// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630
// Address: 004e5630
// Address Range: [[004e5630, 004e56a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)

{
  *(int *)(&DAT_0060b020 + cache_index * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_0060b01c)[cache_index * 0xc]);
  (&DAT_0060b024)[cache_index * 0xc] =
       (int)(((longlong)(int)(&DAT_0060b014)[cache_index * 0xc] * (longlong)_DAT_01c6b598) /
            (longlong)(int)(&DAT_0060b01c)[cache_index * 0xc]) + _DAT_01c6b5a0;
  *(int *)(&DAT_0060b028 + cache_index * 0x30) =
       (int)(((longlong)(int)(&DAT_0060b018)[cache_index * 0xc] * (longlong)_DAT_01c6b59c) /
            (longlong)(int)(&DAT_0060b01c)[cache_index * 0xc]) + _DAT_01c6b5a4;
  return;
}
