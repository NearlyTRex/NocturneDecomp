// Name: core_lightpis.cpp_FUN_00502680
// Address: 00502680
// Address Range: [[00502680, 005026e8]]
// Convention: unknown
// Signature: float core_lightpis_cpp_FUN_00502680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_lightpis_cpp_FUN_00502680(int param_1)

{
  float fStack_8;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0.0;
  }
  fStack_8 = (float)core_actor_cpp_FUN_0040cc00(0x41900000,0x420c0000);
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    fStack_8 = fStack_8 * _DAT_005e701e;
  }
  return fStack_8;
}
