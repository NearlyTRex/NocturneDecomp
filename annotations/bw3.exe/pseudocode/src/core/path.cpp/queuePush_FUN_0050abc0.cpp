// Name: core_path.cpp_queuePush_FUN_0050abc0
// Address: 0050abc0
// Address Range: [[0050abc0, 0050ac35]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_0050abc0(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePush_FUN_0050abc0(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  g_CHAR_ARRAY_ARRAY_01ed02b8[grid_z][grid_x] = direction;
  g_INT_01ed2a2c = g_INT_01ed2a2c + 1;
  g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].x = grid_x;
  g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].cost = cost;
  iVar1 = g_INT_01ed02b0 + 1;
  g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].z = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01ed02b0 = iVar1;
  return;
}
