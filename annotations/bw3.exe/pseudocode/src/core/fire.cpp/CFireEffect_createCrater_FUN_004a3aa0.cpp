// Name: core_fire.cpp_CFireEffect_createCrater_FUN_004a3aa0
// Address: 004a3aa0
// Address Range: [[004a3aa0, 004a3ae3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_CCrater_activate_FUN_0049d590
            (g_CCrater_ARRAY_01cfaff8 + g_INT_01cfaff4,position,radius);
  g_INT_01cfaff4 = g_INT_01cfaff4 + 1;
  if (g_INT_01cfaff4 < 0x14) {
    return;
  }
  g_INT_01cfaff4 = 0;
  return;
}
