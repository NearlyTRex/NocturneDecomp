// Name: core_armour.cpp_staticInit_FUN_00412130
// Address: 00412130
// Address Range: [[00412130, 00412153]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_staticInit_FUN_00412130(void)

#include "nocturne.h"

void __cdecl core_armour_cpp_staticInit_FUN_00412130(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CArmourClassInfo,"CArmour",core_armour_cpp_factoryFuncArmour_FUN_00412160,
             &g_CArmourClassVersion,1,&g_CEnemyClassInfo);
  return;
}
