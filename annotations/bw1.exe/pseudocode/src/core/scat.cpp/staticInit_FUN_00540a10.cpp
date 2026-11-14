// Name: core_scat.cpp_staticInit_FUN_00540a10
// Address: 00540a10
// Address Range: [[00540a10, 00540a33]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_staticInit_FUN_00540a10(void)

#include "nocturne.h"

void __cdecl core_scat_cpp_staticInit_FUN_00540a10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CScatClassInfo,(char *)0x5edcb7,core_scat_cpp_factoryFuncScat_FUN_00540aa0,
             &g_CScatClassVersion,1,&g_CHeroClassInfo);
  return;
}
