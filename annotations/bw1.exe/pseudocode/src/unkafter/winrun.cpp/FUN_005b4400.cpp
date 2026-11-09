// Name: unkafter_winrun.cpp_FUN_005b4400
// Address: 005b4400
// Address Range: [[005b4400, 005b444f]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005b4400(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_winrun_cpp_FUN_005b4400(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_02c9d294 = 0;
  iVar2 = param_1 * 0x30;
  do {
    iVar1 = iVar2 + 0xc;
    *(uint *)(iVar2 + 0x2c9d1d8) = 0x80000001;
    *(uint *)(iVar2 + 0x2c9d1d4) = 0x7fffffff;
    *(uint *)(iVar2 + 0x2c9d1dc) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 * 0x30 + 0x30);
  unkafter_winrun_cpp_FUN_005b4450(param_1);
  return;
}
