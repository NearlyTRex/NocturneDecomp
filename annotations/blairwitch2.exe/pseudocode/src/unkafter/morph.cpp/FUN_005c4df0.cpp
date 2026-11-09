// Name: unkafter_morph.cpp_FUN_005c4df0
// Address: 005c4df0
// Address Range: [[005c4df0, 005c4e40]]
// Convention: unknown
// Signature: undefined4 unkafter_morph_cpp_FUN_005c4df0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint unkafter_morph_cpp_FUN_005c4df0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
    uVar1 = *(uint *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
    *(uint *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return uVar1;
  }
  uVar1 = *(uint *)(&DAT_0061f764 + param_1 * 8);
  *(uint *)(&DAT_0061f764 + param_1 * 8) = param_2;
  return uVar1;
}
