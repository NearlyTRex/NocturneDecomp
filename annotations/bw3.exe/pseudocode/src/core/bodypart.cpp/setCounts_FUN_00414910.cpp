// Name: core_bodypart.cpp_setCounts_FUN_00414910
// Address: 00414910
// Address Range: [[00414910, 00414a55]]
// Convention: unknown
// Signature: void core_bodypart_cpp_setCounts_FUN_00414910(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_setCounts_FUN_00414910(int param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  *(uint *)(param_1 + 0x174) = param_2;
  *(uint *)(param_1 + 0x180) = param_3;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x178),*(int *)(param_1 + 0x174) * 0xc);
  *(void **)(param_1 + 0x178) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x17c),*(int *)(param_1 + 0x174) * 0xc);
  *(void **)(param_1 + 0x17c) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x184),*(int *)(param_1 + 0x180) * 0x3c);
  *(void **)(param_1 + 0x184) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x188),*(int *)(param_1 + 0x180) << 2);
  *(void **)(param_1 + 0x188) = pvVar1;
  if ((0 < *(int *)(param_1 + 0x174)) &&
     ((*(int *)(param_1 + 0x178) == 0 || (*(int *)(param_1 + 0x17c) == 0)))) {
    _DAT_01d71de0 = "..\\core\\bodypart.cpp";
    _DAT_01d71de4 = 0xba;
    core_main_c_FUN_004e4330("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x174));
  }
  if ((0 < *(int *)(param_1 + 0x180)) &&
     ((*(int *)(param_1 + 0x184) == 0 || (*(int *)(param_1 + 0x188) == 0)))) {
    _DAT_01d71de0 = "..\\core\\bodypart.cpp";
    _DAT_01d71de4 = 0xbf;
    core_main_c_FUN_004e4330("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x180));
    return;
  }
  return;
}
