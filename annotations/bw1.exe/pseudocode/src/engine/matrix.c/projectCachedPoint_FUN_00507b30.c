// Name: engine_matrix.c_projectCachedPoint_FUN_00507b30
// Address: 00507b30
// Address Range: [[00507b30, 00507b4e]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPoint_FUN_00507b30(int cacheIndex)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPoint_FUN_00507b30(int cacheIndex)

{
  engine_matrix_c_projectTransformedPoint_FUN_00507b50
            ((SProjectedVertex *)(&DAT_00629014 + cacheIndex * 0xc));
  return;
}
