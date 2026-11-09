// Name: core_drone.cpp_staticInit_FUN_00485bf0
// Address: 00485bf0
// Address Range: [[00485bf0, 00485c13]]
// Convention: unknown
// Signature: void core_drone_cpp_staticInit_FUN_00485bf0(void)

#include "nocturne.h"

void core_drone_cpp_staticInit_FUN_00485bf0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDroneClassInfo,"ACDrone" + 1,core_drone_cpp_factoryFuncDrone_FUN_00485c20,
             &g_CDroneClassVersion,2,&g_CEnemyClassInfo);
  return;
}
