// Name: core_path.cpp_queuePush_FUN_00511b90
// Address: 00511b90
// Address Range: [[00511b90, 00511c05]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_00511b90(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePush_FUN_00511b90(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  g_CHAR_ARRAY_ARRAY_01e5ec78[grid_z][grid_x] = direction;
  g_INT_01e613ec = g_INT_01e613ec + 1;
  g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].x = grid_x;
  g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].cost = cost;
  iVar1 = g_INT_01e5ec70 + 1;
  g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].z = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e5ec70 = iVar1;
  return;
}
