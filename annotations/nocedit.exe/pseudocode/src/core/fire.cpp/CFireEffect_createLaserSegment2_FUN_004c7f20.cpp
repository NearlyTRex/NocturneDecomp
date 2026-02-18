// Name: core_fire.cpp_CFireEffect_createLaserSegment2_FUN_004c7f20
// Address: 004c7f20
// Address Range: [[004c7f20, 004c7f7e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment2_FUN_004c7f20(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment2_FUN_004c7f20(CFireEffect *this_ptr)

{
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  float in_stack_00000020;
  
  if (0x3f < g_LaserBeamActiveCount) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004c2420
            (g_LaserBeamPool + g_LaserBeamActiveCount,in_stack_00000008,in_stack_0000000c,
             in_stack_00000010,0.0,(CVector3f *)0x0,in_stack_00000014,in_stack_00000018,
             in_stack_0000001c,0.02f,in_stack_00000020);
  g_LaserBeamActiveCount = g_LaserBeamActiveCount + 1;
  return;
}
