// Name: core_darkwolf.cpp_staticInit_FUN_00598700
// Address: 00598700
// Address Range: [[00598700, 00598746]]
// Convention: __cdecl
// Signature: void __cdecl core_darkwolf_cpp_staticInit_FUN_00598700(void)

#include "nocturne.h"

void __cdecl core_darkwolf_cpp_staticInit_FUN_00598700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDarkwolfClassInfo,"CDarkwolf",
             core_darkwolf_cpp_factoryFuncDarkwolf_FUN_00598750,&g_CDarkwolfClassVersion,2,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d24b5c,"CWhitewolf",core_darkwolf_cpp_FUN_00598fb0,
             (int *)0x6073ec,2,&g_CDarkwolfClassInfo);
  return;
}
