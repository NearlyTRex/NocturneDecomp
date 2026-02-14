// Name: core_actor.cpp_castToClassHash_FUN_0040c790
// Address: 0040c790
// Address Range: [[0040c790, 0040c7b2]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,uint class_name_hash)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,uint class_name_hash)

{
  int iVar1;
  
  if ((actor_ptr != (CDemonActor *)0x0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c760(actor_ptr,class_name_hash), iVar1 != 0)) {
    return actor_ptr;
  }
  return (CDemonActor *)0x0;
}
