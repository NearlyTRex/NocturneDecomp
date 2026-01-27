// Name: core_minecar.cpp_staticInit_FUN_00520e20
// Address: 00520e20
// Address Range: [[00520e20, 00520e43]]
// Convention: __cdecl
// Signature: void core_minecar.cpp_staticInit_FUN_00520e20(void)

#include "nocturne.h"

void __cdecl core_minecar_cpp_staticInit_FUN_00520e20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMineCarClassInfo,"CMineCar",core_minecar_cpp_factoryFunc_FUN_00520e50,
             &g_CMineCarClassVersion,1,&g_CPlatformClassInfo);
  return;
}
