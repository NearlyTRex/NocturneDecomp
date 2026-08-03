// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
// Address: 00415ee0
// Address Range: [[00415ee0, 00416025]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(int param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  *(uint *)(param_1 + 0x16c) = param_2;
  *(uint *)(param_1 + 0x178) = param_3;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x170),*(int *)(param_1 + 0x16c) * 0xc);
  *(void **)(param_1 + 0x170) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x174),*(int *)(param_1 + 0x16c) * 0xc);
  *(void **)(param_1 + 0x174) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x17c),*(int *)(param_1 + 0x178) * 0x3c);
  *(void **)(param_1 + 0x17c) = pvVar1;
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x180),*(int *)(param_1 + 0x178) << 2);
  *(void **)(param_1 + 0x180) = pvVar1;
  if ((0 < *(int *)(param_1 + 0x16c)) &&
     ((*(int *)(param_1 + 0x170) == 0 || (*(int *)(param_1 + 0x174) == 0)))) {
    g_CHAR_PTR_01cc4800 = "..\\core\\bodypart.cpp";
    g_INT_01cc4804 = 0xb2;
    core_main_c_FUN_004c8440("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x16c));
  }
  if ((0 < *(int *)(param_1 + 0x178)) &&
     ((*(int *)(param_1 + 0x17c) == 0 || (*(int *)(param_1 + 0x180) == 0)))) {
    g_CHAR_PTR_01cc4800 = "..\\core\\bodypart.cpp";
    g_INT_01cc4804 = 0xb7;
    core_main_c_FUN_004c8440("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x178));
    return;
  }
  return;
}
