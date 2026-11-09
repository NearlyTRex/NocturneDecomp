// Name: core_unionzom.cpp_FUN_005a4580
// Address: 005a4580
// Address Range: [[005a4580, 005a45dd]]
// Convention: unknown
// Signature: undefined4 core_unionzom_cpp_FUN_005a4580(int param_1)

#include "nocturne.h"

uint core_unionzom_cpp_FUN_005a4580(int param_1)

{
  int iVar1;
  
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar1 == 0) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar1 == 0)
     ) {
    return 0;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if ((4 < *(uint *)(iVar1 + 0x24)) && (*(uint *)(iVar1 + 0x24) < 6)) {
    return 1;
  }
  return 2;
}
