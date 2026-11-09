// Name: core_schngeis.cpp_FUN_005a3b30
// Address: 005a3b30
// Address Range: [[005a3b30, 005a3b91]]
// Convention: unknown
// Signature: undefined4 core_schngeis_cpp_FUN_005a3b30(int param_1)

#include "nocturne.h"

uint core_schngeis_cpp_FUN_005a3b30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar2 == 0) &&
     (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar2 == 0)
     ) {
    return 0;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  uVar1 = *(uint *)(iVar2 + 0x24);
  if (6 < uVar1) {
    if (uVar1 < 8) {
      return 1;
    }
    if (uVar1 == 8) {
      return 2;
    }
  }
  return 0;
}
