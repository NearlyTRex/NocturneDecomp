// Name: core_lightpis.cpp_CLightPis_getDamage_FUN_00502680
// Address: 00502680
// Address Range: [[00502680, 005026e8]]
// Convention: __cdecl
// Signature: float __cdecl core_lightpis_cpp_CLightPis_getDamage_FUN_00502680(CLightPis *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_lightpis_cpp_CLightPis_getDamage_FUN_00502680(CLightPis *this_ptr)

{
  float fStack_8;
  
  if (*(int *)&this_ptr->field_0x56c == 6) {
    return 0.0;
  }
  fStack_8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(18.0,35.0);
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    fStack_8 = fStack_8 * _DAT_005e701e;
  }
  return fStack_8;
}
