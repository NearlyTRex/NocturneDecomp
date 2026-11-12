// Name: core_construc.cpp_staticInit_FUN_00442380
// Address: 00442380
// Address Range: [[00442380, 004423e9]]
// Convention: unknown
// Signature: void core_construc_cpp_staticInit_FUN_00442380(void)

#include "nocturne.h"

void core_construc_cpp_staticInit_FUN_00442380(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CConstructClassInfo,"CConstruct",
             core_construc_cpp_factoryFuncConstruct_FUN_004423f0,&g_CConstructClassVersion,3,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007f8edc,"CConstruct_Bone",
             core_construc_cpp_FUN_00444520,(int *)0x5f170c,1,&g_CConstructClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007f8f18,"CConstruct_Red",
             core_construc_cpp_FUN_004445d0,(int *)0x5f1710,1,&g_CConstructClassInfo);
  return;
}
