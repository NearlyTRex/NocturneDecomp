// Name: support_codec.cpp_FUN_00434d60
// Address: 00434d60
// Address Range: [[00434d60, 00434dc9]]
// Convention: unknown
// Signature: uint support_codec_cpp_FUN_00434d60(int param_1,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint support_codec_cpp_FUN_00434d60(int param_1,byte param_2)

{
  uint uVar1;
  
  support_codec_cpp_FUN_00434e50(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    return (uint)(byte)(&DAT_00609b88)[(uint)param_2 + *(int *)(param_1 + 8) & 0xff];
  }
  if (*(int *)(param_1 + 4) == 1) {
    return (uint)(byte)((&DAT_00609c88)[param_2] - *(char *)(param_1 + 8));
  }
  _DAT_01d046a0 = "..\\support\\codec.cpp";
  _DAT_01d046a4 = 0x705;
  uVar1 = core_main_c_FUN_004e4500("Invalid mode.");
  return uVar1 & 0xffffff00;
}
