// Name: core_bugs.cpp_staticInit_FUN_00424f20
// Address: 00424f20
// Address Range: [[00424f20, 00424f43]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_staticInit_FUN_00424f20(void)

#include "nocturne.h"

void __cdecl core_bugs_cpp_staticInit_FUN_00424f20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBugsClassInfo,(char *)0x5d4ff0,core_bugs_cpp_factoryFuncBugs_FUN_00424f50,
             &g_CBugsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
