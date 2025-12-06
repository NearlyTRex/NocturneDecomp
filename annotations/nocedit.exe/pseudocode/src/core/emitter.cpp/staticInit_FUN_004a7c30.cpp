// Name: core_emitter.cpp_staticInit_FUN_004a7c30
// Address: 004a7c30
// Address Range: [[004a7c30, 004a7c53]]
// Convention: __cdecl
// Signature: CDemonActorType * core_emitter.cpp_staticInit_FUN_004a7c30(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_emitter_cpp_staticInit_FUN_004a7c30(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CEmitterClassInfo,"CEmitter",core_emitter_cpp_FUN_004a7c60,
                      &g_CEmitterClassVersion,7,&g_CDemonActorClassInfo);
  return pCVar1;
}
