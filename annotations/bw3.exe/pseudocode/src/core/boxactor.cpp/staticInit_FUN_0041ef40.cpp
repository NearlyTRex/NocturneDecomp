// Name: core_boxactor.cpp_staticInit_FUN_0041ef40
// Address: 0041ef40
// Address Range: [[0041ef40, 0041efa7]]
// Convention: unknown
// Signature: void core_boxactor_cpp_staticInit_FUN_0041ef40(void)

#include "nocturne.h"

void core_boxactor_cpp_staticInit_FUN_0041ef40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBoxActorClassInfo,"p?CBoxActor" + 2,
             core_boxactor_cpp_factoryFuncBoxActor_FUN_0041efb0,&g_CBoxActorClassVersion,0x12,
             &g_CDemonActorClassInfo);
  __arrinit(CDemonFilter_ARRAY_007e17b8,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005f0e28);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007e1a18,"CLightActor",core_boxactor_cpp_FUN_00420330,
             (int *)0x5f0e3c,2,&g_CBoxActorClassInfo);
  return;
}
