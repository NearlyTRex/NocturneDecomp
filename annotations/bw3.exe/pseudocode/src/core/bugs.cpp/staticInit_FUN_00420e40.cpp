// Name: core_bugs.cpp_staticInit_FUN_00420e40
// Address: 00420e40
// Address Range: [[00420e40, 00420e63]]
// Convention: unknown
// Signature: void core_bugs_cpp_staticInit_FUN_00420e40(void)

#include "nocturne.h"

void core_bugs_cpp_staticInit_FUN_00420e40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBugsClassInfo,(char *)0x5b76f9,core_bugs_cpp_factoryFuncBugs_FUN_00420e70,
             &g_CBugsClassVersion,2,&g_CEnemyClassInfo);
  return;
}
