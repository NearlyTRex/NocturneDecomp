// Name: core_actor.cpp_CActorProperty_getNameWidth_FUN_0040ee30
// Address: 0040ee30
// Address Range: [[0040ee30, 0040ee40]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CActorProperty_getNameWidth_FUN_0040ee30(CActorProperty *this_ptr)

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorProperty_getNameWidth_FUN_0040ee30(CActorProperty *this_ptr)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(this_ptr->name);
  return iVar1;
}
