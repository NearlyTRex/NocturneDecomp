// Name: core_boxactor.cpp_staticInit_FUN_00421c00
// Address: 00421c00
// Address Range: [[00421c00, 00421c67]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_staticInit_FUN_00421c00(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_staticInit_FUN_00421c00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBoxActorClassInfo,"p?CBoxActor" + 2,
             core_boxactor_cpp_factoryFuncBoxActor_FUN_00421c70,&g_CBoxActorClassVersion,0x10,
             &g_CDemonActorClassInfo);
  __arrinit(CDemonFilter_ARRAY_007c5098,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00610b4c);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)&DAT_007c52f8,"CLightActor",
             core_boxactor_cpp_factoryFuncLightActor_FUN_00422ea0,(int *)0x610b60,2,
             &g_CBoxActorClassInfo);
  return;
}
