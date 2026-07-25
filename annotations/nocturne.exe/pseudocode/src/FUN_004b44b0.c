// Name: FUN_004b44b0
// Address: 004b44b0
// Address Range: [[004b44b0, 004b44f3]]
// Convention: unknown
// Signature: void FUN_004b44b0(void)

#include "nocturne.h"

void FUN_004b44b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            ((CDemonActorType *)0x1cae0ec,"CHero",(CDemonActor_FactoryFunc *)0x0,
             &INT_005ba940,0xc,&CDemonActorType_00765a60);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            ((CDemonActorType *)0x1cae128,"CHeroPlaceholder",FUN_004b5f60,&INT_005ba944,1,
             &CDemonActorType_00763e48);
  return;
}
