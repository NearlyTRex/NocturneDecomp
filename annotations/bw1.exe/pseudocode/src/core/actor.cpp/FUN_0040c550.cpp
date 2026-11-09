// Name: core_actor.cpp_FUN_0040c550
// Address: 0040c550
// Address Range: [[0040c550, 0040c577]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_FUN_0040c550(CDemonActor *actor_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_FUN_0040c550(CDemonActor *actor_ptr,char *class_name)

{
  uint uVar1;
  int iVar2;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0xcc))(actor_ptr,class_name);
  iVar2 = core_actor_cpp_matchesClassName_FUN_0040c5b0(uVar1);
  return iVar2;
}
