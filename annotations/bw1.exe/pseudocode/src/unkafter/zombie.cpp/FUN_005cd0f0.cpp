// Name: unkafter_zombie.cpp_FUN_005cd0f0
// Address: 005cd0f0
// Address Range: [[005cd0f0, 005cd140]]
// Convention: unknown
// Signature: undefined4 unkafter_zombie_cpp_FUN_005cd0f0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint unkafter_zombie_cpp_FUN_005cd0f0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    uVar1 = *(uint *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    *(uint *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return uVar1;
  }
  uVar1 = *(uint *)(&DAT_00626ae4 + param_1 * 8);
  *(uint *)(&DAT_00626ae4 + param_1 * 8) = param_2;
  return uVar1;
}
