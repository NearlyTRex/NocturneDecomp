// Name: core_platfrm.cpp_staticInit_FUN_00518050
// Address: 00518050
// Address Range: [[00518050, 00518073]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_staticInit_FUN_00518050(void)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_staticInit_FUN_00518050(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CPlatformClassInfo,"CPlatform",
             core_platfrm_cpp_factoryFuncPlatform_FUN_00518080,&g_CPlatformClassVersion,0xb,
             &g_CDemonActorClassInfo);
  return;
}
