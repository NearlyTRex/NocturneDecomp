// Name: core_boneguy.cpp_staticInit_FUN_00417d30
// Address: 00417d30
// Address Range: [[00417d30, 00417d53]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_staticInit_FUN_00417d30(void)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_staticInit_FUN_00417d30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBoneGuyClassInfo,"?CBoneGuy" + 1,
             core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417f20,&g_CBoneGuyClassVersion,5,
             &g_CEnemyClassInfo);
  return;
}
