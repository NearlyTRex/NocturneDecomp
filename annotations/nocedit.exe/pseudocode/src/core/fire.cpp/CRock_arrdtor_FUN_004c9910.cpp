// Name: core_fire.cpp_CRock_arrdtor_FUN_004c9910
// Address: 004c9910
// Address Range: [[004c9910, 004c9924]]
// Convention: __cdecl
// Signature: CRock * __cdecl core_fire_cpp_CRock_arrdtor_FUN_004c9910(CRock *objs,uint flags)

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_arrdtor_FUN_004c9910(CRock *objs,uint flags)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)__arrfini(objs,0x40,&g_CRockTypeInfo);
  return pCVar1;
}
