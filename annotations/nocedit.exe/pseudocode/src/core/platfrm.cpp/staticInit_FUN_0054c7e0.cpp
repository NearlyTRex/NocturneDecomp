// Name: core_platfrm.cpp_staticInit_FUN_0054c7e0
// Address: 0054c7e0
// Address Range: [[0054c7e0, 0054c803]]
// Convention: __cdecl
// Signature: CDemonActorType * core_platfrm.cpp_staticInit_FUN_0054c7e0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_platfrm_cpp_staticInit_FUN_0054c7e0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CPlatformClassInfo,"CPlatform",core_platfrm_cpp_FUN_0054c810,
                      &g_CPlatformClassVersion,0xb,&g_CDemonActorClassInfo);
  return pCVar1;
}
