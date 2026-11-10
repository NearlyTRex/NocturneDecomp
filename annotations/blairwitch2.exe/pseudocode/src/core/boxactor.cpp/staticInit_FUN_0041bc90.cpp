// Name: core_boxactor.cpp_staticInit_FUN_0041bc90
// Address: 0041bc90
// Address Range: [[0041bc90, 0041bcf7]]
// Convention: unknown
// Signature: void core_boxactor_cpp_staticInit_FUN_0041bc90(void)

#include "nocturne.h"

void core_boxactor_cpp_staticInit_FUN_0041bc90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBoxActorClassInfo,"p?CBoxActor" + 2,
             core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00,&g_CBoxActorClassVersion,0x10,
             &g_CDemonActorClassInfo);
  __arrinit(CDemonFilter_ARRAY_007bc9ec,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0060994c);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)&DAT_007bcc4c,"CLightActor",
             core_boxactor_cpp_factoryFuncLightActor_FUN_0041cf30,(int *)0x609960,2,
             &g_CBoxActorClassInfo);
  return;
}
