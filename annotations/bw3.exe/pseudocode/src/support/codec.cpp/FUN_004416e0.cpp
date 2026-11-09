// Name: support_codec.cpp_FUN_004416e0
// Address: 004416e0
// Address Range: [[004416e0, 00441749]]
// Convention: unknown
// Signature: uint support_codec_cpp_FUN_004416e0(int param_1,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint support_codec_cpp_FUN_004416e0(int param_1,byte param_2)

{
  uint uVar1;
  
  support_codec_cpp_FUN_004417d0(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    return (uint)(byte)(&DAT_005f1368)[(uint)param_2 + *(int *)(param_1 + 8) & 0xff];
  }
  if (*(int *)(param_1 + 4) == 1) {
    return (uint)(byte)((&DAT_005f1468)[param_2] - *(char *)(param_1 + 8));
  }
  _DAT_01d71de0 = "..\\support\\codec.cpp";
  _DAT_01d71de4 = 0x70b;
  uVar1 = core_main_c_FUN_004e4330("Invalid mode.");
  return uVar1 & 0xffffff00;
}
