// Name: core_trash.cpp_staticInit_FUN_0056d180
// Address: 0056d180
// Address Range: [[0056d180, 0056d1a3]]
// Convention: unknown
// Signature: void core_trash_cpp_staticInit_FUN_0056d180(void)

#include "nocturne.h"

void core_trash_cpp_staticInit_FUN_0056d180(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTrashClassInfo,"CTrash",core_trash_cpp_factoryFuncTrash_FUN_0056d1b0,
             &g_CTrashClassVersion,1,&g_CDemonActorClassInfo);
  return;
}
