// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
// Address: 004cd300
// Address Range: [[004cd300, 004cd376]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)

{
  *(int *)(&DAT_005c5020 + cache_index * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_005c501c)[cache_index * 0xc]);
  (&DAT_005c5024)[cache_index * 0xc] =
       (int)(((longlong)(int)(&DAT_005c5014)[cache_index * 0xc] * (longlong)_DAT_01c00c48) /
            (longlong)(int)(&DAT_005c501c)[cache_index * 0xc]) + _DAT_01c00c50;
  *(int *)(&DAT_005c5028 + cache_index * 0x30) =
       (int)(((longlong)(int)(&DAT_005c5018)[cache_index * 0xc] * (longlong)_DAT_01c00c4c) /
            (longlong)(int)(&DAT_005c501c)[cache_index * 0xc]) + _DAT_01c00c54;
  return;
}
