// Name: core_path.cpp_queuePush_FUN_004efc50
// Address: 004efc50
// Address Range: [[004efc50, 004efcc5]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_004efc50(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_queuePush_FUN_004efc50(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  *(char *)(grid_z * 100 + grid_x + 0x1e40098) = direction;
  _DAT_01e4280c = _DAT_01e4280c + 1;
  *(int *)(&DAT_01e3162c + _DAT_01e40090 * 0xc) = grid_x;
  *(int *)(&DAT_01e31630 + _DAT_01e40090 * 0xc) = cost;
  iVar1 = _DAT_01e40090 + 1;
  *(int *)(&DAT_01e31634 + _DAT_01e40090 * 0xc) = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e40090 = iVar1;
  return;
}
