// Name: core_boxactor.cpp_staticInit_FUN_0041e260
// Address: 0041e260
// Address Range: [[0041e260, 0041e2c7]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_staticInit_FUN_0041e260(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_staticInit_FUN_0041e260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBoxActorActorType_00764800,"CBoxActor",
             core_boxactor_cpp_factoryFuncBoxActor_FUN_0041e2d0,&g_INT_005ad09c,0xf,
             &g_CDemonActorActorType_00763e48);
  __arrinit
            (g_CDemonFilter_ARRAY_0076483c,8,&g_CDemonFilterTypeInfo_0059ac90);
  _atexit(&g_WatcomStaticDestructorNode_005ad08c);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLightActorActorType_00764a9c,"CLightActor",
             core_boxactor_cpp_factoryFuncLightActor_FUN_0041f2e0,&INT_005ad0a0,2,
             &g_CBoxActorActorType_00764800);
  return;
}
