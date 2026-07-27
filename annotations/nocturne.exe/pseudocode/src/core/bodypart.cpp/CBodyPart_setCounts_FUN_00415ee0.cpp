// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
// Address: 00415ee0
// Address Range: [[00415ee0, 00416025]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x16c) = param_2;
  *(uint *)(param_1 + 0x178) = param_3;
  uVar1 = realloc
                    (*(uint *)(param_1 + 0x170),*(int *)(param_1 + 0x16c) * 0xc);
  *(uint *)(param_1 + 0x170) = uVar1;
  uVar1 = realloc
                    (*(uint *)(param_1 + 0x174),*(int *)(param_1 + 0x16c) * 0xc);
  *(uint *)(param_1 + 0x174) = uVar1;
  uVar1 = realloc
                    (*(uint *)(param_1 + 0x17c),*(int *)(param_1 + 0x178) * 0x3c);
  *(uint *)(param_1 + 0x17c) = uVar1;
  uVar1 = realloc
                    (*(uint *)(param_1 + 0x180),*(int *)(param_1 + 0x178) << 2);
  *(uint *)(param_1 + 0x180) = uVar1;
  if ((0 < *(int *)(param_1 + 0x16c)) &&
     ((*(int *)(param_1 + 0x170) == 0 || (*(int *)(param_1 + 0x174) == 0)))) {
    PTR_01cc4800 = "..\\core\\bodypart.cpp";
    INT_01cc4804 = 0xb2;
    core_main_c_FUN_004c8440("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x16c));
  }
  if ((0 < *(int *)(param_1 + 0x178)) &&
     ((*(int *)(param_1 + 0x17c) == 0 || (*(int *)(param_1 + 0x180) == 0)))) {
    PTR_01cc4800 = "..\\core\\bodypart.cpp";
    INT_01cc4804 = 0xb7;
    core_main_c_FUN_004c8440("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x178));
    return;
  }
  return;
}
