// Name: core_rifle.cpp_CRifle_getDamage_FUN_00540930
// Address: 00540930
// Address Range: [[00540930, 005409af]]
// Convention: __cdecl
// Signature: float __cdecl core_rifle_cpp_CRifle_getDamage_FUN_00540930(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_rifle_cpp_CRifle_getDamage_FUN_00540930(CRifle *this_ptr)

{
  float fStack_c;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(25.0,55.0);
  if (g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) {
    fStack_c = fStack_c * _DAT_005edcb3;
  }
  return fStack_c;
}
