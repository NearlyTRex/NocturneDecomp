// Name: core_gore.cpp_freeBloodSplats_FUN_004ee460
// Address: 004ee460
// Address Range: [[004ee460, 004ee477]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_freeBloodSplats_FUN_004ee460(CBloodSplat *objs)

#include "nocturne.h"

CBloodSplat * __cdecl core_gore_cpp_freeBloodSplats_FUN_004ee460(CBloodSplat *objs)

{
  CBloodSplat *pCVar1;
  
  pCVar1 = (CBloodSplat *)__arrfini(objs,2000,&g_CBloodSplatTypeInfo);
  return pCVar1;
}
