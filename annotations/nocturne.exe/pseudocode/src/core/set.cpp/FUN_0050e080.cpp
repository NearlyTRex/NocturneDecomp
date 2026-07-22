// Name: core_set.cpp_FUN_0050e080
// Address: 0050e080
// Address Range: [[0050e080, 0050e18a]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0050e080(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0050e080(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte auStack_2c [12];
  byte local_20 [12];
  uint local_14;
  
  puVar1 = (uint *)
           engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                     (DAT_005ae704,local_20);
  if (puVar1 != (uint *)&DAT_020842b4) {
    _DAT_020842b4 = *puVar1;
    _DAT_020842bc = puVar1[2];
    _DAT_020842b8 = puVar1[1];
  }
  puVar1 = (uint *)
           engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                     (DAT_005ae704,auStack_2c);
  if (puVar1 != (uint *)&DAT_020842c0) {
    _DAT_020842c0 = *puVar1;
    _DAT_020842c8 = puVar1[2];
    _DAT_020842c4 = puVar1[1];
  }
  _DAT_020842cc =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20(DAT_005ae704);
  iVar2 = param_2 * 4 + param_1;
  local_14 = _DAT_020842cc;
  FUN_004d6650(*(int *)(iVar2 + 0x15a8d0) + 0x1e4,&DAT_020842b4,&DAT_020842c0,_DAT_020842cc);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(DAT_005ae704,1);
  FUN_004477f0(_DAT_007f7370,param_2 + 1);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(DAT_005ae704,param_2 + 1);
  *(int *)(param_1 + 0x161268) = *(int *)(iVar2 + 0x15a8d0) + 0x1e4;
  return;
}
