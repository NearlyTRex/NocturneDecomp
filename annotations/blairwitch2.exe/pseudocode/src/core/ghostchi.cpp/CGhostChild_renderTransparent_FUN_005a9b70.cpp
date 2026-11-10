// Name: core_ghostchi.cpp_CGhostChild_renderTransparent_FUN_005a9b70
// Address: 005a9b70
// Address Range: [[005a9b70, 005a9b95]]
// Convention: __cdecl
// Signature: int __cdecl core_ghostchi_cpp_CGhostChild_renderTransparent_FUN_005a9b70(CGhostChild *this_ptr)

#include "nocturne.h"

int __cdecl core_ghostchi_cpp_CGhostChild_renderTransparent_FUN_005a9b70(CGhostChild *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980((CBasicEnemy *)this_ptr);
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x264);
  return iVar1;
}
