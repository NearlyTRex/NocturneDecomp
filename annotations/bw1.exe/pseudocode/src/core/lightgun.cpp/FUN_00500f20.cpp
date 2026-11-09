// Name: core_lightgun.cpp_FUN_00500f20
// Address: 00500f20
// Address Range: [[00500f20, 00500f88]]
// Convention: unknown
// Signature: float core_lightgun_cpp_FUN_00500f20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_lightgun_cpp_FUN_00500f20(int param_1)

{
  float fStack_8;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0.0;
  }
  fStack_8 = (float)core_actor_cpp_FUN_0040cc00(0x41a00000,0x42480000);
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    fStack_8 = fStack_8 * _DAT_005e6ef6;
  }
  return fStack_8;
}
