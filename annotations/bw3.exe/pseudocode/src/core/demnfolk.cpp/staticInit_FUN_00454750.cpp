// Name: core_demnfolk.cpp_staticInit_FUN_00454750
// Address: 00454750
// Address Range: [[00454750, 00454773]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_staticInit_FUN_00454750(void)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_staticInit_FUN_00454750(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemnfolkClassInfo,"BCDemnfolk" + 1,core_demnfolk_cpp_FUN_00454b30,
             &g_CDemnfolkClassVersion,0xc,&g_CEnemyClassInfo);
  return;
}
