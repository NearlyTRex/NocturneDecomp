// Name: core_tvbat.cpp_staticInit_FUN_00580260
// Address: 00580260
// Address Range: [[00580260, 00580283]]
// Convention: unknown
// Signature: void core_tvbat_cpp_staticInit_FUN_00580260(void)

#include "nocturne.h"

void core_tvbat_cpp_staticInit_FUN_00580260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTVBatClassInfo,(char *)0x5ed834,core_tvbat_cpp_factoryFuncTVBat_FUN_00580290,
             &g_CTVBatClassVersion,5,&g_CEnemyClassInfo);
  return;
}
