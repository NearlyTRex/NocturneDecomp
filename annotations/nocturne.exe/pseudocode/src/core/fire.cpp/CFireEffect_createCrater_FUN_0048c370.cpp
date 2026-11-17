// Name: core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
// Address: 0048c370
// Address Range: [[0048c370, 0048c3b3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_CCrater_activate_FUN_004876d0(g_CraterPool + g_CraterAllocIndex,position,radius);
  g_CraterAllocIndex = g_CraterAllocIndex + 1;
  if (g_CraterAllocIndex < 0x14) {
    return;
  }
  g_CraterAllocIndex = 0;
  return;
}
