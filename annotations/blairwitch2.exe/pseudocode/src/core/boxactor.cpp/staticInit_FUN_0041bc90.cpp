// Name: core_boxactor.cpp_staticInit_FUN_0041bc90
// Address: 0041bc90
// Address Range: [[0041bc90, 0041bcf7]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_staticInit_FUN_0041bc90(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_staticInit_FUN_0041bc90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBoxActorClassInfo,"CBoxActor",
             core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00,&g_CBoxActorClassVersion,0x10,
             &g_CDemonActorClassInfo);
  __arrinit(g_LightActorFilters,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0060994c);
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLightActorClassInfo,"CLightActor",
             core_boxactor_cpp_factoryFuncLightActor_FUN_0041cf30,&g_INT_00609960,2,
             &g_CBoxActorClassInfo);
  return;
}
