// Name: core_dglobe.cpp_FUN_0045f09e
// Address: 0045f09e
// Address Range: [[0045f09e, 0045f09f]]
// Convention: unknown
// Signature: void core_dglobe_cpp_FUN_0045f09e(CDemonImage *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dglobe_cpp_FUN_0045f09e(CDemonImage *param_1)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_0045f100(param_1);
  pvVar1 = malloc(param_1->width * param_1->height);
  param_1->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dimage.cpp";
  _DAT_01d1d404 = 0x31;
  core_main_c_FUN_005030e0("CDemonImage::allocMemory - Out of memory!");
  return;
}
