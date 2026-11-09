// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004e8f50
// Address: 004e8f50
// Address Range: [[004e8f50, 004e8fc6]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e8f50(int cache_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e8f50(int cache_index)

{
  *(int *)(&DAT_00622020 + cache_index * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_0062201c)[cache_index * 0xc]);
  (&DAT_00622024)[cache_index * 0xc] =
       (int)(((longlong)(int)(&DAT_00622014)[cache_index * 0xc] * (longlong)_DAT_01c35e38) /
            (longlong)(int)(&DAT_0062201c)[cache_index * 0xc]) + _DAT_01c35e40;
  *(int *)(&DAT_00622028 + cache_index * 0x30) =
       (int)(((longlong)(int)(&DAT_00622018)[cache_index * 0xc] * (longlong)_DAT_01c35e3c) /
            (longlong)(int)(&DAT_0062201c)[cache_index * 0xc]) + _DAT_01c35e44;
  return;
}
