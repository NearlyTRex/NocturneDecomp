// Name: core_path.cpp_queuePush_FUN_004efc50
// Address: 004efc50
// Address Range: [[004efc50, 004efcc5]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_004efc50(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePush_FUN_004efc50(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  g_CHAR_ARRAY_ARRAY_01e40098[grid_z][grid_x] = direction;
  g_INT_01e4280c = g_INT_01e4280c + 1;
  g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].x = grid_x;
  g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].cost = cost;
  iVar1 = g_INT_01e40090 + 1;
  g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].z = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e40090 = iVar1;
  return;
}
