// Name: core_confzomb.cpp_CConfederateZombie_renderTransparent_FUN_005a2630
// Address: 005a2630
// Address Range: [[005a2630, 005a2655]]
// Convention: __cdecl
// Signature: int __cdecl core_confzomb_cpp_CConfederateZombie_renderTransparent_FUN_005a2630(CConfederateZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_confzomb_cpp_CConfederateZombie_renderTransparent_FUN_005a2630(CConfederateZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980((CBasicEnemy *)this_ptr);
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x264);
  return iVar1;
}
