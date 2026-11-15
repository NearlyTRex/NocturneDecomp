// Name: core_path.cpp_queuePush_FUN_00532ee0
// Address: 00532ee0
// Address Range: [[00532ee0, 00532f55]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_00532ee0(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_queuePush_FUN_00532ee0(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  *(char *)(grid_z * 100 + grid_x + 0x1e7abe8) = direction;
  _DAT_01e7d35c = _DAT_01e7d35c + 1;
  *(int *)(&DAT_01e6c17c + _DAT_01e7abe0 * 0xc) = grid_x;
  *(int *)(&DAT_01e6c180 + _DAT_01e7abe0 * 0xc) = cost;
  iVar1 = _DAT_01e7abe0 + 1;
  *(int *)(&DAT_01e6c184 + _DAT_01e7abe0 * 0xc) = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e7abe0 = iVar1;
  return;
}
