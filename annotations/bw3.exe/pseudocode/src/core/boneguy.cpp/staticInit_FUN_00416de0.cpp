// Name: core_boneguy.cpp_staticInit_FUN_00416de0
// Address: 00416de0
// Address Range: [[00416de0, 00416e8f]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_staticInit_FUN_00416de0(void)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_staticInit_FUN_00416de0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBoneGuyClassInfo,"?CBoneGuy" + 1,
             core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050,&g_CBoneGuyClassVersion,5,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007e1688,"CSkeleton_Forest",
             core_boneguy_cpp_FUN_004198b0,(int *)0x5f0d78,1,&g_CBoneGuyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007e16c4,"CSkeleton_Indian",
             core_boneguy_cpp_FUN_00419950,(int *)0x5f0d7c,1,&g_CBoneGuyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007e1700,"CSkeleton_Demon",
             core_boneguy_cpp_FUN_004199f0,(int *)0x5f0d80,1,&g_CBoneGuyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007e173c,"CBaalSkel",core_boneguy_cpp_FUN_00419a90,
             (int *)0x5f0d84,1,&g_CBoneGuyClassInfo);
  return;
}
