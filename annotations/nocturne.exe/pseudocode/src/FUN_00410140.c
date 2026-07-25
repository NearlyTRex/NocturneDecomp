// Name: FUN_00410140
// Address: 00410140
// Address Range: [[00410140, 00410193]]
// Convention: unknown
// Signature: void FUN_00410140(void)

#include "nocturne.h"

void FUN_00410140(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&CDemonActorType_00764330,"CBaron",FUN_004101a0,&INT_005acf3c,2,
             (CDemonActorType *)0x1cae0ec);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&DAT_0076436c);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&CDemonActorType_007644e8,"CBaronWeapon",FUN_00411320,&INT_005acf58,1,
             (CDemonActorType *)0x2ddf970);
  return;
}
