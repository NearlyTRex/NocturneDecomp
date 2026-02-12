// Name: core_armour.cpp_SFire_arrdtor_FUN_00412700
// Address: 00412700
// Address Range: [[00412700, 00412714]]
// Convention: __cdecl
// Signature: SFire * __cdecl core_armour_cpp_SFire_arrdtor_FUN_00412700(SFire *objs,uint flags)

#include "nocturne.h"

SFire * __cdecl core_armour_cpp_SFire_arrdtor_FUN_00412700(SFire *objs,uint flags)

{
  SFire *pSVar1;
  
  pSVar1 = (SFire *)__arrfini(objs,0x32,&g_SFireTypeInfo);
  return pSVar1;
}
