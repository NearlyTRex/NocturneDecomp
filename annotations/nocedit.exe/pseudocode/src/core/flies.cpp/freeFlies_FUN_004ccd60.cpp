// Name: core_flies.cpp_freeFlies_FUN_004ccd60
// Address: 004ccd60
// Address Range: [[004ccd60, 004ccd77]]
// Convention: __cdecl
// Signature: SFly * __cdecl core_flies_cpp_freeFlies_FUN_004ccd60(SFly *objs)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_freeFlies_FUN_004ccd60(SFly *objs)

{
  SFly *pSVar1;
  
  pSVar1 = (SFly *)__arrfini(objs,200,&g_SFlyTypeInfo);
  return pSVar1;
}
