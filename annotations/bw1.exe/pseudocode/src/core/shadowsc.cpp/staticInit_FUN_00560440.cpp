// Name: core_shadowsc.cpp_staticInit_FUN_00560440
// Address: 00560440
// Address Range: [[00560440, 00560463]]
// Convention: unknown
// Signature: void core_shadowsc_cpp_staticInit_FUN_00560440(void)

#include "nocturne.h"

void core_shadowsc_cpp_staticInit_FUN_00560440(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CShadowscClassInfo,"@CShadowsc" + 1,
             core_shadowsc_cpp_factoryFuncShadowsc_FUN_00560470,&g_CShadowscClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
