// Name: core_trash.cpp_staticInit_FUN_005deb00
// Address: 005deb00
// Address Range: [[005deb00, 005deb23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trash.cpp_staticInit_FUN_005deb00(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_trash_cpp_staticInit_FUN_005deb00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTrashClassInfo,"CTrash",core_trash_cpp_FUN_005deb30,
                      &g_CTrashClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}
