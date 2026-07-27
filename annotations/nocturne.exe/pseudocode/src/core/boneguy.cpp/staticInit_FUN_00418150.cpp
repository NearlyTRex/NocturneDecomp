// Name: core_boneguy.cpp_staticInit_FUN_00418150
// Address: 00418150
// Address Range: [[00418150, 00418173]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_staticInit_FUN_00418150(void)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_staticInit_FUN_00418150(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBoneGuyActorType_007647c0,"CBoneGuy",core_boneguy_cpp_FUN_004182a0,
             &g_INT_005ad054,5,&g_CEnemyActorType_01bcdebc);
  return;
}
