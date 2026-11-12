// Name: engine_mini3d.cpp_FUN_004f033e
// Address: 004f033e
// Address Range: [[004f033e, 004f03cd]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f033e(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f033e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01d7a694 = (param_4 != 0) + 1;
  engine_mini3d_cpp_FUN_004ed020(0,0,(float)(param_1 + -1),(float)(param_2 + -1));
  _DAT_01d7f580 = param_2;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(iVar2 + 0x1d7f584) = *(uint *)(&DAT_01c5faec + iVar2);
      *(int *)(&DAT_01c5faec + iVar2) = param_3;
      param_3 = param_3 + param_1 * 4;
      iVar2 = iVar1;
    } while (iVar1 < param_2 * 4);
  }
  return;
}
