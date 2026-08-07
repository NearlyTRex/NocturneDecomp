// Name: engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
// Address: 004cd300
// Address Range: [[004cd300, 004cd376]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)

{
  *(int *)(&DAT_005c5020 + cache_index * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_005c501c)[cache_index * 0xc]);
  (&DAT_005c5024)[cache_index * 0xc] =
       (int)(((longlong)(int)(&DAT_005c5014)[cache_index * 0xc] *
             (longlong)g_Projection.half_width_fixed) /
            (longlong)(int)(&DAT_005c501c)[cache_index * 0xc]) + g_Projection.center_x_fixed;
  *(int *)(&DAT_005c5028 + cache_index * 0x30) =
       (int)(((longlong)(int)(&DAT_005c5018)[cache_index * 0xc] *
             (longlong)g_Projection.neg_half_height_fixed) /
            (longlong)(int)(&DAT_005c501c)[cache_index * 0xc]) + g_Projection.center_y_fixed;
  return;
}
