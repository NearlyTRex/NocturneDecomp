// Name: support_trstream.cpp_FUN_00573e00
// Address: 00573e00
// Address Range: [[00573e00, 00573e6c]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_00573e00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trstream_cpp_FUN_00573e00(int param_1)

{
  void *pvVar1;
  
  support_trstream_cpp_FUN_00573e70(param_1);
  *(uint *)(param_1 + 0x20) = 0x1000;
  pvVar1 = FUN_005a3650(*(int *)(param_1 + 0x20) + 0x1f);
  *(void **)(param_1 + 0x14) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d71de0 = "..\\support\\trstream.cpp";
    _DAT_01d71de4 = 0x62c;
    core_main_c_FUN_004e4330("Out of memory");
  }
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x14) + 0x1fU & 0xffffffe0;
  return;
}
