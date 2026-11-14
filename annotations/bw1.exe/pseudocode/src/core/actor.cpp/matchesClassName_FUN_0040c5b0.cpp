// Name: core_actor.cpp_matchesClassName_FUN_0040c5b0
// Address: 0040c5b0
// Address Range: [[0040c5b0, 0040c5cc]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_matchesClassName_FUN_0040c5b0(CDemonActorType *type_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_matchesClassName_FUN_0040c5b0(CDemonActorType *type_ptr,char *class_name)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_matchClassExpression_FUN_0040c490(type_ptr,&class_name);
  return (uint)(0 < iVar1);
}
