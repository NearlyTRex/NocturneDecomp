// Name: core_fire.cpp_freeLaserBeams_FUN_004c98f0
// Address: 004c98f0
// Address Range: [[004c98f0, 004c9904]]
// Convention: __cdecl
// Signature: CLaserBeam * __cdecl core_fire_cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam *objs)

#include "nocturne.h"

CLaserBeam * __cdecl core_fire_cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam *objs)

{
  CLaserBeam *pCVar1;
  
  pCVar1 = (CLaserBeam *)__arrfini(objs,0x40,&g_CLaserBeamTypeInfo);
  return pCVar1;
}
