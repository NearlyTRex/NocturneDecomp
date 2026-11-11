// Name: core_dog1.cpp_CDog_renderTransparent_FUN_005ac720
// Address: 005ac720
// Address Range: [[005ac720, 005ac737]]
// Convention: __cdecl
// Signature: int __cdecl core_dog1_cpp_CDog_renderTransparent_FUN_005ac720(CDog *this_ptr)

#include "nocturne.h"

int __cdecl core_dog1_cpp_CDog_renderTransparent_FUN_005ac720(CDog *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  return (uint)(iVar1 != 0);
}
