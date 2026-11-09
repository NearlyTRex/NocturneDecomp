// Name: unkafter_winrun.cpp_FUN_005825e0
// Address: 005825e0
// Address Range: [[005825e0, 0058262f]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005825e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_winrun_cpp_FUN_005825e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_02d22fa4 = 0;
  iVar2 = param_1 * 0x30;
  do {
    iVar1 = iVar2 + 0xc;
    *(uint *)(iVar2 + 0x2d22ee8) = 0x80000001;
    *(uint *)(iVar2 + 0x2d22ee4) = 0x7fffffff;
    *(uint *)(iVar2 + 0x2d22eec) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 * 0x30 + 0x30);
  unkafter_winrun_cpp_FUN_00582630(param_1);
  return;
}
