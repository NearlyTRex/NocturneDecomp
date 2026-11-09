// Name: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0044a0c0
// Address: 0044a0c0
// Address Range: [[0044a0c0, 0044a0e8]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(CCrossbow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(CCrossbow *this_ptr)

{
  return ((float)_DAT_005d73aa - *(float *)&this_ptr->field_0x300) * (float)_DAT_005d73b2 *
         (float)_DAT_005d73ba;
}
