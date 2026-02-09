// Name: core_fire.cpp_freePopcorn_FUN_004c97f0
// Address: 004c97f0
// Address Range: [[004c97f0, 004c9807]]
// Convention: __cdecl
// Signature: CPopcorn * __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn *objs)

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn *objs)

{
  CPopcorn *pCVar1;
  
  pCVar1 = (CPopcorn *)__arrfini(objs,0x100,&g_CPopcornTypeInfo);
  return pCVar1;
}
