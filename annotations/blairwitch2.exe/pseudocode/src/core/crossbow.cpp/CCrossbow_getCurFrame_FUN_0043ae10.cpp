// Name: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043ae10
// Address: 0043ae10
// Address Range: [[0043ae10, 0043ae38]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043ae10(CCrossbow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043ae10(CCrossbow *this_ptr)

{
  return ((float)_DAT_005ce23e - (this_ptr->base).fire_cooldown_timer) * (float)_DAT_005ce246 *
         (float)_DAT_005ce24e;
}
