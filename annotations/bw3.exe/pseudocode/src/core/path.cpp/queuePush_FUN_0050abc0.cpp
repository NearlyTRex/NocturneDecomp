// Name: core_path.cpp_queuePush_FUN_0050abc0
// Address: 0050abc0
// Address Range: [[0050abc0, 0050ac35]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_0050abc0(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_queuePush_FUN_0050abc0(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  *(char *)(grid_z * 100 + grid_x + 0x1ed02b8) = direction;
  _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
  *(int *)(&DAT_01ec184c + _DAT_01ed02b0 * 0xc) = grid_x;
  *(int *)(&DAT_01ec1850 + _DAT_01ed02b0 * 0xc) = cost;
  iVar1 = _DAT_01ed02b0 + 1;
  *(int *)(&DAT_01ec1854 + _DAT_01ed02b0 * 0xc) = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ed02b0 = iVar1;
  return;
}
