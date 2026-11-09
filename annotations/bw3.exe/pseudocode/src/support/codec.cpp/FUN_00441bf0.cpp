// Name: support_codec.cpp_FUN_00441bf0
// Address: 00441bf0
// Address Range: [[00441bf0, 00441c7d]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00441bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ulong param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint support_codec_cpp_FUN_00441bf0(int param_1,uint param_2,uint param_3,uint param_4,ulong param_5)

{
  void *pvVar1;
  uint uVar2;
  
  support_codec_cpp_FUN_00441b60(param_1);
  *(uint *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 0xc) = param_4;
  *(ulong *)(param_1 + 0x14) = param_5;
  pvVar1 = FUN_005a3650(param_5);
  *(void **)(param_1 + 0x10) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d71de0 = "..\\support\\codec.cpp";
    _DAT_01d71de4 = 0x881;
    core_main_c_FUN_004e4330("CInStreamPipe::open - out of memory for %d byte buffer",*(uint *)(param_1 + 0x14));
  }
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  return uVar2;
}
