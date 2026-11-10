// Name: core_unionzom.cpp_CUnionZombie_renderTransparent_FUN_005a4710
// Address: 005a4710
// Address Range: [[005a4710, 005a4735]]
// Convention: __cdecl
// Signature: int __cdecl core_unionzom_cpp_CUnionZombie_renderTransparent_FUN_005a4710(CUnionZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_unionzom_cpp_CUnionZombie_renderTransparent_FUN_005a4710(CUnionZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980((CBasicEnemy *)this_ptr);
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x264);
  return iVar1;
}
