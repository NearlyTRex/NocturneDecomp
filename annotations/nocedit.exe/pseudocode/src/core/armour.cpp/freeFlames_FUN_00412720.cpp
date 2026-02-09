// Name: core_armour.cpp_freeFlames_FUN_00412720
// Address: 00412720
// Address Range: [[00412720, 00412734]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_armour_cpp_freeFlames_FUN_00412720(CFlame *objs)

#include "nocturne.h"

CFlame * __cdecl core_armour_cpp_freeFlames_FUN_00412720(CFlame *objs)

{
  CFlame *pCVar1;
  
  pCVar1 = (CFlame *)__arrfini(objs,0x32,&g_CFlameTypeInfo);
  return pCVar1;
}
