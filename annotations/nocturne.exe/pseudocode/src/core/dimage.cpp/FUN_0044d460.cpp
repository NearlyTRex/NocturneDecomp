// Name: core_dimage.cpp_FUN_0044d460
// Address: 0044d460
// Address Range: [[0044d460, 0044d4b6]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0044d460(int param_1)

#include "nocturne.h"

void core_dimage_cpp_FUN_0044d460(int param_1)

{
  int iVar1;
  
  core_dimage_cpp_FUN_0044d4c0(param_1);
  iVar1 = malloc(*(int *)(param_1 + 0x304) * *(int *)(param_1 + 0x308));
  *(int *)(param_1 + 0x300) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dimage.cpp";
  INT_01cc4804 = 0x31;
  core_main_c_FUN_004c8440("CDemonImage::allocMemory - Out of memory!");
  return;
}
