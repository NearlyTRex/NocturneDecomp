// Name: core_armour.cpp_staticInit_FUN_0040ede0
// Address: 0040ede0
// Address Range: [[0040ede0, 0040ee03]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_staticInit_FUN_0040ede0(void)

#include "nocturne.h"

void __cdecl core_armour_cpp_staticInit_FUN_0040ede0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CArmourClassInfo,"CArmour",core_armour_cpp_factoryFuncArmour_FUN_0040ee10,
             &g_CArmourClassVersion,1,&g_CEnemyClassInfo);
  return;
}
