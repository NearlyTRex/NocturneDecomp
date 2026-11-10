// Name: core_gun.cpp_CGun_getDamage_FUN_004e8ef0
// Address: 004e8ef0
// Address Range: [[004e8ef0, 004e8f6f]]
// Convention: __cdecl
// Signature: float __cdecl core_gun_cpp_CGun_getDamage_FUN_004e8ef0(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gun_cpp_CGun_getDamage_FUN_004e8ef0(CGun *this_ptr)

{
  float fStack_c;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,25.0);
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    fStack_c = fStack_c * _DAT_005e43fb;
  }
  return fStack_c;
}
