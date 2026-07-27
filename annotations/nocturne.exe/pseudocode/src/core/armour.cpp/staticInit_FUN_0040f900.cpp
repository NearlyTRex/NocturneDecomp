// Name: core_armour.cpp_staticInit_FUN_0040f900
// Address: 0040f900
// Address Range: [[0040f900, 0040f923]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void)

#include "nocturne.h"

void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CArmourActorType_00764270,"CArmour",core_armour_cpp_FUN_0040f930,
             &g_INT_005acedc,1,&g_CEnemyActorType_01bcdebc);
  return;
}
