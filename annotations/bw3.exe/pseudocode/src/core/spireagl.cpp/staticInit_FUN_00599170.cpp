// Name: core_spireagl.cpp_staticInit_FUN_00599170
// Address: 00599170
// Address Range: [[00599170, 00599193]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_staticInit_FUN_00599170(void)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_staticInit_FUN_00599170(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSpiritEagleClassInfo,"CSpiritEagle",
             core_spireagl_cpp_factoryFuncSpiritEagle_FUN_005991a0,&g_CSpiritEagleClassVersion,2,
             &g_CCharacterClassInfo);
  return;
}
