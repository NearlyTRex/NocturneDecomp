// Name: core_fire.cpp_FUN_00497e80
// Address: 00497e80
// Address Range: [[00497e80, 00497ea1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_00497e80(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_00497e80(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_0041b470
            ((CBox *)&this_ptr->field_0x4,*(float *)&g_CGamePtr->field_0x314);
  return;
}
