// Name: core_path.cpp_queuePush_FUN_00511b90
// Address: 00511b90
// Address Range: [[00511b90, 00511c05]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_00511b90(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_queuePush_FUN_00511b90(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  *(char *)(grid_z * 100 + grid_x + 0x1e5ec78) = direction;
  _DAT_01e613ec = _DAT_01e613ec + 1;
  *(int *)(&DAT_01e5020c + _DAT_01e5ec70 * 0xc) = grid_x;
  *(int *)(&DAT_01e50210 + _DAT_01e5ec70 * 0xc) = cost;
  iVar1 = _DAT_01e5ec70 + 1;
  *(int *)(&DAT_01e50214 + _DAT_01e5ec70 * 0xc) = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e5ec70 = iVar1;
  return;
}
