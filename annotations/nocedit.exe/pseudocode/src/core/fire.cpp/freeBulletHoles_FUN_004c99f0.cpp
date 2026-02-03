// Name: core_fire.cpp_freeBulletHoles_FUN_004c99f0
// Address: 004c99f0
// Address Range: [[004c99f0, 004c9a07]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole *objs)

#include "nocturne.h"

CBulletHole * __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole *objs)

{
  CBulletHole *pCVar1;
  
  pCVar1 = __arrfini(objs,0x100,&g_CBulletHoleTypeInfo);
  return pCVar1;
}
