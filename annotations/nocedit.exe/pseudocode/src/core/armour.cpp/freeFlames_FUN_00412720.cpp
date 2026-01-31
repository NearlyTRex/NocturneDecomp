// Name: core_armour.cpp_freeFlames_FUN_00412720
// Address: 00412720
// Address Range: [[00412720, 00412734]]
// Convention: __cdecl
// Signature: int __cdecl core_armour_cpp_freeFlames_FUN_00412720(CFlame **array)

#include "nocturne.h"

int __cdecl core_armour_cpp_freeFlames_FUN_00412720(CFlame **array)

{
  int iVar1;
  
  iVar1 = __arrfini(array,0x32,&g_CFlameTypeInfo);
  return iVar1;
}
