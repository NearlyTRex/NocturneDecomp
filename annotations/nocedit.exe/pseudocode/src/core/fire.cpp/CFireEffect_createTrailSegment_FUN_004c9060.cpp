// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004c9060
// Address: 004c9060
// Address Range: [[004c9060, 004c90b6]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004c9060(CFireEffect *this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004c9060(CFireEffect *this_ptr)

{
  int extraout_EAX;
  CVector3f *in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  SMRGLTextureBasic *in_stack_00000018;
  
  core_fire_cpp_CTrail_activate_FUN_004c5df0
            (g_TrailPool + g_TrailAllocIndex,in_stack_00000008,in_stack_0000000c,in_stack_00000010,
             in_stack_00000014,in_stack_00000018);
  g_TrailAllocIndex = g_TrailAllocIndex + 1;
  if (g_TrailAllocIndex < 100) {
    return extraout_EAX;
  }
  g_TrailAllocIndex = 0;
  return extraout_EAX;
}
