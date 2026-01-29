// Name: core_fire.cpp_freeLaserBeams_FUN_004c98f0
// Address: 004c98f0
// Address Range: [[004c98f0, 004c9904]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam **array)

{
  __arrfini(array,0x40,&g_CLaserBeamTypeInfo);
  return;
}
