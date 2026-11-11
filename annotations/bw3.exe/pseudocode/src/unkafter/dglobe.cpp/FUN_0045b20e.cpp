// Name: unkafter_dglobe.cpp_FUN_0045b20e
// Address: 0045b20e
// Address Range: [[0045b20e, 0045b20f]]
// Convention: unknown
// Signature: void unkafter_dglobe_cpp_FUN_0045b20e(CDemonImage *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_dglobe_cpp_FUN_0045b20e(CDemonImage *param_1)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_0045b270(param_1);
  pvVar1 = malloc(param_1->width * param_1->height);
  param_1->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dimage.cpp";
  _DAT_01d71de4 = 0x31;
  core_main_c_FUN_004e4330("CDemonImage::allocMemory - Out of memory!");
  return;
}
