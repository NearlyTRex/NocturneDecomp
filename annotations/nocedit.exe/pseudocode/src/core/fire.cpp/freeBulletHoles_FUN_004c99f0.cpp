// Name: core_fire.cpp_freeBulletHoles_FUN_004c99f0
// Address: 004c99f0
// Address Range: [[004c99f0, 004c9a07]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeBulletHoles_FUN_004c99f0(CBulletHole * * array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CBulletHoleTypeInfo);
  return;
}
