// Name: core_actor.cpp_matchesClassName_FUN_0040c740
// Address: 0040c740
// Address Range: [[0040c740, 0040c75c]]
// Convention: __cdecl
// Signature: int core_actor.cpp_matchesClassName_FUN_0040c740(CDemonActorType * type_ptr, char * class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_matchesClassName_FUN_0040c740(CDemonActorType *type_ptr,char *class_name)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = core_actor_cpp_matchClassExpression_FUN_0040c610(type_ptr,&class_name);
  return (uint)(0 < iVar1);
}
