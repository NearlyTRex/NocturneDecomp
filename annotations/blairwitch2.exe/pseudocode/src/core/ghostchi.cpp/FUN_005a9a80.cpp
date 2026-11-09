// Name: core_ghostchi.cpp_FUN_005a9a80
// Address: 005a9a80
// Address Range: [[005a9a80, 005a9ae1]]
// Convention: unknown
// Signature: undefined4 core_ghostchi_cpp_FUN_005a9a80(int param_1)

#include "nocturne.h"

uint core_ghostchi_cpp_FUN_005a9a80(int param_1)

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
  if (9 < uVar1) {
    if (uVar1 < 0xb) {
      return 1;
    }
    if (uVar1 == 0xb) {
      return 2;
    }
  }
  return 0;
}
