// Name: core_trash.cpp_staticInit_FUN_005768d0
// Address: 005768d0
// Address Range: [[005768d0, 005768f3]]
// Convention: unknown
// Signature: void core_trash_cpp_staticInit_FUN_005768d0(void)

#include "nocturne.h"

void core_trash_cpp_staticInit_FUN_005768d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTrashClassInfo,"CTrash",core_trash_cpp_factoryFuncTrash_FUN_00576900,
             &g_CTrashClassVersion,1,&g_CDemonActorClassInfo);
  return;
}
