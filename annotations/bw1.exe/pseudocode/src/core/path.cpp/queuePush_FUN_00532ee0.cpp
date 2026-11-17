// Name: core_path.cpp_queuePush_FUN_00532ee0
// Address: 00532ee0
// Address Range: [[00532ee0, 00532f55]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_00532ee0(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePush_FUN_00532ee0(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  g_CHAR_ARRAY_01e7abe8[grid_z * 100 + grid_x] = direction;
  g_INT_01e7d35c = g_INT_01e7d35c + 1;
  g_INT_ARRAY_01e6c17c[g_INT_01e7abe0 * 3] = grid_x;
  *(int *)(&DAT_01e6c180 + g_INT_01e7abe0 * 0xc) = cost;
  iVar1 = g_INT_01e7abe0 + 1;
  *(int *)(&DAT_01e6c184 + g_INT_01e7abe0 * 0xc) = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_INT_01e7abe0 = iVar1;
  return;
}
