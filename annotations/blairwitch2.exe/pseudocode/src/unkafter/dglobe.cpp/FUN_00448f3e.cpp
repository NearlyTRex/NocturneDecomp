// Name: unkafter_dglobe.cpp_FUN_00448f3e
// Address: 00448f3e
// Address Range: [[00448f3e, 00448f3f]]
// Convention: unknown
// Signature: void unkafter_dglobe_cpp_FUN_00448f3e(CDemonImage *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_dglobe_cpp_FUN_00448f3e(CDemonImage *param_1)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_00448fa0(param_1);
  pvVar1 = malloc(param_1->width * param_1->height);
  param_1->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dimage.cpp";
  _DAT_01d046a4 = 0x31;
  core_main_c_FUN_004e4500("CDemonImage::allocMemory - Out of memory!");
  return;
}
