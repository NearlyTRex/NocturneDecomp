// Name: core_actor.cpp_castToClassHash_FUN_0040c600
// Address: 0040c600
// Address Range: [[0040c600, 0040c622]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c600(CDemonActor *actor_ptr,uint class_name_hash)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c600(CDemonActor *actor_ptr,uint class_name_hash)

{
  int iVar1;
  
  if ((actor_ptr != (CDemonActor *)0x0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c5d0(actor_ptr,class_name_hash), iVar1 != 0)) {
    return actor_ptr;
  }
  return (CDemonActor *)0x0;
}
