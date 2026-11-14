// Name: wincore_winrun.cpp_FUN_005907b0
// Address: 005907b0
// Address Range: [[005907b0, 005907d6]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005907b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_005907b0(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_02664fa0 = 0;
  _DAT_02664fa4 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0xac;
    *(uint *)(iVar2 + 0x266576c) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x2b0);
  return;
}
