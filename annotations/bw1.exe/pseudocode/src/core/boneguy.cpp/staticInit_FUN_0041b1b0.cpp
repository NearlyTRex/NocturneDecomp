// Name: core_boneguy.cpp_staticInit_FUN_0041b1b0
// Address: 0041b1b0
// Address Range: [[0041b1b0, 0041b1d3]]
// Convention: unknown
// Signature: void core_boneguy_cpp_staticInit_FUN_0041b1b0(void)

#include "nocturne.h"

void core_boneguy_cpp_staticInit_FUN_0041b1b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBoneGuyClassInfo,"CBoneGuy",
             core_boneguy_cpp_factoryFuncBoneGuy_FUN_0041b3a0,&g_CBoneGuyClassVersion,5,
             &g_CEnemyClassInfo);
  return;
}
