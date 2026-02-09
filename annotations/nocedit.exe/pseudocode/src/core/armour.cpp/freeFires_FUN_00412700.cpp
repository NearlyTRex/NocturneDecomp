// Name: core_armour.cpp_freeFires_FUN_00412700
// Address: 00412700
// Address Range: [[00412700, 00412714]]
// Convention: __cdecl
// Signature: SFire * __cdecl core_armour_cpp_freeFires_FUN_00412700(SFire *objs)

#include "nocturne.h"

SFire * __cdecl core_armour_cpp_freeFires_FUN_00412700(SFire *objs)

{
  SFire *pSVar1;
  
  pSVar1 = (SFire *)__arrfini(objs,0x32,&g_SFireTypeInfo);
  return pSVar1;
}
