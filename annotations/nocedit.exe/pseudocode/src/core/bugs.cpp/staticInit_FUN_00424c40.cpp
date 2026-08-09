// Name: core_bugs.cpp_staticInit_FUN_00424c40
// Address: 00424c40
// Address Range: [[00424c40, 00424c63]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_staticInit_FUN_00424c40(void)

#include "nocturne.h"

void __cdecl core_bugs_cpp_staticInit_FUN_00424c40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBugsClassInfo,"CBugs",core_bugs_cpp_factoryFuncBugs_FUN_00424c70,
             &g_CBugsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
