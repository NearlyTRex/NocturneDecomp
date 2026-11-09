// Name: unkafter_morph.cpp_FUN_005c378c
// Address: 005c378c
// Address Range: [[005c378c, 005c37ea]]
// Convention: unknown
// Signature: undefined4 unkafter_morph_cpp_FUN_005c378c(LPVOID param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_morph_cpp_FUN_005c378c(LPVOID param_1)

{
  uint uVar1;
  BOOL BVar2;
  
  uVar1 = *(uint *)((int)param_1 + 8);
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == (LPVOID)DAT_0061eea4) && (DAT_0061eea4 = uVar1, uVar1 == 0)) {
      DAT_0061eea4 = DAT_0061eea0;
      DAT_0061eea8 = 0;
    }
    if (param_1 == _DAT_02680150) {
      _DAT_02680150 = (LPVOID)((uint)param_1 ^ (uint)_DAT_02680150);
    }
    return 0;
  }
  return 0xffffffff;
}
