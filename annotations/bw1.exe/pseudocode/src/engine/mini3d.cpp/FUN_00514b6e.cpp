// Name: engine_mini3d.cpp_FUN_00514b6e
// Address: 00514b6e
// Address Range: [[00514b6e, 00514bfd]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00514b6e(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00514b6e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01d25f14 = (param_4 != 0) + 1;
  unkafter_minecar_cpp_FUN_00511850(0,0,(float)(param_1 + -1),(float)(param_2 + -1));
  _DAT_01d2ae00 = param_2;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(iVar2 + 0x1d2ae04) = *(uint *)(&DAT_01c4354c + iVar2);
      *(int *)(&DAT_01c4354c + iVar2) = param_3;
      param_3 = param_3 + param_1 * 4;
      iVar2 = iVar1;
    } while (iVar1 < param_2 * 4);
  }
  return;
}
