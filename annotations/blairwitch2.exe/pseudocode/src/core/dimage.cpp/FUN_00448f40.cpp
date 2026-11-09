// Name: core_dimage.cpp_FUN_00448f40
// Address: 00448f40
// Address Range: [[00448f40, 00448f96]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_00448f40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dimage_cpp_FUN_00448f40(int param_1)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_00448fa0(param_1);
  pvVar1 = FUN_005b8580(*(int *)(param_1 + 0x304) * *(int *)(param_1 + 0x308));
  *(void **)(param_1 + 0x300) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dimage.cpp";
  _DAT_01d046a4 = 0x31;
  core_main_c_FUN_004e4500("CDemonImage::allocMemory - Out of memory!");
  return;
}
