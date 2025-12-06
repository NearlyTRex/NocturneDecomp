// Name: core_tbplayer.cpp_staticInit_FUN_005d9fd0
// Address: 005d9fd0
// Address Range: [[005d9fd0, 005da016]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tbplayer.cpp_staticInit_FUN_005d9fd0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_tbplayer_cpp_staticInit_FUN_005d9fd0(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBassPlayerClassInfo,"CBassPlayer",core_tbplayer_cpp_FUN_005da020,
             &g_CBassPlayerClassVersion,1,&g_CNPCClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CDrummerClassInfo,"CDrummer",core_tbplayer_cpp_FUN_005da280,
                      &g_CDrummerClassVersion,1,&g_CNPCClassInfo);
  return pCVar1;
}
