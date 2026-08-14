// Name: core_fire.cpp_CRainDrop_arrdtor_FUN_004c97d0
// Address: 004c97d0
// Address Range: [[004c97d0, 004c97e7]]
// Convention: __cdecl
// Signature: CRainDrop * __cdecl core_fire_cpp_CRainDrop_arrdtor_FUN_004c97d0(CRainDrop *this_ptr,uint flags)

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_arrdtor_FUN_004c97d0(CRainDrop *this_ptr,uint flags)

{
  CRainDrop *pCVar1;
  
  pCVar1 = (CRainDrop *)__arrfini(this_ptr,0x100,&g_CRainDropTypeInfo);
  return pCVar1;
}
