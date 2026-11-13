// Name: core_moocow.cpp_staticInit_FUN_005212a0
// Address: 005212a0
// Address Range: [[005212a0, 005212c3]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_staticInit_FUN_005212a0(void)

#include "nocturne.h"

void __cdecl core_moocow_cpp_staticInit_FUN_005212a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMooCowClassInfo,"CMooCow",core_moocow_cpp_factoryFuncMooCow_FUN_005212d0,
             &g_CMooCowClassVersion,1,&g_CCharacterClassInfo);
  return;
}
