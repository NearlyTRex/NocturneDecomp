// Name: core_actor.cpp_CActorProperty_getValueWidth_FUN_0040ee50
// Address: 0040ee50
// Address Range: [[0040ee50, 0040ee82]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CActorProperty_getValueWidth_FUN_0040ee50(CActorProperty *this_ptr,int index)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CActorProperty_getValueWidth_FUN_0040ee50(CActorProperty *this_ptr,int index)

{
  int iVar1;
  char acStack_12c [300];
  
  core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(this_ptr,(CDemonActor *)index,acStack_12c);
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(acStack_12c);
  return iVar1;
}
