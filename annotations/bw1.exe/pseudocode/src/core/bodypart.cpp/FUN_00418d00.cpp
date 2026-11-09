// Name: core_bodypart.cpp_FUN_00418d00
// Address: 00418d00
// Address Range: [[00418d00, 00418e45]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00418d00(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_00418d00(int param_1,uint param_2,uint param_3)

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
    _DAT_01d1d400 = "..\\core\\bodypart.cpp";
    _DAT_01d1d404 = 0xba;
    core_main_c_FUN_005030e0("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(param_1 + 0x174));
  }
  if ((0 < *(int *)(param_1 + 0x180)) &&
     ((*(int *)(param_1 + 0x184) == 0 || (*(int *)(param_1 + 0x188) == 0)))) {
    _DAT_01d1d400 = "..\\core\\bodypart.cpp";
    _DAT_01d1d404 = 0xbf;
    core_main_c_FUN_005030e0("CBodyPart::setCounts - out of memory for triangles - triCount = %d",*(uint *)(param_1 + 0x180));
    return;
  }
  return;
}
