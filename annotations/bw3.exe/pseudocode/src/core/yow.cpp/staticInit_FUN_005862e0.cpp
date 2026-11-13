// Name: core_yow.cpp_staticInit_FUN_005862e0
// Address: 005862e0
// Address Range: [[005862e0, 00586303]]
// Convention: __cdecl
// Signature: void __cdecl core_yow_cpp_staticInit_FUN_005862e0(void)

#include "nocturne.h"

void __cdecl core_yow_cpp_staticInit_FUN_005862e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CYowClassInfo,(char *)0x5d81ef,core_yow_cpp_factoryFuncYow_FUN_00586310,
             &g_CYowClassVersion,1,&g_CEnemyClassInfo);
  return;
}
