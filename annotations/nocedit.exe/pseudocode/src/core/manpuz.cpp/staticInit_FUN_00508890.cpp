// Name: core_manpuz.cpp_staticInit_FUN_00508890
// Address: 00508890
// Address Range: [[00508890, 005088d6]]
// Convention: __cdecl
// Signature: CDemonActorType * core_manpuz.cpp_staticInit_FUN_00508890(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_manpuz_cpp_staticInit_FUN_00508890(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMansionPuzzleCircleClassInfo,"CMansionPuzzleCircle",
             core_manpuz_cpp_FUN_005088e0,&g_CMansionPuzzleCircleClassVersion,3,
             &g_CDemonActorClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMirrorHackClassInfo,"CMirrorHack",core_manpuz_cpp_FUN_0050b0d0,
                      &g_CMirrorHackClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}
