// Name: core_fire.cpp_freeSparks_FUN_004c99b0
// Address: 004c99b0
// Address Range: [[004c99b0, 004c99c7]]
// Convention: __cdecl
// Signature: CSpark * __cdecl core_fire_cpp_freeSparks_FUN_004c99b0(CSpark *objs)

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_freeSparks_FUN_004c99b0(CSpark *objs)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)__arrfini(objs,0x100,&g_CSparkTypeInfo);
  return pCVar1;
}
