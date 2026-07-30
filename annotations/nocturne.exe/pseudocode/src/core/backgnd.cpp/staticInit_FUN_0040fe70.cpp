// Name: core_backgnd.cpp_staticInit_FUN_0040fe70
// Address: 0040fe70
// Address Range: [[0040fe70, 0040fe93]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_staticInit_FUN_0040fe70(void)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_staticInit_FUN_0040fe70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBackgroundActorActorType_007642ac,"CBackgroundActor",
             core_backgnd_cpp_factoryFunc_FUN_0040fea0,&g_INT_005acf20,2,
             &g_CDemonActorActorType_00763e48);
  return;
}
