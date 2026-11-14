// Name: wincore_winrun.cpp_FUN_005b42f0
// Address: 005b42f0
// Address Range: [[005b42f0, 005b4316]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005b42f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_005b42f0(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_02c9c7e0 = 0;
  _DAT_02c9c7e4 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0xac;
    *(uint *)(iVar2 + 0x2c9cfbc) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x2b0);
  return;
}
