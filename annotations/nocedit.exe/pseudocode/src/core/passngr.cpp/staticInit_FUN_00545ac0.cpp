// Name: core_passngr.cpp_staticInit_FUN_00545ac0
// Address: 00545ac0
// Address Range: [[00545ac0, 00545ae3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_passngr.cpp_staticInit_FUN_00545ac0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_passngr_cpp_staticInit_FUN_00545ac0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CPassengerClassInfo,"CPassenger",core_passngr_cpp_FUN_00545af0,
                      &g_CPassengerClassVersion,6,&g_CNPCClassInfo);
  return pCVar1;
}
