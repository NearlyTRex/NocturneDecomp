// Name: core_fire.cpp_FUN_004a3f20
// Address: 004a3f20
// Address Range: [[004a3f20, 004a3f6f]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a3f20(undefined4 param_1,CVector3f *param_2,CVector3f *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a3f20(uint param_1,CVector3f *param_2,CVector3f *param_3)

{
  int iVar1;
  
  (*(g_RainDropPool[_DAT_01d07b8c].base.vtable)->setup)
            (&g_RainDropPool[_DAT_01d07b8c].base,param_2,param_3);
  iVar1 = _DAT_01d07b8c + 1;
  g_RainDropPool[_DAT_01d07b8c].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01d07b8c = iVar1;
  return;
}
