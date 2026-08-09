// Name: core_bugs.cpp_staticInit_FUN_00420fe0
// Address: 00420fe0
// Address Range: [[00420fe0, 00421003]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_staticInit_FUN_00420fe0(void)

#include "nocturne.h"

void __cdecl core_bugs_cpp_staticInit_FUN_00420fe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBugsActorType_00765888,"CBugs",core_bugs_cpp_factoryFuncBugs_FUN_00421010,
             &g_INT_005ad0f4,1,&g_CEnemyActorType_01bcdebc);
  return;
}
