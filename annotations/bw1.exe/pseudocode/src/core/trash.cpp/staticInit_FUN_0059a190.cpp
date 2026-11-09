// Name: core_trash.cpp_staticInit_FUN_0059a190
// Address: 0059a190
// Address Range: [[0059a190, 0059a1b3]]
// Convention: unknown
// Signature: void core_trash_cpp_staticInit_FUN_0059a190(void)

#include "nocturne.h"

void core_trash_cpp_staticInit_FUN_0059a190(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTrashClassInfo,"CTrash",core_trash_cpp_factoryFuncTrash_FUN_0059a1c0,
             &g_CTrashClassVersion,1,&g_CDemonActorClassInfo);
  return;
}
