// Name: core_dimage.cpp_FUN_0045b210
// Address: 0045b210
// Address Range: [[0045b210, 0045b266]]
// Convention: unknown
// Signature: void core_dimage_cpp_FUN_0045b210(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dimage_cpp_FUN_0045b210(int param_1)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_0045b270(param_1);
  pvVar1 = FUN_005a3650(*(int *)(param_1 + 0x304) * *(int *)(param_1 + 0x308));
  *(void **)(param_1 + 0x300) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dimage.cpp";
  _DAT_01d71de4 = 0x31;
  core_main_c_FUN_004e4330("CDemonImage::allocMemory - Out of memory!");
  return;
}
