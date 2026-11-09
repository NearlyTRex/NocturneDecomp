// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0
// Address: 00507bf0
// Address Range: [[00507bf0, 00507c66]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)

{
  *(int *)(&DAT_00629020 + cache_index * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_0062901c)[cache_index * 0xc]);
  (&DAT_00629024)[cache_index * 0xc] =
       (int)(((longlong)(int)(&DAT_00629014)[cache_index * 0xc] * (longlong)_DAT_01c4eff8) /
            (longlong)(int)(&DAT_0062901c)[cache_index * 0xc]) + _DAT_01c4f000;
  *(int *)(&DAT_00629028 + cache_index * 0x30) =
       (int)(((longlong)(int)(&DAT_00629018)[cache_index * 0xc] * (longlong)_DAT_01c4effc) /
            (longlong)(int)(&DAT_0062901c)[cache_index * 0xc]) + _DAT_01c4f004;
  return;
}
