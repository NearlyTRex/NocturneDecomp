// Name: core_actor.cpp_FUN_0040c840
// Address: 0040c840
// Address Range: [[0040c840, 0040c867]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_FUN_0040c840(CDemonActor *actor_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_FUN_0040c840(CDemonActor *actor_ptr,char *class_name)

{
  uint uVar1;
  int iVar2;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*(int *)&actor_ptr->field_0x2b0 + 0xd4))(actor_ptr,class_name);
  iVar2 = core_actor_cpp_matchesClassName_FUN_0040c8a0(uVar1);
  return iVar2;
}
