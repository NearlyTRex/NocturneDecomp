// Name: core_dest.cpp_staticInit_FUN_0046f890
// Address: 0046f890
// Address Range: [[0046f890, 0046f8b3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_dest.cpp_staticInit_FUN_0046f890(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_dest_cpp_staticInit_FUN_0046f890(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CActorDestinationClassInfo,"CActorDestination",
                      core_dest_cpp_FUN_0046f8c0,&g_CActorDestinationClassVersion,4,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}
