// Name: core_health.cpp_FUN_004ea530
// Address: 004ea530
// Address Range: [[004ea530, 004ea574]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_FUN_004ea530(CHealthItem *this_ptr,CCharacter *user)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_health_cpp_FUN_004ea530(CHealthItem *this_ptr,CCharacter *user)

{
  float fVar1;
  
  if (0 < *(int *)&this_ptr->field_0x2d4) {
    fVar1 = *(float *)&this_ptr->field_0x2d8 + *(float *)&user->field_0x2538;
    *(float *)&user->field_0x2538 = fVar1;
    if ((float)_DAT_005e45f5 < fVar1) {
      *(uint *)&user->field_0x2538 = 0x42c80000;
    }
    *(int *)&this_ptr->field_0x2d4 = *(int *)&this_ptr->field_0x2d4 + -1;
  }
  return *(int *)&this_ptr->field_0x2d4;
}
