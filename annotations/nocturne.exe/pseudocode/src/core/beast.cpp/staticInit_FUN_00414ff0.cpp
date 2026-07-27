// Name: core_beast.cpp_staticInit_FUN_00414ff0
// Address: 00414ff0
// Address Range: [[00414ff0, 00415013]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_staticInit_FUN_00414ff0(void)

#include "nocturne.h"

void __cdecl core_beast_cpp_staticInit_FUN_00414ff0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBeastActorType_007646b0,"CBeast",core_beast_cpp_FUN_00415020,
             &g_INT_005acfe4,1,&g_CEnemyActorType_01bcdebc);
  return;
}
