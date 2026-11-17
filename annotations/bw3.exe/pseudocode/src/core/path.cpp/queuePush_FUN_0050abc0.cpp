// Name: core_path.cpp_queuePush_FUN_0050abc0
// Address: 0050abc0
// Address Range: [[0050abc0, 0050ac35]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_0050abc0(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePush_FUN_0050abc0(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  g_CHAR_ARRAY_01ed02b8[grid_z * 100 + grid_x] = direction;
  g_INT_01ed2a2c = g_INT_01ed2a2c + 1;
  g_INT_ARRAY_01ec184c[g_INT_01ed02b0 * 3] = grid_x;
  *(int *)(&DAT_01ec1850 + g_INT_01ed02b0 * 0xc) = cost;
  iVar1 = g_INT_01ed02b0 + 1;
  *(int *)(&DAT_01ec1854 + g_INT_01ed02b0 * 0xc) = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01ed02b0 = iVar1;
  return;
}
