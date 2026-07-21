// Name: sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
// Address: 00525eb0
// Address Range: [[00525eb0, 00525f4c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(uint *param_1)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  *(ulonglong *)(param_1 + 3) = *(ulonglong *)(param_1 + 5);
  *(ulonglong *)(param_1 + 0xb) = *(ulonglong *)(param_1 + 0xd);
  *(ulonglong *)(param_1 + 1) = *(ulonglong *)(param_1 + 3);
  *(ulonglong *)(param_1 + 9) = *(ulonglong *)(param_1 + 0xb);
  memset(param_1 + 0x15,0,8);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = _DAT_005a2148;
  param_1[0x1a] = 0;
  *(ulonglong *)(param_1 + 0x13) = uVar1;
  return;
}
