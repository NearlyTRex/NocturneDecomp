// Name: core_setcolid.cpp_FUN_00557110
// Address: 00557110
// Address Range: [[00557110, 00557227]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_00557110(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_setcolid_cpp_FUN_00557110(int param_1,uint *param_2)

{
  float fVar1;
  float local_30;
  uint local_2c;
  float local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  float local_10;
  
  if (&local_20 != param_2) {
    local_20 = *param_2;
    local_1c = (float)param_2[1];
    local_18 = param_2[2];
  }
  if (&local_2c != param_2) {
    local_2c = *param_2;
    local_28 = (float)param_2[1];
    local_24 = param_2[2];
  }
  local_1c = local_1c + _DAT_005f0e1d;
  local_28 = local_28 + _DAT_005f0e21;
  local_10 = (float)core_dtrace_cpp_FUN_0048b150
                              (&g_CDemonRaytraceInstance,&local_20,&local_2c,param_1 + 0x14d128,
                               param_1 + 0x14d134);
  local_30 = local_10;
  if (local_10 < 0.0) {
    local_30 = 1.01;
  }
  if ((local_30 < 1.0) && (*(int *)(param_1 + 0x14d134) == 0)) {
    *(uint *)(param_1 + 0x14d134) = *(uint *)(param_1 + 0x15f694);
  }
  fVar1 = (float)core_setcolid_cpp_FUN_005578b0(param_1,0xbf800000,&local_20,&local_2c,local_30);
  return (local_28 - local_1c) * fVar1 + local_1c;
}
