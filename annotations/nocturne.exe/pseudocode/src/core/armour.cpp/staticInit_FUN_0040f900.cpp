// Name: core_armour.cpp_staticInit_FUN_0040f900
// Address: 0040f900
// Address Range: [[0040f900, 0040f923]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void)

#include "nocturne.h"

void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CArmourClassInfo,"CArmour",core_armour_cpp_factoryFuncArmour_FUN_0040f930,
             &g_CArmourClassVersion,1,&g_CEnemyClassInfo);
  return;
}
