// Name: core_fire.cpp_FUN_00494580
// Address: 00494580
// Address Range: [[00494580, 004945a1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_00494580(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_00494580(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_005b22f0
            ((CBox *)&this_ptr->field_0x4,*(float *)&g_CGamePtr->field_0x284);
  return;
}
