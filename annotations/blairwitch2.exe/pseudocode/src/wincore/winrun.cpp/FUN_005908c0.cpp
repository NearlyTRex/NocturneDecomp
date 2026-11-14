// Name: wincore_winrun.cpp_FUN_005908c0
// Address: 005908c0
// Address Range: [[005908c0, 0059090f]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005908c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_005908c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_02665a44 = 0;
  iVar2 = param_1 * 0x30;
  do {
    iVar1 = iVar2 + 0xc;
    *(uint *)(iVar2 + 0x2665988) = 0x80000001;
    *(uint *)(iVar2 + 0x2665984) = 0x7fffffff;
    *(uint *)(iVar2 + 0x266598c) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 * 0x30 + 0x30);
  wincore_winrun_cpp_FUN_00590910(param_1);
  return;
}
