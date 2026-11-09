// Name: core_hostage.cpp_staticInit_FUN_00454750
// Address: 00454750
// Address Range: [[00454750, 00454773]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_staticInit_FUN_00454750(void)

#include "nocturne.h"

void __cdecl core_hostage_cpp_staticInit_FUN_00454750(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemnfolkClassInfo,"BCDemnfolk" + 1,unkafter_hostage_cpp_FUN_00454b30,
             &g_CDemnfolkClassVersion,0xc,&g_CEnemyClassInfo);
  return;
}
