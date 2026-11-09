// Name: core_bodypart.cpp_FUN_00415890
// Address: 00415890
// Address Range: [[00415890, 004159d5]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00415890(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_00415890(int param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  *(uint *)(param_1 + 0x2d0) = param_2;
  *(uint *)(param_1 + 0x2dc) = param_3;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x2d4),*(int *)(param_1 + 0x2d0) * 0xc);
  *(void **)(param_1 + 0x2d4) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x2d8),*(int *)(param_1 + 0x2d0) * 0xc);
  *(void **)(param_1 + 0x2d8) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x2e0),*(int *)(param_1 + 0x2dc) * 0x3c);
  *(void **)(param_1 + 0x2e0) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x2e4),*(int *)(param_1 + 0x2dc) << 2);
  *(void **)(param_1 + 0x2e4) = pvVar1;
  if ((0 < *(int *)(param_1 + 0x2d0)) &&
     ((*(int *)(param_1 + 0x2d4) == 0 || (*(int *)(param_1 + 0x2d8) == 0)))) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0xb2;
    core_main_c_FUN_004e4500("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x2d0));
  }
  if ((0 < *(int *)(param_1 + 0x2dc)) &&
     ((*(int *)(param_1 + 0x2e0) == 0 || (*(int *)(param_1 + 0x2e4) == 0)))) {
    _DAT_01d046a0 = "..\\core\\bodypart.cpp";
    _DAT_01d046a4 = 0xb7;
    core_main_c_FUN_004e4500("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x2dc));
    return;
  }
  return;
}
