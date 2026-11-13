// Name: core_bugs.cpp_staticInit_FUN_0041eef0
// Address: 0041eef0
// Address Range: [[0041eef0, 0041ef13]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_staticInit_FUN_0041eef0(void)

#include "nocturne.h"

void __cdecl core_bugs_cpp_staticInit_FUN_0041eef0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBugsClassInfo,(char *)0x5cc901,core_bugs_cpp_factoryFuncBugs_FUN_0041ef20,
             &g_CBugsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
