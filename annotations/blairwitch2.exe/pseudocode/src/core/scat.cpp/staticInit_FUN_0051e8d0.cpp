// Name: core_scat.cpp_staticInit_FUN_0051e8d0
// Address: 0051e8d0
// Address Range: [[0051e8d0, 0051e8f3]]
// Convention: unknown
// Signature: void core_scat_cpp_staticInit_FUN_0051e8d0(void)

#include "nocturne.h"

void core_scat_cpp_staticInit_FUN_0051e8d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CScatClassInfo,"CScat",core_scat_cpp_factoryFuncScat_FUN_0051e970,
             &g_CScatClassVersion,1,&g_CHeroClassInfo);
  return;
}
