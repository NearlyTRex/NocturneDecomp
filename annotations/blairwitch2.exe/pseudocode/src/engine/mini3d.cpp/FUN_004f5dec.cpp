// Name: engine_mini3d.cpp_FUN_004f5dec
// Address: 004f5dec
// Address Range: [[004f5dec, 004f5e7d]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f5dec(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f5dec(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01d0d2b4 = (param_4 != 0) + 1;
  unkafter_minecar_cpp_FUN_004f2ac0(0,0,(float)(param_1 + -1),(float)(param_2 + -1));
  _DAT_01d167f0 = param_2;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(iVar2 + 0x1d167f4) = *(uint *)(&DAT_01c2a38c + iVar2);
      *(int *)(&DAT_01c2a38c + iVar2) = param_3;
      param_3 = param_3 + param_1 * 4;
      iVar2 = iVar1;
    } while (iVar1 < param_2 * 4);
  }
  return;
}
