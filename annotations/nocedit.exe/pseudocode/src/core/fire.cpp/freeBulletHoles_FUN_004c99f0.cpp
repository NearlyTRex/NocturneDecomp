// Name: core_fire.cpp_freeBulletHoles_FUN_004c99f0
// Address: 004c99f0
// Address Range: [[004c99f0, 004c9a07]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole **array)

{
  __arrfini(array,0x100,&g_CBulletHoleTypeInfo);
  return;
}
