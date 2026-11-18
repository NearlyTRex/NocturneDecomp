// Name: core_boneguy.cpp_staticInit_FUN_00416de0
// Address: 00416de0
// Address Range: [[00416de0, 00416e8f]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_staticInit_FUN_00416de0(void)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_staticInit_FUN_00416de0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBoneGuyClassInfo,"CBoneGuy",
             core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050,&g_CBoneGuyClassVersion,5,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_007e1688,"CSkeleton_Forest",
             core_boneguy_cpp_factoryFuncSkeletonForest_FUN_004198b0,&g_INT_005f0d78,1,
             &g_CBoneGuyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_007e16c4,"CSkeleton_Indian",
             core_boneguy_cpp_factoryFuncSkeletonIndian_FUN_00419950,&g_INT_005f0d7c,1,
             &g_CBoneGuyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_007e1700,"CSkeleton_Demon",
             core_boneguy_cpp_factoryFuncSkeletonDemon_FUN_004199f0,&g_INT_005f0d80,1,
             &g_CBoneGuyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_007e173c,"CBaalSkel",
             core_boneguy_cpp_factoryFuncBaalSkel_FUN_00419a90,&g_INT_005f0d84,1,
             &g_CBoneGuyClassInfo);
  return;
}
