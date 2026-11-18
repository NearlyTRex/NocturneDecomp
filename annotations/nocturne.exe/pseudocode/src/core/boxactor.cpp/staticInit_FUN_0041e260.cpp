// Name: core_boxactor.cpp_staticInit_FUN_0041e260
// Address: 0041e260
// Address Range: [[0041e260, 0041e2c7]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_staticInit_FUN_0041e260(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_staticInit_FUN_0041e260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBoxActorClassInfo,"CBoxActor",
             core_boxactor_cpp_factoryFuncBoxActor_FUN_0041e2d0,&g_CBoxActorClassVersion,0xf,
             &g_CDemonActorClassInfo);
  __arrinit(g_LightActorFilters,8,&g_CDemonFilterTypeInfo_0059ac90);
  _atexit(&g_WatcomStaticDestructorNode_005ad08c);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLightActorClassInfo,"CLightActor",
             core_boxactor_cpp_factoryFuncLightActor_FUN_0041f2e0,&g_CLightActorClassVersion,2,
             &g_CBoxActorClassInfo);
  return;
}
