// Name: crt_unknown.c_FUN_005b0da0
// Address: 005b0da0
// Address Range: [[005b0da0, 005b0de9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b0da0(undefined4 *param_1,undefined4 *param_2,char *param_3)

#include "nocturne.h"

void FUN_005b0da0(uint *param_1,uint *param_2,char *param_3)

{
  byte *puVar1;
  uint uVar2;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (byte *)*param_1;
    *param_1 = g_PTR_00607f14;
    g_PTR_00607f14 = puVar1;
  }
  if (param_2 != (uint *)0x0) {
    puVar1 = (byte *)*param_2;
    *param_2 = g_PTR_00607f18;
    g_PTR_00607f18 = puVar1;
  }
  if (param_3 != (char *)0x0) {
    uVar2 = *(uint *)param_3;
    *(uint *)param_3 = g_CHAR_ARRAY_00607f1c._0_4_;
    g_CHAR_ARRAY_00607f1c._0_4_ = uVar2;
  }
  return;
}
