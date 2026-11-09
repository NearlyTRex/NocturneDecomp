// Name: core_demnfolk.cpp_staticInit_FUN_00458600
// Address: 00458600
// Address Range: [[00458600, 00458623]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_staticInit_FUN_00458600(void)

#include "nocturne.h"

void core_demnfolk_cpp_staticInit_FUN_00458600(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDemnfolkClassInfo,"BCDemnfolk" + 1,
             core_demnfolk_cpp_factoryFuncDemnfolk_FUN_004589e0,&g_CDemnfolkClassVersion,0xc,
             &g_CEnemyClassInfo);
  return;
}
