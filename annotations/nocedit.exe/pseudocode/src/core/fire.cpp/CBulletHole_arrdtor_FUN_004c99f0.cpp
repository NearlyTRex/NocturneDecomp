// Name: core_fire.cpp_CBulletHole_arrdtor_FUN_004c99f0
// Address: 004c99f0
// Address Range: [[004c99f0, 004c9a07]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_CBulletHole_arrdtor_FUN_004c99f0(CBulletHole *objs,uint flags)

#include "nocturne.h"

CBulletHole * __cdecl core_fire_cpp_CBulletHole_arrdtor_FUN_004c99f0(CBulletHole *objs,uint flags)

{
  CBulletHole *pCVar1;
  
  pCVar1 = (CBulletHole *)__arrfini(objs,0x100,&g_CBulletHoleTypeInfo);
  return pCVar1;
}
