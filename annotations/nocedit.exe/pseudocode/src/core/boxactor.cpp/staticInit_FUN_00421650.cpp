// Name: core_boxactor.cpp_staticInit_FUN_00421650
// Address: 00421650
// Address Range: [[00421650, 004216b7]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_staticInit_FUN_00421650(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_staticInit_FUN_00421650(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBoxActorClassInfo,"CBoxActor",core_boxactor_cpp_factoryFunc_FUN_004216c0,
             &g_CBoxActorClassVersion,0xf,&g_CDemonActorClassInfo);
  __arrinit(CDemonFilter_ARRAY_008229ec,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0066e5cc);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CLightActorClassInfo,"CLightActor",
             core_boxactor_cpp_factoryFunc_FUN_00422950,&g_CLightActorClassVersion,2,
             &g_CBoxActorClassInfo);
  return;
}
