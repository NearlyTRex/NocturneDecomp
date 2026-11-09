// Name: core_disease.cpp_staticInit_FUN_0045bf20
// Address: 0045bf20
// Address Range: [[0045bf20, 0045bf43]]
// Convention: unknown
// Signature: void core_disease_cpp_staticInit_FUN_0045bf20(void)

#include "nocturne.h"

void core_disease_cpp_staticInit_FUN_0045bf20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDiseaseClassInfo,"CDisease",
             core_disease_cpp_factoryFuncDisease_FUN_0045bf50,&g_CDiseaseClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
