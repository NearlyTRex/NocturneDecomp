// Name: core_gore.cpp_freeBloodPools_FUN_004ee440
// Address: 004ee440
// Address Range: [[004ee440, 004ee454]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_freeBloodPools_FUN_004ee440(CBloodPool *objs)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_freeBloodPools_FUN_004ee440(CBloodPool *objs)

{
  CBloodPool *pCVar1;
  
  pCVar1 = __arrfini(objs,0x20,&g_CBloodPoolTypeInfo);
  return pCVar1;
}
