// Name: core_gore.cpp_CBloodPool_arrdtor32_FUN_004ee440
// Address: 004ee440
// Address Range: [[004ee440, 004ee454]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CBloodPool_arrdtor32_FUN_004ee440(CBloodPool *this_ptr,uint flags)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_CBloodPool_arrdtor32_FUN_004ee440(CBloodPool *this_ptr,uint flags)

{
  CBloodPool *pCVar1;
  
  pCVar1 = (CBloodPool *)__arrfini(this_ptr,0x20,&g_CBloodPoolTypeInfo);
  return pCVar1;
}
