// Name: core_drip.cpp_staticInit_FUN_00485300
// Address: 00485300
// Address Range: [[00485300, 00485330]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_staticInit_FUN_00485300(void)

#include "nocturne.h"

void __cdecl core_drip_cpp_staticInit_FUN_00485300(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDripClassInfo,(char *)0x5db566,core_drip_cpp_factoryFuncDrip_FUN_00485340,
             &g_CDripClassVersion,6,&g_CDemonActorClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860((CKeyFramedModelInstance *)0x1beee04);
  return;
}
