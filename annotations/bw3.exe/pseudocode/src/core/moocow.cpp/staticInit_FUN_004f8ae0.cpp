// Name: core_moocow.cpp_staticInit_FUN_004f8ae0
// Address: 004f8ae0
// Address Range: [[004f8ae0, 004f8b03]]
// Convention: unknown
// Signature: void core_moocow_cpp_staticInit_FUN_004f8ae0(void)

#include "nocturne.h"

void core_moocow_cpp_staticInit_FUN_004f8ae0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CMooCowClassInfo,"CMooCow",core_moocow_cpp_factoryFuncMooCow_FUN_004f8b10,
             &g_CMooCowClassVersion,1,&g_CCharacterClassInfo);
  return;
}
