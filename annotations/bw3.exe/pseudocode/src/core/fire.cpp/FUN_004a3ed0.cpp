// Name: core_fire.cpp_FUN_004a3ed0
// Address: 004a3ed0
// Address Range: [[004a3ed0, 004a3f17]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a3ed0(undefined4 param_1,CVector3f *param_2,CVector3f *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a3ed0(uint param_1,CVector3f *param_2,CVector3f *param_3)

{
  (*(g_PopcornPool[_DAT_01d03b88].base.vtable)->setup)
            (&g_PopcornPool[_DAT_01d03b88].base,param_2,param_3);
  _DAT_01d03b88 = _DAT_01d03b88 + 1;
  if (_DAT_01d03b88 < 0x100) {
    return;
  }
  _DAT_01d03b88 = 0;
  return;
}
