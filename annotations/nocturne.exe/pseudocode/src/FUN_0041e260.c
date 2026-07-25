// Name: FUN_0041e260
// Address: 0041e260
// Address Range: [[0041e260, 0041e2c7]]
// Convention: unknown
// Signature: void FUN_0041e260(void)

#include "nocturne.h"

void FUN_0041e260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&CDemonActorType_00764800,"CBoxActor",FUN_0041e2d0,&INT_005ad09c,0xf,
             &CDemonActorType_00763e48);
  __arrinit(&DAT_0076483c,8,0x59ac90);
  FUN_00564bb0(0x5ad08c);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&CDemonActorType_00764a9c,"CLightActor",FUN_0041f2e0,&INT_005ad0a0,2,
             &CDemonActorType_00764800);
  return;
}
