// Name: core_sps.cpp_FUN_00568290
// Address: 00568290
// Address Range: [[00568290, 005682e3]]
// Convention: unknown
// Signature: void core_sps_cpp_FUN_00568290(void)

#include "nocturne.h"

void core_sps_cpp_FUN_00568290(void)

{
  int iVar1;
  SLaserInfo aSStack_54 [84];
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 != 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_fire_cpp_SLaserInfo_ctor_FUN_004a2de0(aSStack_54);
  return;
}
