// Name: core_fire.cpp_CStake_process_FUN_004acf20
// Address: 004acf20
// Address Range: [[004acf20, 004acf41]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_process_FUN_004acf20(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_process_FUN_004acf20(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_0041e130
            ((CBox *)&this_ptr->field_0x4,*(float *)&g_CGamePtr->field_0x294);
  return;
}
