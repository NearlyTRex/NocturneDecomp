// Name: core_firestff.cpp_staticInit_FUN_004a4a70
// Address: 004a4a70
// Address Range: [[004a4a70, 004a4a93]]
// Convention: unknown
// Signature: void core_firestff_cpp_staticInit_FUN_004a4a70(void)

#include "nocturne.h"

void core_firestff_cpp_staticInit_FUN_004a4a70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFirestaffClassInfo,"CFirestaff",
             core_firestff_cpp_factoryFuncFirestaff_FUN_004a4aa0,&g_CFirestaffClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
