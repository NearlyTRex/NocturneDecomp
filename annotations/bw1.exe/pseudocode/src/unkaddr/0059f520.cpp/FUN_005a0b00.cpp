// Name: unkaddr_0059f520.cpp_FUN_005a0b00
// Address: 005a0b00
// Address Range: [[005a0b00, 005a0b6f]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059f520_cpp_FUN_005a0b00(int param_1,int param_2)

#include "nocturne.h"

uint unkaddr_0059f520_cpp_FUN_005a0b00(int param_1,int param_2)

{
  int iVar1;
  
  if ((((-1 < param_2) && (param_2 < 0x100)) && (*(int *)(param_1 + 4) != 0)) &&
     (0 < *(int *)(param_1 + 0x10))) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    if (((param_2 == 10) && (*(int *)(param_1 + 0x28) == 0)) && (0 < iVar1)) {
      iVar1 = unkaddr_0059f520_cpp_FUN_005a0ba0(param_1,iVar1);
      if (iVar1 == 10) {
        iVar1 = unkaddr_0059f520_cpp_FUN_005a0ba0(param_1,*(int *)(param_1 + 0x10) + -1);
        if (iVar1 == 0xd) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}
