// Name: engine_matrix.c_projectCachedPoint_FUN_004cd240
// Address: 004cd240
// Address Range: [[004cd240, 004cd25e]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPoint_FUN_004cd240(int cacheIndex)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPoint_FUN_004cd240(int cacheIndex)

{
  engine_matrix_c_projectTransformedPoint_FUN_004cd260
            ((SProjectedVertex *)(&DAT_005c5014 + cacheIndex * 0xc));
  return;
}
