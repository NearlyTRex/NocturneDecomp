// Name: core_charactr.cpp_FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 00428702]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004286d0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004286d0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xb648) = param_2;
  if (param_1 != *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  xxx_unk_c_FUN_004940d0(INT_005b9284,param_2);
  return;
}
